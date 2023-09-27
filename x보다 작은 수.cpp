#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> numbers;
//	vector<int> result;
	int n,x;
	cin >> n >> x;
	for(int i=0; i<n; i++){
		int number; 
		cin >> number;
		numbers.push_back(number);
	}
	for(int i=0;i<numbers.size();i++){
		if(numbers[i]<x){
			cout << numbers[i] << " ";
		}else{
			cout << "";
		}
	}
	
	
	return 0;
}
