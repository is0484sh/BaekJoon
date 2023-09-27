#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	int range = 0;
	int original = 1;
	
	cin >> n;
	
	if(n==1){
		range = 1; 
	}else{
		for(int i=1;i<=n;i++){
			if(original<n && n<=(i*6)+original){
				range = i+1;
				break; 	
				}
			original = i*6+original;
		}
	} 
	
	cout << range;
	
	return 0;
}
