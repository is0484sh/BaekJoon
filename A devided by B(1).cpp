#include <iostream>
#include <iomanip> // std::setprecision�� ����ϱ� ���� ��� 
using namespace std;

int main(void){
	double a,b;
	cin >> a >> b;
	cout << setprecision(10) << a/b << 
	endl;
	return 0;
}
