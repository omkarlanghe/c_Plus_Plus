/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>

using namespace std;

void moveAddedElements(int [], int [], int [], int);
int main(){
	int size;
	cin>>size;

	if(size >= 1) {
		int *arr1 = new int[size];
		int *arr2 = new int[size];
		int *arr3 = new int[size];

		for(int i = 0 ; i < size ; i++) {
			cin>>arr1[i];
		}
		
		for(int i = 0 ; i < size ; i++) {
			cin>>arr2[i];
		}

		moveAddedElements(arr1, arr2, arr3, size);

		for(int i = 0 ; i < size ; i++) {
			cout<<" "<<arr3[i];
		}

		delete arr1;
		delete arr2;
		delete arr3;
	}
}
void moveAddedElements(int *arr1, int *arr2, int *arr3, int size) {
	for(int i = 0 ; i < size ; i++) {
		arr3[i] = arr1[i] + arr2[i];
	}
}
