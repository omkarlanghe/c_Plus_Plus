#include<iostream>
#include<vector>
#include<map>
#include<set>

using namespace std;

string make_plural(size_t, const string &, const string &);
void TextQuery::store_file(ifstream &);
void TextQuery::build_map();
set<TextQuery::line_no> TextQuery::run_query(const string &);
string TextQuery::text_line(line_no);

public class TextQuery {
	public:
		// typedefs to make declarations easier
		typedef std::vector<std::string>::size_type line_no;
		/*
		 * interface:
		 * read_file builds internal data structure for the given file
		 * run_query finds the given word and returns set of lines on which it appears
		 * text_line returns a requested line from the input file*/

		void read_file(std::ifstream &is) {
			store_file(is);
			build_map();
		}
		std::set<line_no> run_query(const std::string&) const;
		std::string text_line(line_no) const;

	private:
		// utility functions used by read_file
		void store_file(std::ifstream&); //store input file
		void build_map(); //associated each word with a set of line numbers
		// remembers the whole input file
		std::vector<std::string> line_of_text;
		// map word to set of the lines on which it occurs
		std::map<std::string, std::set<line_no>> word_map;
};

int main(int argc, char **argv)
{
	//open a file from which user will query words
	ifstream infile;

	if(argc < 2 || !open_file(infile, argv[1])) {
		cerr<<"No input file!"<<endl;
		return(EXIT_FAILURE);
	}
	TextQuery tq;
	tq.read_file(infile); //builds query map

	// iterate with the user: prompt for a word to find and print results
	// loop indefinitely: the loop exit is inside the while
	while(true) {
		cout<<"enter word to look for, or q to quit: ";
		string s;
		cin>>s;
		//stop if hit eof on input or a 'q' is entered
		if(!cin || s == "q")
			break;

		//get the set of the line numbers on which this word appears
		set<TextQuery::line_no> locs = tq.run_query(s);
		//print count and all occurrences, if any
		print_results(locs, s, tq);
	}
	return(0);
}

void print_results(const set<TextQuery::line_no>& locs, cosnt string& sought, const TextQuery &file)
{
	typedef set<TextQuery::line_no> line_nums;
	line_nums::size_type size = locs.size();

	cout<<"\n"<<sought<<" occurs "<<size<<" "<<make_plural(size, "time", "s")<<endl;
	// print each line in which the word appeared
	
	line_nums::const_iterator it = locs.begin();
	for( ; it != locs.end() ; ++it)
	{
		cout<<"\t(line "<<(*it) + 1<<") "<<file.text_line(*it)<<endl;
	}
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return((ctr == 1) ? word : word + ending);
}

//read input file: store each line as element in lines_of_text
void TextQuery::store_file(ifstream &is)
{
	string textline;
	while(getline(is, textline))
		lines_of_text.push_back(textline);
}

void TextQuery::build_map()
{
	for(line_no line_num = 0 ; line_num != lines_of_text.size() ; ++line_num)
	{
		istringstream line(lines_of_text[line_num]);
		string word;
		while(line>>word)
			word_map[word].insert(line_num);
	}
}

set<TextQuery::line_no> TextQuery::run_query(const string &query_word) const
{
	map<string, set<line_no>>::const_iterator loc = word_map.find(query_word);
	if(loc == word_map.end())
		return(set<line_no>());
	else
		return(loc->second);
}

string TextQuery::text_line(line_no line) const
{
	if(line < lines_of_text.size())
		return(lines_of_text[line]);
	throw std::out_of_range("line number out of range");
}

