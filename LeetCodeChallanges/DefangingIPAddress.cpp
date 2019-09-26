#include<iostream>
#include<vector>
using namespace std;

vector<char> defangIPAddr(string &, vector<char> &);

int main()
{
	string ipAdd;
	vector<char> svec;

	cout<<"Enter IP Address"<<endl;
	cin>>ipAdd;

	vector<char> defangedIP = defangIPAddr(ipAdd,svec);
	for(auto iter = defangedIP.begin() ; iter != defangedIP.end() ; ++iter) {
		cout<<*iter;
	}
	cout<<endl;
	return 0;
}

vector<char> defangIPAddr(string &ipaddr, vector<char> &retStr)
{
	char ch;
	for(auto iter = ipaddr.begin() ; iter != ipaddr.end() ; ++iter) {
		if(*iter == '.') {
			retStr.push_back('[');
			retStr.push_back('.');
			retStr.push_back(']');
		} else {
			ch = *iter;	
			retStr.push_back(ch);
		}
	}
	return(retStr);
}

