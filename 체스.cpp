#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int K,Q,R,B,Kn,P;
	vector<int> result;
	
	
	cin >> K >> Q >> R >> B >> Kn >> P;
	
	result.push_back(1-K);
	result.push_back(1-Q);
	result.push_back(2-R);
	result.push_back(2-B);	
	result.push_back(2-Kn);
	result.push_back(8-P);
	
	for(int i:result){
		cout << i <<" ";
	}
	return 0;
}
