#include<iostream>
#include<stdbool.h>
using namespace std;

bool isMinFound(int*, int, int);
int minTimeCalculate(int*, int, int);

bool isMinFound(int* arr, int maxLimit, int size) {
    bool isFound = false;
    for(int i = 0 ; i < size ; i++) {
        if(arr[i] < maxLimit) {
            isFound = true;
            break;
        }
    }
    return(isFound);
}

int minTimeCalculate(int* arr, int maxLimit, int size) {
    int count = 0;
    bool isFound = isMinFound(arr,maxLimit,size); 
    if(isFound) {
        while(isFound != false) {
            for(int i = 0 ; i < size ; i++) {
                arr[i] = arr[i] + 1;
            }
            count++;
            isFound = isMinFound(arr,maxLimit,size);
        }
        return(count);
    } else {
        return(count);
    }
}

int main() {
    int size, maxLimit, testCases;
    cin>>testCases;
    
    for(int i = 0 ; i < testCases ; i++) {
        cin>>size;
        cin>>maxLimit;
        int* arr = new int[size];
        for(int i = 0 ; i < size ; i++) {
            cin>>arr[i];
        }
        int minTime = minTimeCalculate(arr, maxLimit, size);
        cout<<minTime<<endl;
        delete arr;
    } 
    return(0);
}
