#include<iostream>
using namespace std;

int shiftArray(int*,int*,int);
int totalTime = 0;

int main() {
    int size;
    int* callingOrder = new int[size];
    int* idealOrder = new int[size];
    
    cin>>size;
    
    for(int i = 0 ; i < size ; i++) {
        cin>>callingOrder[i];
    }
    for(int j = 0 ; j < size ; j++) {
        cin>>idealOrder[j];
    }
    
    int totaltime = shiftArray(callingOrder, idealOrder, size);
    cout<<totaltime<<endl;
    delete callingOrder;
    delete idealOrder;
    return(0);
}

int shiftArray(int *A, int *B, int size) {
    int i = 0, n = size;
        
    while(i < n)
    {
        if(A[i] == B[i])
        {
            i = i + 1;
            totalTime++;
        }
        else
        {
            for(int j = i ; j < n - 1 ; j++)
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
            totalTime++;
        }
    }
    return (totalTime);
}
