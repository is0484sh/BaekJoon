#include <iostream>
using namespace std;

long long yunyear(long long a){
	if(a%4==0){
		if(a%100==0){
			if(a%400==0){
				return 1;
			}
			return 0;
		}
		return 1;
	}
	return 0; 
}

int main(void){
	long long year,result;
	cin >> year;
	result = yunyear(year);
	cout << result;
}
