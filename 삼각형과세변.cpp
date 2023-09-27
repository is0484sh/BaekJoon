#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(true){
		int a,c,b;
		vector<long long> lengths;
		cin >> a >> b >> c;
		if(a==0&&b==0&&c==0){
			break;
		}
		lengths.push_back(a);
		lengths.push_back(b);
		lengths.push_back(c);
		
		long long max = *max_element(lengths.begin(),lengths.end());
		lengths.erase(max_element(lengths.begin(),lengths.end()));
		long long sum = 0;
		
		for(long long i:lengths){
			sum+=i;
		}
		if(sum <= max){
			cout << "Invalid\n";
		}else if(a==b&&b==c){
			cout << "Equilateral\n";
		}else if(a==b||b==c||c==a){
			cout << "Isosceles\n";
		}else if(a!=b&&b!=c&&c!=a){
			cout << "Scalene\n";
		}
	}
	
	return 0;
}
