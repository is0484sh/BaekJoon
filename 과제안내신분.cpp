#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> numbers;
	vector<int> notSubmitted;
	for(int i=0; i<28;i++){
		int number;
		cin >> number;
		numbers.push_back(number);
	}
	for(int i =1;i<=30;i++){
		if(find(numbers.begin(),numbers.end(),i)==numbers.end()){
			notSubmitted.push_back(i);
		}
	}
	
	for(int i=0;i<notSubmitted.size();i++){
		cout <<notSubmitted[i]<<"\n";
	}
	
	
	
	return 0;
}
