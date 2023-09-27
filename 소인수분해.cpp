#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> soinsu;

    // 에라토스테네스의 체를 사용하여 소수 목록을 구합니다.
    vector<bool> is_prime(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // 구한 소수 목록을 이용하여 소인수분해를 수행합니다.
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

    // 소인수를 출력합니다.
    for (int i : soinsu) {
        cout << i << "\n";
    }

    return 0;
}

