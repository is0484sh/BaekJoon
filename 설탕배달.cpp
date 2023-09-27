#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,newn;
	cin >> n;
	
	vector<int> bags;
	
	for(int i=0;i<=n/5;i++){//5kg ºÀÁö°¡ i ±×¸®°í 3kg ºÀÁö°¡ j
		newn = 0;
		newn = (n-(i*5));
		if(newn%3==0){
			bags.push_back(i+(newn/3));
		}
	}
	
	if(!bags.size()){
		cout << -1;
	}else{
		int min = *min_element(bags.begin(),bags.end());
	
		cout << min ;
	}

	
	return 0;
}
