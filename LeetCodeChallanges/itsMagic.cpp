#include<iostream>
#include<map>

using namespace std;

int main() {
    int n, num;
    map<int,int> imap;
    
    cin>>n;
    
    for(int i = 0 ; i < n ; i++) {
        cin>>num;
		if(num > 0) {
			if(num >= 7) {
					if((num%7)==0) {
					imap.insert(pair<int,int>(num, i));
				}
			}
    	}
	}
    
    if(imap.empty()) {
        cout<<-1<<endl;
    } else {
        auto min = imap.lower_bound(imap.size()); 
        cout<<min->second<<endl;
    }
    return(0);
}
