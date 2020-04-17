#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        string str;
        cin>>str;
        
        int count = 0;
        for(int i = 0 ; i < str.length(); i++) {
            switch(str[i]) {
                case 'A': case 'a': case 'E': case 'e': case 'I': case 'i': case 'O': case 'o': case 'U': case 'u':
                count++;
                break;
            }
        }
        cout<<count<<endl;
    }
    return(0);
}
