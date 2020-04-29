#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    long t, n, nq, x = 0, i, j, k;
    cin>>t;
    while(t--) {
        vector<long long int> ivec, itemp_vec;
        itemp_vec;
        
        // size of an array
        cin>>n;
        // enter elements in array
        for(i = 0 ; i < n ; i++) {
            cin>>x;
            ivec.push_back(x);
            itemp_vec.push_back(x);
        }
        // no. of queries
        cin>>nq;
        
        int L[nq], R[nq];
        // insert queries in L[]
        for(i = 0 ; i < nq ; i++) {
            cin>>L[i];
        }
        // insert queries in R[]
        for(i = 0 ; i < nq ; i++) {
            cin>>R[i];
        }
        
        for(i = 0 ; i < nq ; i++) {
            long long int l = L[i];
            long long int r = R[i]; 
            long vSize = ivec.size();
            int sum = 0;
            if(vSize >= l && vSize < r) {
                // double the array
                for(j = 0 ; j < itemp_vec.size() ; j++) {
                    ivec.push_back(itemp_vec[j]);
                }
                
                for(k = (l-1) ; k <= (r-1) ; k++) {
                    sum+=ivec[k];
                }
                cout<<" "<<sum;
            }
        }
        cout<<endl;
    }
    return(0);
}
