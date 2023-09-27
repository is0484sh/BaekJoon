#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,M;
	cin >> N >> M;
	vector<int> basket(N,0);
	for(int n=0;n<N;n++){
		basket[n] = n+1;
	}
	for(int m=0;m<M;m++){
		int i,j,a=0,b=0;
		cin >> i >> j;
		i -= 1;
		j -=1 ;
		a = basket[i];
		b = basket[j];
		basket[i] = b;
		basket[j] = a;
	}
	for(int i=0;i<basket.size();i++){
		cout << basket[i] << " ";
	}
	
	return 0;
}
