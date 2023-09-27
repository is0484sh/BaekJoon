#include <iostream>
#include <string>
using namespace std;

string grade(long long score){
	if(90<score && score<=100){
		return "A";
	}else if(80<score && score<=89){
		return "B";
	}else if(70<score && score<=79){
		return "C";
	}else if(60<score && score<=69){
		return "D";
	}else{
		return "F";
	}
}

int main(void){
	long long score;
	cin >> score;
	string result = grade(score);
	cout << result << endl;
	return 0;
}
