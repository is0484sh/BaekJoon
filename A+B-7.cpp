#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<long long> cases;
	
	long long T;
	cin >> T;
	for(int i =0; i<T; i++){
		long long a,b;
		cin >> a >> b;
		
		cases.push_back(a+b);
	}
	for(int i=1; i<=cases.size();i++){
		cout << "Case #"<< i << ": " <<cases[i-1] << "\n";
	}


	return 0;

}
