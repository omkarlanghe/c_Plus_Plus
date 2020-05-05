#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t, n, sum, team;
	cin>>t;
	while(t--) {
		sum = 0;
		cin>>n;
		vector<int> iVTeams;

		for(auto i = 0 ; i < n ; i++) {
			cin>>team;
			iVTeams.push_back(team);
		}

		for(auto j = 0 ; j < n ; j = j+2) {
			int temp = iVTeams[j+1];
			if(iVTeams[j] > temp) {
				sum += iVTeams[j];
			} else {
				sum += temp;
			}
		}
		cout<<sum<<endl;
	}
	return(0);
}
