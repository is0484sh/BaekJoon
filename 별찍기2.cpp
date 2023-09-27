#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // 위쪽 삼각형
    for (int i = 1; i <= N; i++) {
        // 공백 출력
        for (int j = 1; j <= N - i; j++) {
            cout << ' ';
        }
        // 별 출력
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << '*';
        }
        cout << '\n';
    }

    // 아래쪽 삼각형
    for (int i = N - 1; i >= 1; i--) {
        // 공백 출력
        for (int j = 1; j <= N - i; j++) {
            cout << ' ';
        }
        // 별 출력
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}

