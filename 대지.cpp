#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	int t;
	cin >> t;
	
	if(t==1){
		cout << 0;
		return 0;
	} 
	
	vector<long long> x;
	vector<long long> y;
	
	for(int i=0;i<t;i++){
		long long x1,y1;
		cin >> x1 >> y1;
		x.push_back(x1);
		y.push_back(y1);
	}
	
	auto max_x = max_element(x.begin(),x.end());
	long long x_max = *max_x;
	auto min_x = min_element(x.begin(),x.end());
	long long x_min = *min_x;
	
	auto max_y = max_element(y.begin(),y.end());
	long long y_max = *max_y;
	auto min_y = min_element(y.begin(),y.end());
	long long y_min = *min_y;
	
	
	long long slidex = x_max - x_min;
	long long slidey = y_max - y_min;
	
	long long result = slidex * slidey;
	
	cout << result;
	
	return 0;
}
