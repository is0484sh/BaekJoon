#include <iostream>
using namespace std;

int main(void){
	string S;
	getline(cin,S);
	
	for(char c='a';c<='z';c++){
		bool found = false;
		for(int j=0;j<S.length();j++){
			if(S[j]==c){
				cout << j << " ";
				found = true;
				break;
			}
		}
		if(!found){
			cout << "-1 ";
		}
	}
	
	return 0;
}
