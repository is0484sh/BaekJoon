#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	int a,b,c;
	int sum = 0;
	vector <int> lengths;
	cin >> a >> b >> c;
	lengths.push_back(a);
	lengths.push_back(b);
	lengths.push_back(c);
	
	auto maximum = max_element(lengths.begin(),lengths.end());
	int max = *maximum;
	lengths.erase(maximum);
	for(int i:lengths){
		sum += i;
	}
	while(sum <=max){
		max -= 1;
	}
	
	cout << sum+max;
	
	return 0;
}
