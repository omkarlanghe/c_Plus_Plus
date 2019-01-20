#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector<int> ivec(10);
	vector<int>::iterator i;
	vector<int>::iterator j;
	cout<<"Enter the integers in vector"<<endl;

	for(vector<int>::iterator iter = ivec.begin() ; iter != ivec.end() ; ++iter)
	{
		cin>>*iter;
		//*iter = 10;
	}
	cout<<"#############PART-1####################"<<endl;
	cout<<"Reading two consicutive elements"<<endl;
	for(vector<int>::iterator iter = ivec.begin() ; iter != ivec.end() ; ++iter)
	{
		int sum = *iter + *iter + 1;
		cout<<sum<<endl;
	
	}

	cout<<"Reading first and last elements in vector using iterators"<<endl;
	for(i = ivec.begin(), j = ivec.end()-1 ; i != ivec.size()/2 ; i++, j--)
	{

	}

	return(0);
}
