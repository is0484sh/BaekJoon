#include<iostream>
#include<vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<string> croatia(8);
	croatia[0] = "c=";
	croatia[1] = "c-";
	croatia[2] = "dz=";
	croatia[3] = "d-";
	croatia[4] = "lj";
	croatia[5] = "nj";
	croatia[6] = "s=";
	croatia[7] = "z=";
	
	string a;
	int number = 0;
	
	cin >> a;
	
	for(int j=0; j<a.length();j++){
		bool pattern = false;
		for(int i=0; i<croatia.size();i++){
			if(a.substr(j,2)==croatia[i]){
				a.replace(j,2,"0");
				pattern = true;
				j = 0;
				break;
			}if(a.substr(j,3)==croatia[i]){
				a.replace(j,3,"0");
				pattern = true;
				j = 0;			
				break;
			}
		}
		if(!pattern){
			continue;
		}
	}
	cout<<number+a.length();
	
	
	
	return 0;
}
