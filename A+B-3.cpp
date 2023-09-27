#include <iostream>
#include <vector>
using namespace std;

int main(void){
	
	vector<long long> results;
	long long testcase,a,b;
	cin >> testcase;
	
	for(int i=0;i < testcase; i++){
		
		cin >> a >> b;
		
		long long result = a + b;
		results.push_back(result);
	}
	
	for(int i=0; i<results.size(); i++){
		cout << results[i] << endl;
	}
	return 0;
}
