#include <iostream>
#include <tuple>
using namespace std;

tuple<long long,long long> minute_converter(long long minute){
	long long additionalHour;
	if(minute >= 60){
		additionalHour = minute/60;
		minute %= 60;
		
		return make_tuple(additionalHour, minute);
	}else return make_tuple(0,minute);
} 

int main(void){
	long long h,m,t;
	cin >> h >> m;
	cin >> t;
	
	tuple<long long,long long>result = minute_converter(t+m);
	h += get<0>(result);
	if(h >= 24)h-=24;
	
	cout << h << " " << get<1>(result) << endl;
	
	return 0;
}
