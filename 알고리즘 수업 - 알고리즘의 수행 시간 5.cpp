#include <iostream>

using namespace std;

int main(void){
	long long n;
	
	cin >> n;
	
	long long sum = 0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				sum +=1;
			}
		}
	}
	
	cout << sum << "\n"<< 3;
	
	return 0;
}
