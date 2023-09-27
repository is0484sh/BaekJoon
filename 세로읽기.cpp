#include<iostream>
#include<string>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int max_row = 5;
	int max_column = 15;
	string result;
	char** matrix = new char*[max_row];
	for(int i =0; i<max_row; i++){
		matrix[i] = new char[max_column];
	}
	
	for(int i=0;i<max_row;i++){
		string word; 
		cin >> word;
		for(int j =0; j<max_column;j++){
			if(word[j] == ' '||j>=word.length()){
				matrix[i][j] = '\0';
			}else matrix[i][j] = word[j];
		}
	}
	for(int i=0;i<max_column;i++){
		for(int j=0;j<max_row;j++){
			if(matrix[j][i] == '\0') continue;
				result += matrix[j][i] ;
		}
	}
	
	cout << result;
	
	for(int i=0;i<max_row;i++){
		delete[] matrix[i];
	}
	delete[] matrix;
	
	
	
	
	
	
	return 0;
}
