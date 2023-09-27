#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x;
	int numerator = 0;
	int denominator = 0;
	int range_row = 1;
	int range_col = 1;
	cin >> x;
	
//	string** matrix = new string*[x];
//	for(int i=0;i<x;i++){
//		matrix[i] = new string[x];
//	}
//	for(int i=0;i<x;i++){
//		for(int j=0;j<x;j++){
//			numerator = i+1;
//			denominator = j+1;
//			matrix[i][j] += static_cast<string>(static_cast<char>(numerator)+'/'+static_cast<char>(denominator));
//		}
//	}
	
	int sub = 1;
	while(x > sub){
		x -= sub;
		sub ++;
	}
	if(sub % 2 == 0){
		cout << x << '/' << (sub - x + 1) << "\n";
	} else{
		cout << (sub - x + 1) << '/' << x;
	}
	
	
	
	
	
//	for(int i=0;i<x;i++){
//		delete[] matrix[i];
//	}
//	delete[] matrix;
	
	
	return 0;
}
