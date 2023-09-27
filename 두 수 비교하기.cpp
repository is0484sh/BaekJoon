#include <iostream>
#include <string>
using namespace std;

string comparing(long long a, long long b){
	if(a>b){
		return ">";
	}else if(a<b){
		return "<";
	}else{
		return "==";
	}
}

int main(void){
	long long a,b;
	cin >> a >> b;
	string result = comparing(a,b);
	cout << result << endl;
	return 0;
}
