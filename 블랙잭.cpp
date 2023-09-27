#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n,m;
	vector<long long> cards;
	vector<long long> sums;
	vector<long long> sums2;
	cin >> n >> m;
	long long sum = 0;
	
	for(int i=0;i<n;i++){
		long long a;
		cin >> a; 
		cards.push_back(a);
	}
	for(int i=0;i<cards.size();i++){
		for(int j=i+1;j<cards.size();j++){
			for(int k=j+1;k<cards.size();k++){
				sums.push_back(cards[i]+cards[j]+cards[k]);
			}
		}
	}
	for(long long i:sums){
		if(i == m){
			cout << i;
			return 0;
		}else if(i < m){
			sums2.push_back(i);
		}
	}
	if (!sums2.empty()) {
    	long long maximum = *max_element(sums2.begin(), sums2.end());
    	cout << maximum;
    }

	
	
	
	
	return 0;
}
