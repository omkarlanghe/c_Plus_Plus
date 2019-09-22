#include<iostream>
#include<list>

using namespace std;

list<string> removeDuplicates(string &);
string sortString(string);

int main()
{
	string input;
	list<string> slist;

	cout<<"enter string"<<endl;
	cin>>input;

	slist = removeDuplicates(input);
	for(auto iter = slist.begin() ; iter != slist.end() ; ++iter) {
		cout<<*iter;
	}
	cout<<endl;
	return(0);
}

list<string> removeDuplicates(string &slist)
{
	list<string> retList;
	//sort string
	string sortedString = sortString(slist);
	for(int i = 0 ; i < sortedString.size() ; i++)
	{
		if(sortedString[i] != sortedString[i+1]) {
			cout<<sortedString[i];
		}
	}
	return(retList);
}

string sortString(string inputStr)
{
	char temp;
	for(int i = 0 ; i < inputStr.size() ; i++) {
		for(int j = i + 1 ; j < inputStr.size() ; j++) {
			if(inputStr[i] > inputStr[j]) {
				temp = inputStr[i];
				inputStr[i] = inputStr[j];
				inputStr[j] = temp;
			}
		}
	}
	return(inputStr);
}
