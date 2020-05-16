#include<iostream>
#include<queue>
using namespace std;

int main() {
	int N, pid, total_time = 0;
	queue<int> c_order, i_order;
	cin>>N;

	for(auto i = 0 ; i < N ; i++) {
		cin>>pid;
		c_order.push(pid);
	}
	for(auto i = 0 ; i < N ; i++) {
		cin>>pid;
		i_order.push(pid);
	}

	while(!c_order.empty()) {
		if(c_order.front() == i_order.front()) {
			total_time++;
			c_order.pop();
			i_order.pop();
		} else {
			c_order.push(c_order.front());
			c_order.pop();
			total_time++;
		}
	}
	cout<<total_time<<endl;
	return(0);
}
