#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a;
	cin >> a;
	
	for(int i=1; i<=a; i++){
		for(int j=0;j<i;j++){
			cout << "*";
		}
		cout << "\n";
	}
	

	return 0;
}
