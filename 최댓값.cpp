#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int running = 0;
	vector<int> v;
	
	while(running == 0){
		int a;
		cin >> a;
		v.push_back(a);
		if(v.size()>=9){
			running = 1;
		}else continue;
	}
	int max = *max_element(v.begin(),v.end());
	cout << max << "\n" << find(v.begin(),v.end(),max)-v.begin()+1;
	
	return 0;
}
