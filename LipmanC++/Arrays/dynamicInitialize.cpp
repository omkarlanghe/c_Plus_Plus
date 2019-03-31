#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
	string *psa = new string[10];
	int *pia = new int[10];
	
	//const int *pci_bad = new const int[100]; error: uninitialized const array
	
	const int *pci_ok = new const int[100](); //value-initialized const object

	for(int i = 0 ; i < sizeof(psa) ; i++)
	{
		cout<<"jay shree ram psa"<<endl;
	}

	cout<<"#################################################"<<endl;
	for(int i = 0 ;  i < sizeof(pia) ; i++)
	{
		cout<<"jay shree ram pia"<<endl;
	}

	cout<<"psa ->"<<sizeof(psa)<<endl;
	cout<<"pia ->"<<sizeof(pia)<<endl;
	cout<<"pci_ok ->"<<sizeof(pci_ok)<<endl;

	delete [] psa;
	cout<<"psa deleted.."<<endl;
	delete [] pia;
	cout<<"pia deleted.."<<endl;
	delete [] pci_ok;
	cout<<"pci_ok deleted.."<<endl;	
	//cout<<"psa after mem free ->"<<sizeof(psa)<<endl;
	//cout<<"pia after mem free ->"<<sizeof(pia)<<endl;
	return(0);
}
