#include<iostream>
#include<map>
#include<utility>

using namespace std;

int main()
{
	multimap<string, string> authors;
	authors.insert(make_pair("Barth, John", "sot-weed factor"));
	authors.insert(make_pair("Barth, John", "Lost in the fun house"));
	authors.insert(make_pair("Kazuo Ishiguro", "Ocean 360"));
	authors.insert(make_pair("Alain de Botton", "The Universe"));
	cout<<"multimap :"<<authors.size()<<endl;

	string search_item("Kazuo Ishiguro");
	// erase all elements with this key, returns number of elements removed
	multimap<string, string>::size_type count = authors.erase(search_item);

	cout<<"count :"<<count<<endl;
	
	// using find and count
	// author we will look for
	string search_item2("Alain de Botton");
	// how many entries are there for this author
	typedef multimap<string, string>::size_type sz_type;

	sz_type entries = authors.count(search_item2);
	// get iterator to the first entry for this author
	multimap<string, string>::iterator iter = authors.find(search_item2);
	// loop through the number of entries there are for this author
	for(sz_type count = 0 ; count != entries ; ++count)
	{
		cout<<"iterator : "<<iter->second<<endl; //print each title
		++iter;
	}

	// lower_bound and upper_bound
	typedef multimap<string, string>::iterator authors_it;
	authors_it beg = authors.lower_bound(search_item2),
		   end = authors.upper_bound(search_item2);

	// loop through the number of entries there are for this author
	while(beg != end) {
		cout<<"iterator : "<<beg->second<<endl;
		++beg;
	}
	return(0);
}
