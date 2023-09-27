#include<iostream>
#include<tuple>
#include<vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,K;
	vector<int> result;
	cin >> N >> K;
	
	for(int i=1;i<=N;i++){
		if(N%i == 0){
			result.push_back(i);
		}
	}
	if(result.size()<K){
		cout << "0\n";
	} else{
		cout << result.at(K-1) << "\n";	
	}
	
	return 0;
}
