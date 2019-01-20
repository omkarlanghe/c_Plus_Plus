#include<iostream>
#include<vector>
#include<cctype>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main()
{
	vector<string> svec(5);

	cout<<"Enter string in elements"<<endl;

	for(vector<int>::size_type i = 0 ; i != svec.size() ; ++i)
	{
		cin>>svec[i];
	}

	cout<<"Displaying transformed string"<<endl;

	for(string::size_type i = 0 ; i != svec.size() ; ++i)
	{	
		//cout<<toupper(svec[i])<<endl;
	}

	return(0);
}
