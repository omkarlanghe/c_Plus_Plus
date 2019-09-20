#include<iostream>
#include<vector>

int SimulateOperation();

using namespace std;

int main()
{
	SimulateOperation();	
	return 0;
}

int SimulateOperation()
{
	int n_frnds, limit = 200; 
	int uniqueFruitJuices;
	int cal, exactIntake;
	string jName;

	vector<int> calContent;
	vector<string> sJuiceName;

	//LINE 1 
	cout<<"Enter no. of friends to invite"<<endl;
	cin>>n_frnds;

	if(n_frnds > limit) {
		cout<<"Invitation limit reached"<<endl;
		return -1;
	} else {
		//LINE 2
		cout<<"Enter no. of unique fruit juices"<<endl;
		cin>>uniqueFruitJuices;

		if(uniqueFruitJuices < 1 || uniqueFruitJuices > 26) {
			return -1;
		} else {
			for(int i = 0 ; i < uniqueFruitJuices ; i++)
			{
				//LINE 2
				cin>>cal;
				calContent.push_back(cal);
			}

			//LINE 3
			cout<<"Enter juice name"<<endl;
			while(cin>>jName)
			{
				if(jName == "0") {
					break;
				} else {
					sJuiceName.push_back(jName);
				}
			}

			//LINE 4
			cout<<"Please provide exact calorie intake of your friend"<<endl;
			cin>>exactIntake;

			//Pass these inputs further
		}
	}
}

