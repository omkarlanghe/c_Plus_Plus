#include<iostream>
#include<vector>
using namespace std;

void usingVector()
{
	vector<int> ivec(10);
	vector<int> ivec2(10);

	cout<<"Enter the integers in vector"<<endl;
	for(vector<int>::size_type i = 0 ; i != ivec.size() ; i++)
	{
		cin>>ivec[i];
		ivec2[i] = ivec[i];
	}
	cout<<"Displaying vector1 and vector2 elements:\n";
	for(vector<int>::size_type i = 0 ; i != ivec.size() ; i++)
	{
		cout<<"Vector 1 elements:"<<ivec[i]<<endl;
		cout<<"Vector 2 elements:"<<ivec2[i]<<endl;
	}
}

void usingArrays()
{
	int array1[10], array2[10];
	cout<<"Enter the elements in an array:\n"<<endl;
	for(int i = 0 ; i < 10 ; i++)
	{
		cin>>array1[i];
		array2[i] = array1[i];
	}
	cout<<"Displaying array1 and array2 elements:\n"<<endl;
	for(int i = 0 ; i < 10 ; i++)
	{
		cout<<"Array 1 elements:"<<array1[i]<<endl;
		cout<<"Array 2 elements:"<<array2[i]<<endl;
	}
}
int main()
{
	usingVector();
	usingArrays();	
	return(0);
}
