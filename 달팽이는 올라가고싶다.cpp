#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int A, B, V;
	int starting = 0;
	int day = 1;

	cin >> A >> B >> V;
	
	int move = A - B;
	bool climbed = false;
	
	
	day = (V-A)/move;
	if((V-A)%move!=0)day+=1;
	
	
	
	cout << day+1 << "\n";
	
	return 0;
} 
