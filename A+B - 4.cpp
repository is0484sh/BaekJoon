#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b;
	
	while(cin>>a>>b){//����ؼ� ������ while�� �ȿ� cin>>�� �־������. 
		cout << a+b << "\n";
	}
	
	return 0;
}
