#include <iostream>
#include <vector>
using namespace std;

int main(void){
	string a;
	vector<int> numbers(26,0);
	
	
	cin >> a ;
	
	for(char& b:a){
		b = tolower(b);
		numbers[b-'a']++;
	}
	
	
	int max = 0;
	char most = '?';
	
	for(int i=0;i<26;i++){
		if(numbers[i]>max){
			max = numbers[i];		
			most = 'A' +i;	
		}else if(numbers[i]==max){
			most = '?';
		}
	}
	cout << most ;
	
	return 0;
}
