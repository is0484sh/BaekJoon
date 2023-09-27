#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> soinsu;

    // �����佺�׳׽��� ü�� ����Ͽ� �Ҽ� ����� ���մϴ�.
    vector<bool> is_prime(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // ���� �Ҽ� ����� �̿��Ͽ� ���μ����ظ� �����մϴ�.
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            while (n % i == 0) {
                soinsu.push_back(i);
                n /= i;
            }
        }
    }

    if (n > 1) {
        soinsu.push_back(n);
    }

    // ���μ��� ����մϴ�.
    for (int i : soinsu) {
        cout << i << "\n";
    }

    return 0;
}

