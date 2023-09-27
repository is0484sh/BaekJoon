#include <iostream>
#include <string>
#include <tuple>
using namespace std;

tuple<int,int,int> calculation(int a, string b){
	int first, second, third, fr1, fr2, fr3;
	first = stoi(b.substr(2,1));
	second = stoi(b.substr(1,1));
	third = stoi(b.substr(0,1)); // substr(시작하인덱스,추출갯수)
	
//	cout << second << endl << first << endl << third<< endl;
	fr1 = a*first;
	fr2 = a*second;
	fr3 = a*third;
	
	cout << fr1 << endl;
	cout << fr2 << endl;
	cout << fr3 << endl;
	
	
	return make_tuple(fr1,fr2*10,fr3*10*10);
}

int main(void){
	int FirstNum;
	string SecondNum;
	cin >> FirstNum >> SecondNum;
	
	tuple<int,int,int> numbers = calculation(FirstNum,SecondNum);
	cout << get<0>(numbers) + get<1>(numbers) + get<2>(numbers) << endl;
	
	return 0;
}
