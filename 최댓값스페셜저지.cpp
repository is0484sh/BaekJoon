#include <iostream>
#include <vector>
using namespace std;

void find(int** matrix,int rows, int columns,int& max, int& row, int&column){
	vector<int> result;
	max = 0;
	row = 0;
	column = 0;
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			if(matrix[i][j] > max){
				max = matrix[i][j]; // ÃÖ´ñ°ª°ú ÁÂÇ¥ 
				row = i+1;
				column =j+1;
			}else if(matrix[i][j]==max){
				row = i+1;
				column = j+1;
			}
		}
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int rows = 9;
	int columns = 9;
	
	int** matrix = new int*[rows];
	for(int i =0; i<rows;i++){
		matrix[i] = new int[columns];
	}
	
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			int a = 0;
			cin >> a;
			matrix[i][j] = a;
		}
	}
	
	int max, row, column;
	find(matrix,9,9,max,row,column);
	
	cout << max << "\n" << row << " " << column;
	
	for(int i = 0; i< row; i++){
		delete[] matrix[i];
	}
	delete[] matrix;
	
	return 0;
}
