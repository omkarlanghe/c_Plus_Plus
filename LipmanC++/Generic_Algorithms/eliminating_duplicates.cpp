#include<iostream>
#include<vector>
#include<algorithm>
#include<stdbool.h>

bool isShorter(const std::string &, const std::string &);
bool GT6(const std::string &);
std::string make_plural(size_t, const std::string &, const std::string &);

int main()
{
	std::vector<std::string> words;
	std::string input;

	while(std::cin>>input)
	{
		if(input == "q" || input == "Q")
			break;
		else
			words.push_back(input);
	}

	//sort words alphabetically so we can find the duplicates
	sort(words.begin(), words.end());
	/*eliminate duplicate words
	 * unique reorders words so that each word appears once in the
	 * front portion of words and returns an iterator one past the unique range.
	 * erase uses a vector operation to remove the nonunique elements
	 */

	std::vector<std::string>::iterator end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());

	//sort word by size, but maintain alphabetic order for words of the same size
	stable_sort(words.begin(), words.end(), isShorter);
	std::vector<std::string>::size_type wc = count_if(words.begin(), words.end(), GT6);

	std::cout<<wc<<" "<<make_plural(wc, "word", "s")<<" 6 characters or longer"<<std::endl;
	
	for(auto iter = words.begin() ; iter != words.end() ; ++iter)
	{
		std::cout<<*iter<<" ";
	}
	std::cout<<"\n"<<std::endl;
	return(0);
}

//comparison function to be used to sort by word length
bool isShorter(const std::string &s1, const std::string &s2)
{
	return(s1.size() < s2.size());
}
// determine whether a length of a given word is 6 or more
bool GT6(const std::string &s)
{
	return(s.size() >= 6);
}

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending)
{
	return((ctr == 1) ? word : word + ending);
}
