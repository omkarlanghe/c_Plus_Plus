#include<iostream>
#include<vector>

using namespace std;

int returnPos(vector<int> &, int);

int main()
{
	vector<int> ivec;
	int size, num, target;
	cout<<"enter the size of vector"<<endl;
	cin>>size;
	cout<<"enter the elements in vector"<<endl;
	for(int i = 0 ; i < size ; i++) {
		cin>>num;
		ivec.push_back(num);
	}

	cout<<"enter target"<<endl;
	cin>>target;

	int index = returnPos(ivec, target);
	cout<<"status: "<<index<<endl;
	return 0;
}

int returnPos(vector<int> &array, int target)
{
	int retVal;
	for(int i = 0 ; i < array.size() ; i++) {
		if(array[i] == target) {
			retVal = i;
			break;	
		} else {
			retVal = -1;
		}
	}

	return retVal;
}
