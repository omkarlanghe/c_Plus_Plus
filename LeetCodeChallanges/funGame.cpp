#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main() {
    queue<int> A;
    stack<int> B;
    int size;
    cin>>size;
    
    for(int i = 0 ; i < size ; i++) {
        int input;
        cin>>input;
        A.push(input);
        B.push(input);
    }
    
    while(!A.empty() && !B.empty()) {
        if(A.front() > B.top()) {
            cout<<" "<<"1";
            B.pop();
        } else if(B.top() > A.front()) {
            cout<<" "<<"2";
            A.pop();
        } else if(A.front() == B.top()) {
            cout<<" "<<"0";
            A.pop();
            B.pop();
        }
    }
    return(0);
}
