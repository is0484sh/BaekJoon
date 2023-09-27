#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    
    while (true) {
        vector<int> mock;
        cin >> n;
        int sum = 0;
        if (n == -1) {
            break;
        }
        for (int i = 1; i < n; i++) { // 1부터 n-1까지 반복
            if (n % i == 0) {
                mock.push_back(i);
                sum += i;
            }
            if (sum > n) { // 합이 n을 초과하면 중단
                break;
            }
        }
        if (sum == n) { // 완전수인 경우
            cout << n << " = ";
            for (int j = 0; j < mock.size(); j++) {
                cout << mock[j];
                if (j < mock.size() - 1) {
                    cout << " + ";
                }
            }
            cout << endl;
        } else { // 완전수가 아닌 경우
            cout << n << " is NOT perfect." << endl;
        }
    }
    
    return 0;
}

