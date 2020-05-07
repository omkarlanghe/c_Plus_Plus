#include<iostream>
using namespace std;

int main() {
	short int t = 10;
	int n, count, min;
	int iVec[100000];
	cin>>t;

	while(t--) {
	    count = 1;
		cin>>n;
		for(auto i = 0 ; i < n ; i++) {
		    cin>>iVec[i];
		}
        	
		min = iVec[0];
        
		for(auto j = 1 ;  j < n ; j++) {
		    if(min == iVec[j]) {
		        count++;
		    }
		    
		    if(min > iVec[j]) {
		        min = iVec[j];
		        count = 1;
		    }
		}
		
		if((count&1) == 0) {
		    cout<<"Unlucky"<<endl;
		} else {
		    cout<<"Lucky"<<endl;
		}
	}
	return(0);
}
