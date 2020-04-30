#include<iostream>
#include<vector>
 
using namespace std;
 
int main() {
    vector<int> ivec;
    int n, range, max;
    cin>>n>>range;
    
    for(auto i = 0 ; i < n ; i++) {
        cin>>max;
        ivec.push_back(max);
    }
    
    for(auto i = 0 ; i < (n-range+1) ; i++) {
        max = ivec[i];
        for(auto j = i+1 ; j < (i+range) ; j++) {
            if(ivec[j] > max) {
                max = ivec[j];
            }
        }
        cout<<" "<<max;
    }
    return(0);
}
