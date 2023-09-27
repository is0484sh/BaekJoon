#include <iostream>
#include <string>
using namespace std;
int main(void){
	long long byte,n;
	string result;
	cin >> byte;
	n = byte/4;
	
	for(int i=0;i<n;i++){
		result.append("long ");
	}
	
	cout << result << "int" << endl;
	return 0;
}
