#include<iostream>
#include<math.h>
#include<map>
#include<algorithm>

int main() {
    std::map<int, int> hashMap;
    int size;
    std::cin>>size;
    int *arr = new int[size];
    for(int i = 0 ; i < size ; i++) {
        std::cin >> arr[i];
    }
    
    for(int i = 0 ; i < pow(2, size) ; i++) {
        int temp = 0;
        int counter = 0;
        for(int j = 0 ; j < size ; j++) {
            if(i & (1 << j)){
                counter++;
                temp += arr[j];
            }
        }
        hashMap.insert(std::pair<int,int>(temp, counter));
    }
    
    auto max = hashMap.upper_bound(hashMap.size());
    
    std::cout<<max->first<<std::endl;
    std::cout<<max->second<<std::endl;
    
    delete arr;
    return 0;
}
max
