#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> afterDivided;
	set<int> uniqueNumbers;
	
	for(int i=0;i<10;i++){
		int a; 
		cin >> a;
		afterDivided.push_back(a%42);
	}
	
	for(int a : afterDivided){
		uniqueNumbers.insert(a);
	}
	
	vector<int> result(uniqueNumbers.begin(),uniqueNumbers.end());
	
	cout << result.size();
	
	
	
	return 0;
}
