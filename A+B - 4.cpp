#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b;
	
	while(cin>>a>>b){//계속해서 받을때 while문 안에 cin>>을 넣어버린다. 
		cout << a+b << "\n";
	}
	
	return 0;
}
