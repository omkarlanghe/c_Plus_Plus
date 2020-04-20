/*
  Our initial numbers are 1,2,3,4 and 5. We can calculate the following sums using four of the five integers:

  If we sum everything except 1, our sum is 2+3+4+5=14 .
  If we sum everything except 2, our sum is 1+3+4+5=13 .
  If we sum everything except 3, our sum is 1+2+4+5=12 .
  If we sum everything except 4, our sum is 1+3+4+5=11 .
  If we sum everything except 5, our sum is 1+2+3+4=10 .
  As you can see, the minimal sum is 1+2+3+4=10 and the maximal sum is 2+3+4+5=14. 
  Thus, we print these minimal and maximal sums as two space-separated integers on a new line.
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int size;
    std::vector<int> iVec;
    std::cin>>size;
    int *arr = new int[size];
    for(int i = 0 ; i < size ; i++) {
        std::cin>>arr[i];
    }
    
    for(int i = 0 ; i < size ; i++) {
        int sum = 0;
        for(int j = 0 ; j < size ; j++) {
            sum += arr[j];
        }
        iVec.push_back(sum - arr[i]);
    }
    std::sort(iVec.begin(), iVec.end());
    std::cout<<iVec[0]<<" "<<iVec[size-1]<<std::endl;
    delete arr;
    return(0);
}
