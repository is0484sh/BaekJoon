#include<iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string A;
	int t = 0;
	
	cin >> A;
	for(int i=0;i<A.length();i++){
		if(A[i]=='A'||A[i]=='B'||A[i]=='C'){
			t += 3;
		}else if(A[i]=='D'||A[i]=='E'||A[i]=='F'){
			t +=4;
		}else if(A[i]=='G'||A[i]=='H'||A[i]=='I'){
			t+=5;
		}else if(A[i]=='J'||A[i]=='K'||A[i]=='L'){
			t+=6;
		}else if(A[i]=='M'||A[i]=='N'||A[i]=='O'){
			t+=7;
		}else if(A[i]=='P'||A[i]=='Q'||A[i]=='R'||A[i]=='S'){
			t+=8;
		}else if(A[i]=='T'||A[i]=='U'||A[i]=='V'){
			t+=9;
		}else if(A[i]=='W'||A[i]=='X'||A[i]=='Y'||A[i]=='Z'){
			t+=10;
		}
	}
	
	cout << t;
	
	
	return 0;
}
