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
        for (int i = 1; i < n; i++) { // 1���� n-1���� �ݺ�
            if (n % i == 0) {
                mock.push_back(i);
                sum += i;
            }
            if (sum > n) { // ���� n�� �ʰ��ϸ� �ߴ�
                break;
            }
        }
        if (sum == n) { // �������� ���
            cout << n << " = ";
            for (int j = 0; j < mock.size(); j++) {
                cout << mock[j];
                if (j < mock.size() - 1) {
                    cout << " + ";
                }
            }
            cout << endl;
        } else { // �������� �ƴ� ���
            cout << n << " is NOT perfect." << endl;
        }
    }
    
    return 0;
}

