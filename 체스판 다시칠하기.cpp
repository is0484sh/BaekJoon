#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> board(n);
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    int minChanges = INT_MAX;

    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            int changes1 = 0; // 'WW...W' 패턴으로 시작하는 경우
            int changes2 = 0; // 'BB...B' 패턴으로 시작하는 경우

            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    char currentColor = board[i + x][j + y];
                    if ((x + y) % 2 == 0) {
                        if (currentColor != 'W') {
                            changes1++;
                        }
                        if (currentColor != 'B') {
                            changes2++;
                        }
                    } else {
                        if (currentColor != 'B') {
                            changes1++;
                        }
                        if (currentColor != 'W') {
                            changes2++;
                        }
                    }
                }
            }

            minChanges = min(minChanges, min(changes1, changes2));
        }
    }

    cout << minChanges << endl;

    return 0;
}

