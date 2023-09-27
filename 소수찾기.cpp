#include <iostream>
#include <vector>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	int numbers = 0;
	cin >> n;
	
	for(int i=0;i<n;i++){
		vector<int> sosu;
		int a;
		cin >> a;
		for(int j=1;j<=a;j++){
			if(a%j==0){
				sosu.push_back(j);
			}
		}
		if(sosu.size()==2){
			numbers +=1;
		}
	}
	
	cout << numbers; 
	
	return 0;
}
