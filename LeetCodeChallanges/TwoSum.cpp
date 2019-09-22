#include<iostream>
#include<array>
#include<vector>

using namespace std;

vector<int> TwoSum(int [], int, int);

int main()
{
	int target, size;
	int *array = NULL;
	vector<int> retVec;

	cout<<"Enter the size of an array:"<<endl;
	cin>>size;

	array = new int[size];

	cout<<"Enter the elements in an array"<<endl;
	for(int i = 0 ; i < size ; i++) {
		cin>>array[i];
	}

	cout<<"Enter the target"<<endl;
	cin>>target;

	retVec = TwoSum(array,target,size);

	for(auto iter = retVec.begin() ; iter != retVec.end() ; ++iter) {
		cout<<*iter<<" ";
	}
	cout<<endl;
	delete[] array;
	return(0);
}

vector<int> TwoSum(int array[], int target, int size)
{
	vector<int> indexVec;
	for(int i = 0 ; i < size ; i++) {
		for(int j = i + 1 ; j < size ; j++) {
			if(array[i]+array[j] == target) {
				indexVec.push_back(i);
				indexVec.push_back(j);	
			}
		}
	}
	return(indexVec);
}

