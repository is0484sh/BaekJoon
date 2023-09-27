#include<iostream>
#include<vector>
using namespace std;


int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T, result = 0;
	cin >> T;
	
	int matrix[100][100] = {0};
	
	for(int i=0;i<T;i++){
		int a,b;
		cin >> a >> b;
		for(int j=b;j<b+10;j++){
			for(int k=a;k<a+10;k++){
				matrix[j][k] = 1;
			}	
		}
	}
	
	for(int i =0; i<100;i++){
		for(int j=0; j<100; j++){
			if(matrix[i][j] == 1) result+=1;
		}
	}

	
	cout << result;
	
	return 0;
}
