#include<iostream>
using namespace std;
int main() {
    int t, n, temp = 0, num;
    
    cin>>t;
    while(t--){
        cin>>n>>num;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; i++) {
            cin>>arr[i];
            temp += arr[i];
            
            if(temp >= num) {
                temp -= num; 
            }
        }
        cout<<(num-temp)<<endl;
    }
    return(0);
}
