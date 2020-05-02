#include<iostream>
using namespace std;

int main() {
    int n, q, l, r, count, max = 0;
    cin>>n;
    int arr[1000001];
    for(auto i = 0 ; i < n ; i++) {
        cin>>arr[i];
    }
    
    cin>>q;
    while(q--) {
        count = 1;
        cin>>l>>r; // 0 6
        
        if(r >= n) {
            r = r-1;
        }
        max = arr[l];
        for(auto k = l+1 ; k <= r ; k++) {
            if(arr[k] >= max) {
                max = arr[k];
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return(0);
}
