/*
Input:
2
3
3 4 5
2
1 6

Output:
9
6

Explanation

CASE 1:
Possible subsets are: {3}, {4}, {5}, {3,4}, {3,5}, {4,5}, {3,4,5}, {}.
Element 3 is present in 4 subsets. As 3<4, it is not charged.
Element 4 is present in 4 subsets. As 4>=4, it is charged.
Element 5 is present in 4 subsets. As 5>=4, it is charged.
Total charge=4+5=9

CASE 2:
Possible subsets are: {1}, {6}, {1,6}, {}.
Element 1 is present in 2 subsets. As 1<2, it is not charged.
Element 6 is present in 2 subsets. As 6>=2, it is charged.
Total charge=6
*/

#include<iostream>
#include<math.h>

int main() {
    int t;
    std::cin>>t;

    while(t--) {
        long int size, sum = 0, a;
        std::cin>>size;

        for(long int i = 0 ; i < size ; i++) {
            std::cin>>a;
            if(a >= pow(2,size - 1)) {
                sum += a;
            }
        }
        std::cout<<sum%1000000007<<std::endl;
    }
    return(0);
}
