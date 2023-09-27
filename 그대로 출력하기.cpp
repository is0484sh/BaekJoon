#include <iostream>
#include <string>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a,result;
	while(getline(cin,a)){
		if(a==""){
			break;
		}
		cout << a << "\n";
	}
	
	
	return 0;
}
