#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> numbers;
	
	int t;
	cin >> t;
	
	for(int i = 0; i<t; i++){
		int a;
		cin >> a;
		numbers.push_back(a);
	}
	sort(numbers.begin(),numbers.end());
	
	for(int i:numbers){
		cout << i << "\n";
	}
	
	
	return 0;
}
