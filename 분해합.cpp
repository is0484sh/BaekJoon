#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	vector<int> results;
	cin.tie(NULL);
	
	long long n;
	cin >> n;
	
	for(int i=1;i<=n;i++){
		string newi = to_string(i);
		int sum = i;
		for(int j=0;j<newi.length();j++){
			sum += newi[j]-'0';
		}
		if(sum == n){
			results.push_back(i);
			break;
		}
	}
	
	if(!results.empty()){
		for(int i:results){
			cout << i << " ";
		}
	}else cout << 0;
	return 0;
}
