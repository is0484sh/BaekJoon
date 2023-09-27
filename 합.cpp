#include <iostream>
using namespace std;

int main(void){
	long long n;
	long long result = 0;
	cin >> n;
	
	for(int i=0;i<=n;i++){
		result += i;
	}
	cout << result << endl;
	return 0;
}
