#include <iostream>
#include <string> 
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T,add=0;
	string numbers;
	cin >> T;
	cin.ignore(); // 개행 문자('\n') 처리
	getline(cin,numbers);

	for(int i=0;i<T;i++){
		add+=numbers[i]-'0';
	}	
	
	cout<< add;

	
	
	
	
	return 0;
}
