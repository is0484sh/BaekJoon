#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a,b,A,B;
	cin >> a >> b;
	
	for(int i=a.length()-1;i>=0;i--){
		A += a[i];
	}
	for(int i=b.length()-1;i>=0;i--){
		B += b[i];
	}
	

	if(A > B){
		cout << A;
	}else{
		cout << B;
	} 
	
	return 0;
}
