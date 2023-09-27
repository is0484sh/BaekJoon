#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> results;
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
		int a,b;
		cin >> a>> b;
		results.push_back(a);
		results.push_back(b);
		results.push_back(a+b);
	}
	for(int i=0;i<results.size()/3;i++){
		cout<<"Case #"<<i+1<<": "<<results[i*3]<<" + "<<results[i*3+1]<<" = "<<results[i*3+2]<<"\n";
	}
	
}
