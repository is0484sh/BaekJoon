#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a;
	int b;
	
	getline(cin,a); 
	cin >> b;
	
	cout << a[b-1];	
	
	return 0;
}
