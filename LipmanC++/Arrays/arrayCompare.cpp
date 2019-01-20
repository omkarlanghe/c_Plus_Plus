#include<iostream>
#include<vector>
using namespace std;

void ComparisonWithTwoArrays()
{
	int arr1[10], arr2[10];
	int flag = 0;
	cout<<"Enter elements in array 1"<<endl;
	for(int i = 0 ; i < 10 ; i++)
	{
		cin>>arr1[i];
	}

	cout<<"Enter elements in array 2"<<endl;
	for(int i = 0 ; i < 10 ; i++)
	{
		cin>>arr2[i];
	}

	cout<<"Comparing two arrays"<<endl;
	for(int i = 0 ; i < 10 ; i++)
	{
		if(arr1[i] != arr2[i])
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}

	if(flag == 0)
	{
		cout<<"Both array elements are equal"<<endl;
	}
	else
	{
		cout<<"Both array elements are not equal"<<endl;
	}

}
void ComparisonWithTwoVectors()
{
	vector<int> ivec1(10);
	vector<int> ivec2(10);
	int flag = 0;

	cout<<"Enter elements in both vectors"<<endl;
	for(vector<int>::size_type i = 0 ; i != 10 ; i++)
	{
		cout<<"vector 1"<<endl;
		cin>>ivec1[i];
		cout<<"vector 2"<<endl;
		cin>>ivec2[i];
	}
	cout<<"Comparing two vectors"<<endl;
	for(vector<int>::size_type i = 0 ; i != 10 ; i++)
	{
		if(ivec1[i] != ivec2[i])
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}

	if(flag == 0)
	{
		cout<<"Both vector elements are equal"<<endl;
	}
	else
	{
		cout<<"Both vector elements are not equal"<<endl;
	}
}

int main()
{
	ComparisonWithTwoArrays();
	ComparisonWithTwoVectors();
	return(0);
}
