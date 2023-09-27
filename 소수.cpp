#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	int n,m;
	int sum = 0;
	int min = 10000;
	
	vector<int> sosus;
	cin >> n >> m;
	
	for(int i=n;i<=m;i++){
		int numberOfYaksu = 0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				numberOfYaksu += 1 ;
			}
		}
		if(numberOfYaksu == 2){
			sosus.push_back(i);
		}
	}
	for(int i:sosus){
		sum += i;
		if(i<min){
			min = i;
		}
	}
	
	if(sum == 0){
		cout << -1;
	}else{
		cout << sum << "\n" <<  min <<"\n";
	}
	
	
//	cout << sum << "\n" ;
//	
	
	return 0;
}
