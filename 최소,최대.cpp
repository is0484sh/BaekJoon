#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	vector<int> numbers;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int number;
		cin >> number;
		numbers.push_back(number);
	}
	cout << *min_element(numbers.begin(),numbers.end()) << " " << *max_element(numbers.begin(),numbers.end());
	
	return 0;
}
