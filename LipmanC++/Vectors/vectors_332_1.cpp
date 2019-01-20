#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;


int main()
{
	vector<int> ivec(10);
	vector<int>::size_type i;
	vector<int>::size_type j;
	cout<<"Enter the integers in vector"<<endl;

	for(i = 0; i != ivec.size() ;++i)
	{
		cin>>ivec[i];
	}
	cout<<"#############PART-1#################"<<endl;
	cout<<"Reading two consicative elements"<<endl;
	for(i = 0 ; i != ivec.size() ; ++i)
	{
		int sum = ivec[i]+ivec[i+2];
		if((sum&1) != 0)
			cout<<"value of the last element without summing: "<<ivec[i+2]<<endl;
		else
			cout<<"even number: "<<sum<<endl;
	}
	cout<<"###############PART-2##################"<<endl;	
	cout<<"Reading First and Last Elements"<<endl;
	for(i = 0 , j = ivec.size()-1 ; i != ivec.size()/2 ; ++i, --j)
	{
		int sum = ivec[i] + ivec[j];
		cout<<"Sum of first and last elements: "<<sum<<endl;
	}
	return(0);
}

