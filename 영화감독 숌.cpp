#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a = 0;
	int count = 0;
	int n;
	
	cin >> n;
	
	while(true){
		a++;
		string as = to_string(a);
		if(a > 100){
			for (int i=0; i<as.length()-2;i++){
				if(as[i]=='6'&& as[i+1]=='6'&& as[i+2]=='6'){
					count++;
					break;
				}
			}
			if(n == count){
				cout << a;
				break;
			}
		}
	}
	
	return 0;
}
