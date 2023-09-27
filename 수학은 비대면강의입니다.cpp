#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	float a,b,c,d,e,f;
	
	cin >> a >> b >> c >> d >> e >> f;
	
	for(float x = -999 ;x<=999;x++){
		for(float y=-999; y<= 999;y++){
			if((a*x)+(b*y)==c&&(d*x)+(e*y)==f){
				cout << x << " " << y;
			}
		}
	}
	
	
	return 0;
}
