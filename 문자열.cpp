#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	
	cin >> T;
	for(int i=0;i<T;i++){
		string a;
		cin >> a;
		
		cout << a[0] << a[a.length()-1] << "\n"; 
	}
	
	return 0;
} 
