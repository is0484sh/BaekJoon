#include <iostream>
#include <string>
using namespace std;

string convertToBaseB(int N, int B) {
    string result = "";

    while (N > 0) {
        int remainder = N % B;
        char digit;

        if (remainder < 10) {
            digit = '0' + remainder;
        } else {
            digit = 'A' + (remainder - 10);
        }

        result = digit + result;
        N /= B;
    }

    return result;
}

int main() {
    int N, B;
    cin >> N >> B;

    string result = convertToBaseB(N, B);

    cout << result << endl;

    return 0;
}

