#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<double> scores, newscores;
	int N;
	double sum = 0, avg, maxVal = 0;
	cin >> N;
	
	for(int n=0;n<N;n++){
		double score;
		cin >> score;
		scores.push_back(score);
	}
	for(int i=0;i<scores.size();i++){
		if(scores[i]> maxVal){
			maxVal = scores[i];
		}
	}
	
	for(int i=0;i<scores.size();i++){
		newscores.push_back(scores[i]*100/maxVal);
	}
	for(int i=0;i<newscores.size();i++){
		sum += newscores[i];
	}
	
	avg = sum/newscores.size();
	cout << setprecision(10) << avg;
	
	return 0;
}
