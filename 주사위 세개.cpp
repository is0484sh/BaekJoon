#include <iostream>
#include <algorithm>
using namespace std;

long long roll(long long a,long long b,long long c){
	long long reward;
	if(a==b && b==c){
		reward = 10000 + a*1000;
	}else if(a==b){
		reward = 1000 + a*100;
	}else if(b==c){
		reward = 1000 + b*100;
	}else if(c==a){
		reward = 1000 + c*100;
	}else{
		reward = 100 * max({a,b,c});
	}
	return reward;
}

int main(void){
	long long a,b,c;
	cin >> a >> b >> c;
	
	cout << roll(a,b,c) << endl;
	
	return 0;
	
}
