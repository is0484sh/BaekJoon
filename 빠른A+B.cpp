#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<long long> results;
	
	long long T;
	cin >> T;
	for(int i=0; i<T; i++){
		long long a,b;
		cin >> a >> b;
		
		results.push_back(a+b);
	}
	for(int i=0; i<results.size();i++){
		cout << results[i] << "\n";
	}
}
