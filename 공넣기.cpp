#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,M;
	cin >> N >> M;
	vector<int> baskets(N,0);
	
	for(int m =0; m<M; m++){
		int i,j,k;
		cin >> i >> j >> k;
		for(int b=i-1; b<j;b++){
			baskets[b] = k;
		}
	}
	
	for(int i =0;i<N;i++){
		cout << baskets[i] << " ";
	}

	
	return 0;
}
