#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	string S;
	
	cin >> T;
	cin.ignore();
	
	for(int i=0; i<T;i++){
		string result = "";
		int R;
		cin >> R;
		cin.ignore();
		getline(cin,S);
		for(int j=0;j<S.length();j++){
			for(int k=0 ; k<R; k++){
				result += S[j];
			}
		} 
		cout << result <<"\n";
	}
	return 0;
}
