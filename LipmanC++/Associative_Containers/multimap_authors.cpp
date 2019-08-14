/*
 * WAP that populates a multimap of authors and their works. Use find to find an element in multimap and erase
 * that element.
 * */
#include<iostream>
#include<map>
#include<utility>

using namespace std;
int main()
{
	multimap<string, string> authors;
	multimap<string, string>::iterator iter;
	string aName;

	authors.insert(make_pair(string("BarthJohn"), string("sot-weed factor")));
	authors.insert(make_pair(string("BarthJohn"), string("lost in the funhouse")));
	authors.insert(make_pair(string("Kazuo Ishiguro"), string("Ocean 360")));
	authors.insert(make_pair(string("Alain de bottton"), string("Middle in the city")));

	cout<<"Following are the authors in multimap"<<endl;
	for(iter = authors.begin() ; iter != authors.end() ; ++iter)
	{
		cout<<iter->first<<" - "<<iter->second<<endl;
	}

	cout<<"total count : "<<authors.size()<<endl;

	cout<<"Enter the author to search and delete"<<endl;
	cin>>aName;

	typedef multimap<string, string>::size_type sz_type;
	sz_type entries = authors.count(aName);

	multimap<string, string>::iterator it = authors.find(aName);

	for(sz_type cnt = 0 ; cnt != entries ; ++cnt)
	{
		cout<<it->second<<endl;
		authors.erase(it->first);
		++it;
	}

	cout<<"total count : "<<authors.size()<<endl;
	return(0);
}
