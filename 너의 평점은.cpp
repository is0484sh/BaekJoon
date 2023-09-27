#include<iostream>
#include<string>
#include<iomanip> 
using namespace std;

float gradeToScore(string grade) {
    float score;
    if (grade == "A+") {
        score = 4.5;
    } else if (grade == "A0") {
        score = 4.0;
    } else if (grade == "B+") {
        score = 3.5;
    } else if (grade == "B0") {
        score = 3.0;
    } else if (grade == "C+") {
        score = 2.5;
    } else if (grade == "C0") {
        score = 2.0;
    } else if (grade == "D+") {
        score = 1.5;
    } else if (grade == "D0") {
        score = 1.0;
    } else if (grade == "F") {
        score = 0;
    }
    return score;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string subject, grade;
    float score, totalScore = 0.0, x = 0.0;

    for (int i = 0; i < 20; i++) {
        cin >> subject >> score >> grade;
        if (grade == "P") continue;
        totalScore += score * gradeToScore(grade);
        x += score;
    }

    cout  << setprecision(6) << totalScore / x << "\n";

    return 0;
}

