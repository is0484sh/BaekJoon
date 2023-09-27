#include <iostream>
#include <tuple> // 튜플을 사용하기 위한 헤더
using namespace std;

tuple<int, int, int, int> calculation(int a, int b, int c) {
    int result1, result2, result3, result4;
    result1 = (a + b) % c;
    result2 = ((a % c) + (b % c)) % c;
    result3 = (a * b) % c;
    result4 = ((a % c) * (b % c)) % c;

    return make_tuple(result1, result2, result3, result4);
}

int main(void) {
    int a, b, c;
    cout << "세 정수를 입력하세요: ";
    cin >> a >> b >> c;

    tuple<int, int, int, int> results = calculation(a, b, c);

    cout << get<0>(results) << endl;
    cout << get<1>(results) << endl;
    cout << get<2>(results) << endl;
    cout << get<3>(results) << endl;

    return 0;
}

