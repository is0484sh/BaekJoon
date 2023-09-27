#include<iostream>
using namespace std;

int numerical(char a){
	if('0'<= a && a <='9' ){
		return a - '0';
	}else if('A' <= a && a <= 'Z'){
		return a - 'A' + 10;
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string N;
	int B;
	cin >> N >> B;
	
	int result = 0;
	int multiplier = 1;
	
	for(int i=N.length()-1; i>=0;i--){
		int a = numerical(N[i]);
		result += a * multiplier;
		multiplier *= B;
	}
	
	cout << result << "\n";
	
	return 0;
}
