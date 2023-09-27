#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,M;
	cin >> N >> M;
	vector<int> baskets;
	for(int i=1; i<=N; i++){
		baskets.push_back(i);
	}
	for(int m =0; m<M; m++){
		int i = 0, j = 0;
		cin >> i >> j;
		reverse(baskets.begin()+i-1,baskets.begin()+j);
	}
	
	for (int i:baskets){
		cout << i << " ";
	}
	
	
	return 0;
}
