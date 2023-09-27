#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a, reversed_a;
	
	cin >> a;
	
	reversed_a = a;
	
	reverse(reversed_a.begin(),reversed_a.end());
	
	if(a == reversed_a){
		cout << 1;
	}else cout <<0;

	
	return 0;
}
