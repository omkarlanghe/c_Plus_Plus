#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<map>
#include"juice.h"

using namespace std;

int main()
{
	SimulateOperation();	
	return 0;
}

int SimulateOperation()
{
	string N;
	int n = 0;
	getline(cin, N); //reads input from current line and stores in N
	n = stoi(N); // converts N to integer: number of friends invited
	
	for(int i = 0 ; i < n ; i++) {
		FruitsAndFriend();
	}
	return(0);
}

void FruitsAndFriend()
{
	string noOfFruitsWithCalories, juiceOnCupBoard, calIn;
	int calIntake;

	getline(cin, noOfFruitsWithCalories); //number of unique fruit juices
	getline(cin, juiceOnCupBoard); //fruit juice on cupboard  'abceed'
	getline(cin, calIn); //cal intake

	//cout<<"no of fruits with cal :"<<noOfFruitsWithCalories<<endl;
	//cout<<"juice on cup board :"<<juiceOnCupBoard<<endl;
	//cout<<"cal intake : "<<calIn<<endl;

	calIntake = stoi(calIn);

	vector<int> vcNoOfFruitWithCal; //
	istringstream iss(noOfFruitsWithCalories);
	string token;

	while(getline(iss, token, ' ')) {
		//cout<<"*"<<stoi(token)<<endl; token extracts every element from vector
		vcNoOfFruitWithCal.push_back(stoi(token)); // puttin in vector
	}

	map<char, int> juiceOnCupBoardFreq;
	for(char c: juiceOnCupBoard) {
		juiceOnCupBoardFreq[c]++;
	}

	//map testing
	//for(auto iter = juiceOnCupBoardFreq.begin() ; iter != juiceOnCupBoardFreq.end() ; ++iter) {
		//cout<<iter->first<<" : "<<iter->second<<endl;
	//}
	
	map<char, int> juiceWithCal;
	int ind = 1;
	for(map<char, int>::iterator iter = juiceOnCupBoardFreq.begin() ; iter != juiceOnCupBoardFreq.end() ; ++iter) {
		juiceWithCal[iter->first] = vcNoOfFruitWithCal.at(ind);
		ind++;
	}

	//map testing
	//for(auto iter = juiceWithCal.begin() ; iter != juiceWithCal.end() ; ++iter) {
	//	cout<<iter->first<<" : "<<iter->second<<endl;
	//}
	
	vector<int> combinedVec;
	vector<pair<int, char>> listIndex;


	combinedVec = getCombinedVcc(juiceWithCal, juiceOnCupBoardFreq, listIndex);
/*	
	for(auto iter = combinedVec.begin() ; iter != combinedVec.end() ; ++iter) {
		cout<<"combined vec ->"<<*iter<<endl;	
	}
*/	

	vector<int> indexVc, outVc;
	btCombinedVc(combinedVec, calIntake, 0, outVc);
/*	
	for(auto iter = outVc.begin() ; iter != outVc.end() ; ++iter) {
		cout<<"outvec ->"<<*iter<<endl;
	}
*/	
	int ss = 0;
	for(int i = 0; i < outVc.size() ; i++) {
		ss = ss + combinedVec.at(outVc.at(i));
	}

	if(ss == calIntake) {
		//cout<<"Inside if calIntake check"<<endl;
		for(int i = 0 ; i < outVc.size() ; i++) {
			for(int j = 0 ; j < listIndex.at(outVc.at(i)).first ; j++) {
				cout<<listIndex.at(outVc.at(i)).second;
			}
		}
		cout<<endl;
	} else {
		cout<<"SORRY, YOU JUST HAVE WATER"<<endl;
	}
}

vector<int> getCombinedVcc(map<char, int> &juiceWithCal, map<char, int> &juiceOnCupBoardFreq, vector<pair<int, char>> &listIndex)
{
	vector<int> retVec;
	for(auto iter = juiceOnCupBoardFreq.begin() ; iter != juiceOnCupBoardFreq.end() ; ++iter)
	{
		for(int i = 1 ; i<=(iter->second) ; i++)
		{
			retVec.push_back(i*(juiceWithCal[iter->first]));
			listIndex.push_back(make_pair(i, iter->first));
		}
	}
	return(retVec);
}

void btCombinedVc(vector<int> &inVc, int calIntake, int ind, vector<int> &outVc)
{
	//cout<<"inside back track"<<endl;
	//cout<<"cal intake"<<calIntake<<endl;
	
	if(calIntake == 0) {
		return;
	}
	if(calIntake < 0) {
		return;
	}
	for(int i = ind ; i < inVc.size() ; i++){
       		if(inVc.at(i) <= calIntake){
		//cout<<"Test"<<endl;
            	outVc.push_back(i);
            	btCombinedVc(inVc, calIntake - inVc.at(i), i + 1, outVc);
            	break;
        }
    }
}

