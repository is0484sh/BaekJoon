#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y,w,h;
	
	cin >> x >> y >> w >> h; 
	
	int difx = abs(x-w);
	int dify = abs(y-h);
	if(difx > x) difx = x;
	if(dify > y) dify = y;
	
	
	cout << min(difx,dify);
	
	
	
	return 0;
} 
