#include <iostream>
#include <vector>
using namespace std;


int main(void){
	vector<int> numbers;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,v,count=0;
	cin >> a;
	for(int i=0; i<a; i++){
		int number;
		cin >> number;
		numbers.push_back(number);
	}
	cin >> v;
	for(int i=0; i<numbers.size(); i++){
		if(v == numbers[i]){
			count +=1;
		}
	}
	cout << count;

	
	return 0;
}
