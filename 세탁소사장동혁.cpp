#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

tuple<int,int,int,int> change(int amount){
	int q = 25,Q=0;
	int d = 10,D=0;
	int n = 5,N=0;
	int p = 1,P=0;
	while(amount > 0){
		if(amount>=q){
			Q = amount/q;
			amount %= q;
			if(amount==0)break;
		}else if(amount>=d){
			D = amount/d;
			amount %= d;
			if(amount==0)break;
		}else if(amount>=n){
			N = amount/n;
			amount %= n;
			if(amount==0)break;
		}else{
			P = amount/p;
			amount %= p;
			break;
		}
	}
	return make_tuple(Q,D,N,P);
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
		int c;
		cin >> c;
		auto result = change(c);
		cout << get<0>(result) << " " << get<1>(result) << " " << get<2>(result) << " " << get<3>(result) << "\n";
	}

	
	return 0;
} 
