/* Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4

Example 2:

Input:
N = 10
A[] = {1,2,3,4,5,6,7,8,10}
Output: 9
*/
  
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
        vector<int> numbers;
        map<int, bool> hash_map;
        int size = 0, num = 0, missing_number = -1;
        cout << "Enter the size of vector" << endl;
        cin >> size;

        for (int i = 0 ; i < size ; i++) {
                cin >> num;
                numbers.push_back(num);
        }

        auto it = *max_element(numbers.begin(), numbers.end());

        int hash_map_size = it;

        for (int i = 0 ; i < hash_map_size + 1 ; i++) { hash_map.insert(pair<int, bool>(i, false)); }

        for (auto it = numbers.begin() ; it != numbers.end() ; ++it) {
                for(auto h_it = hash_map.begin() ; h_it != hash_map.end() ; ++h_it) {
                        if(*it == h_it->first) { h_it->second = *it; }
                }
        }

        for (auto itr = hash_map.begin() ; itr != hash_map.end() ; ++itr) {
                if(itr->first != 0 && itr->second == false) {
                        missing_number = itr->first;
                        cout << "missing_numbers => " << missing_number << endl;
                }
        }

        return 0;
}
