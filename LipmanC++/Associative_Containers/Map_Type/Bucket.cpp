#include<iostream>
#include<utility>
#include<map>

using namespace std;

void Menu();
void SimulateOperations();

int main()
{
	Menu();
	return(0);
}

void Menu()
{
	int input;

	cout<<"Welcome to bucket of words"<<endl;
	cout<<"Press 1 to continue or 0 to exit"<<endl;
	cin>>input;

	switch(input)
	{
		case 1:
			SimulateOperations();
			break;
		case 0:
			exit(0);
			break;

		default:
			exit(0);
			break;
	}
}

void SimulateOperations()
{
	int choice, i = 0, key;
	string word;
	map<int, string> bucketObj;
	map<int, string>::iterator iter;
	map<int, string>::iterator itor1 = bucketObj.begin();
       	map<int, string>::iterator itor2 = bucketObj.end();

	do {
		cout<<"Welcome to my bucket of words to play with.."<<endl;
		cout<<"\n1.Insert New word in bucket.\n"
			"2.View size of bucket.\n"
			"3.View Max size of bucket.\n"
			"4.Check If bucket is empty.\n"
			"5.View Newest word in bucket.\n"
			"6.View Oldest word in bucket.\n"
			"7.Remove word from bucket.\n"
			"8.Clean My Bucket.\n"
			"9.View All words from bucket.\n"
			"10.Exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choice;

		switch(choice)
		{
			case 1:
				while(cin>>word)
				{
					if(word == "exit")
					{
						break;
					}
					else
					{
						bucketObj.insert(pair<int, string>(i, word));
						i++;
					}
				}
				break;

			case 2:
				cout<<"Size of the bucket is : "<<bucketObj.size()<<endl;
				break;
			case 3:
				cout<<"Maximum size a bucket can hold following elements :"<<bucketObj.max_size()<<endl;
				break;
			case 4:
				if(bucketObj.empty())
					cout<<"Bucket is empty"<<endl;
				else
					cout<<"Bucket is not empty"<<endl;
				break;
			case 5:
				cout<<"Newest word in the bucket is : "<<itor1->first<<" : "<<itor1->second<<endl;
				break;
			case 6:
				cout<<"Oldest word in the bucket is : "<<itor2->first<<" : "<<itor2->second<<endl;
				break;
			case 7:
				cout<<"Enter the key to remove from Map :"<<endl;
				cin>>key;
				bucketObj.erase(key);
				break;
			case 8:
				for(iter = bucketObj.begin() ; iter != bucketObj.end() ; ++iter)
				{
					bucketObj.erase(iter->first);
				}
				break;
			case 9:
				cout<<"Bucket contains following words:"<<endl;
				for(iter = bucketObj.begin() ; iter != bucketObj.end() ; ++iter)
				{
					cout<<iter->first<<" : "<<iter->second<<endl;
				}
				break;
			case 10:
				break;

		}
	} while(choice != 10);
}
