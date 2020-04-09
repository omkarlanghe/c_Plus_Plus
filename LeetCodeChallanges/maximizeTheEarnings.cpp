/*
2

6 3
8 2 3 11 11 10

5 12
12 20 39 45 89

output:
6
60

*/

#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int size, earnings;
        cin>>size;
        cin>>earnings;
        
        int *arr = new int[size];
        for(int i = 0 ; i < size ; i++) {
            cin>>arr[i];
        }
        
        int count = 1;
        int max = arr[0];
        
        for(int i = 1 ; i < size ; i++) {
            if(arr[i] > max) {
                max = arr[i];
                count++;
            }
        }
        cout<<earnings*count<<endl;
        delete arr;
    }
    return(0);
}
