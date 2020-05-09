/*
You are given a stack of N integers such that the first element represents the top of the stack and the last element represents the bottom of the stack. You need to pop at least one element from the stack. At any one moment, you can convert stack into a queue. The bottom of the stack represents the front of the queue. You cannot convert the queue back into a stack. Your task is to remove exactly K elements such that the sum of the K removed elements is maximised.

Input format :     

The first line consists of two space-separated integers N and K.
The second line consists of N space-separated integers denoting the elements of the stack.
Output format :

Print the maximum possible sum of the K removed elements
Input:
10 5
10 9 1 2 3 4 5 6 7 8

Output:
4
*/

#include<iostream>
using namespace std;
 
int main() {
    long long int n, k, sum = 0;
    cin>>n>>k;
    int arr_n[n];
    
    for(auto i = 0 ; i < n ; i++) {
        cin>>arr_n[i];
        if(i < k) {
            sum += arr_n[i];
        }
    }
    
    auto i = n-1;
    auto x = k-1;
    auto max = sum;
    
    while(i >= k) {
        if(x < 0) {
            break;
        }
        
        sum = sum + (arr_n[i] - arr_n[x]);
        if(max <= sum) {
            max = sum;
        }
        i--;
        x--;
    }
    cout<<max<<endl;
    return(0);
}
