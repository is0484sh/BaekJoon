#include <iostream>
#include <iomanip> // std::setprecision을 사용하기 위한 헤더 
using namespace std;

int main(void){
	double a,b;
	cin >> a >> b;
	cout << setprecision(10) << a/b << 
	endl;
	return 0;
}
