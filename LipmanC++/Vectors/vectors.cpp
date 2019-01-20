#include<iostream>
#include<vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string word;
	vector<string> text;

	while(cin>>word)
	{
		text.push_back(word);
		break;
	}
	for(vector<string>::size_type i = 0 ; i != text.size() ; ++i)
	{
		cout<<text[i]<<endl;
	}
	return 0;
}
