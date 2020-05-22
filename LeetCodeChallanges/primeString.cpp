#include<iostream>
#include<map>

using namespace std;
int isPrime(int);
int main() {
	int n, primeString, count;
	cin>>n;

	while(n--) {
		map<char, int> distinct_map;
		map<char, int>::iterator it;

		string str;
		primeString = 0;
		cin>>str;

		for(int i = 0 ; i < str.size() ; i++) {
			distinct_map.insert(pair<char, int>(str[i], 0));
		}

		if(isPrime(distinct_map.size())) {
			primeString = 1;
		}
		
		for(int i = 0 ; i < str.size() ; i++) {
			it = distinct_map.find(str[i]);
			if(it != distinct_map.end()) {
				it->second++;
			} else {
			    primeString = 0;
			    break;
			}
		}
		
		for(auto itr = distinct_map.begin() ; itr != distinct_map.end() ; ++itr) {
		    if(!isPrime(itr->second)) {
		        primeString = 0;
		        break;
		    }
		}
		
		if(primeString) {
      cout<<"YES"<<endl;
		} else {
      cout<<"NO"<<endl;
		}
	}
	return(0);
}

int isPrime(int no) {
	int isPrime = 1;
	if(no <= 1) {
		return(0);
	} else if (no == 2) {
		return(1);
	} else if ((no&1) == 0) {
		return(0);
	}

	if(no >= 3) {
		for(int i = 3 ; i < (no/2+1) ; i = i+2) {
			if((no%i) == 0) {
				isPrime = 0;
				break;
			}
		}
	}
	return(isPrime);
}
