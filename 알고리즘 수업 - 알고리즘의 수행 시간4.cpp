#include <iostream>

using namespace std;

int main(void){
	long long sum = 0;
	
	long long n;
	
	cin >> n ;
	
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum +=1;
		}
	}
	
	cout << sum << "\n" << 2;
	
	
	return 0;
}
