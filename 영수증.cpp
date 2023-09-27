#include <iostream>
#include <vector>
using namespace std;

int main(void){
	vector<long long> results;
	long long total, testcase ,calculatedTotal = 0;
	cin >> total;
	cin >> testcase;
	for(int i=0; i<testcase; i++){
		long long a,b,result = 0;
		cin >> a >> b;
		result = a * b;
		results.push_back(result);
	}
	for(int i=0; i<results.size(); i++){
		calculatedTotal += results[i];
	}
	if(total == calculatedTotal){
		cout << "Yes";
	}else cout << "No";
	
	return 0;
	
}
