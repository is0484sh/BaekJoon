#include <iostream>
#include <cmath>

using namespace std;
 
int main(void){
	int n;
	int dot = 2;
	int ans = 0;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		dot += dot - 1;
		ans = pow(dot,2);
	} 
	
	cout << ans;
	
	return 0;
}
