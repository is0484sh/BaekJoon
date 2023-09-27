#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> results;
	int a=1,b=1;
	while(a!=0 && b!=0){
		cin >> a >> b;
		results.push_back(a+b);
	}
	for(int i=0; i<results.size(); i++){
		if(results[i]!=0){
			cout<< results[i] <<"\n";
		}else{
			cout << "";
		}
	}

	
}
