#include <iostream>
#include <string>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string sentence;
	getline(cin,sentence);
	int numberOfWords = 0;
	
	sentence = ' ' + sentence + ' ';
	for(int i=0;i<sentence.length();i++){
		if(static_cast<int>(sentence[i]) == 32 && sentence[i+1]!=' '){
			numberOfWords += 1;
		}
	}
	
	if (sentence[0]=' '){
		numberOfWords -= 1;
	}

	
	cout << numberOfWords;
	
	return 0;
}
