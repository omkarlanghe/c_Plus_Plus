#include<iostream>
#include<stack>
using namespace std;

stack<int> nextGreaterElements(int*,int);

int main() {
    int size;
    cin>>size;
    int *arr = new int[size];
    for(int i = 0 ; i < size ; i++) {
        cin>>arr[i];    
    }
    stack<int> st = nextGreaterElements(arr,size);
    while(!st.empty()) {
        cout<<" "<<st.top();
        st.pop();
    }
    delete arr;
    return (0);
}

stack<int> nextGreaterElements(int *arr, int size) {
  stack<int> iStack;
  int isfound = 0;
  for(int i = 0 ; i < size - 1 ; i++) {
    for(int j = i + 1 ; j < size ; j++) {
        isfound = 0;
        if(arr[j] > arr[i]) {
            iStack.push(arr[j]);
            isfound = 1;
            break;
        }
    }
    if(isfound == 0) {
        iStack.push(-1);
    }
  }
  
  iStack.push(-1);
  return(iStack);
}
