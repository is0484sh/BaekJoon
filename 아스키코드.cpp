#include <iostream>
using namespace std;

void convertToASCII(string letter){
	for(int i=0; i<letter.length();i++){
		char x = letter.at(i);
		cout << int(x) << "\n";
	}
	
	
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a;
	getline(cin,a);
	convertToASCII(a);
	
	
	return 0;
}
