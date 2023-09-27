#include <iostream>
#include <tuple>
using namespace std;

tuple<long long, long long> change(long long h, long long m){
	long long hour, minute;
	if(m >= 45)minute = m - 45;
	else{
		hour = h - 1;
		m += 60;
		minute = m - 45;
		if(hour < 0)hour+=24;
	}

	return make_tuple(hour,minute);
}

int main(void){
	long long hour, minute,result_hour, result_minute;
	cin >> hour >> minute;
	
	tuple<long long, long long> result = change(hour,minute);
	cout << get<0>(result) << " " << get<1>(result) << endl;
	return 0;
}
