/*
A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {},and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

It contains no unmatched brackets.
The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
Given n strings of brackets, determine whether each sequence of 
brackets is balanced. If a string is balanced, return YES. Otherwise, return NO.


INPUT:

The first line contains a single integer n, the number of strings. 

Each of the next n lines contains a single string s, a sequence of brackets.

CONSTRAINTS:

1<=n<=10^3
1<=|s|<=10^3, where  is the length of the sequence.
All chracters in the sequences ? { {, }, (, ), [, ] }.

OUTPUT:

For each string, return YES or NO.
*/

#include<iostream>
#include<stack>

using namespace std;
int evaluateExpression(char*,int);
int main() {
    int size, t;
    cin>>t;
    while(t--) {
        cin>>size;
        char str[size];
        cin>>str;
        int retVal = evaluateExpression(str, size);
        if(retVal == 0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }   
    }
}

int evaluateExpression(char *arr, int size){
    char x;
    int status = 0;
    stack<char> st;
    for(int i = 0 ; i < size ; i++) {
        if(arr[i] == '(' || arr[i] == '{' || arr[i] == '[') {
            st.push(arr[i]);
            continue;            
        }
        if(st.empty()) {
            return -1;
        }
        switch(arr[i]) {
            case ')':
                x = st.top();
                st.pop();
                if(x == '{' || x == '[') {
                    status = 1;
                }
            break;
            
            case '}':
                x = st.top();
                st.pop();
                if(x == '(' || x == '[') {
                    status = 1;
                }
            break;
            
            case ']':
                x = st.top();
                st.pop();
                if(x == '(' || x == '{') {
                    status = 1;
                }
            break;
        }    
    }
    return(status);
}
