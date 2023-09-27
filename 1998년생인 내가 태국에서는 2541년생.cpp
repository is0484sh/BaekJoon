//#include <iostream>
//using namespace std;
//
//
//int checkingRange(int x){
//	if(1000>x || x>3000){
//		exit(1);
//	}
//	else{
//		return x;
//	}
//}
//
//
//int main(void){
//	int y, result;
//	cin >> y;
//	y = checkingRange(y);
//	result = y - 543;
//	cout << result << endl;
//	return 0;
//}
#include <iostream>
#include <stdexcept> // 예외 라이브러리 헤더

int checkingRange(int x) {
    if (x < 1000 || x > 3000) {
        throw std::out_of_range("입력값이 범위를 벗어났습니다.");
    }
    return x;
}

int main() {
    int y, result;

    try {
        std::cout << "정수를 입력하세요: ";
        std::cin >> y;
        y = checkingRange(y); // 예외 발생 여부를 검사하기 위해 반환값을 사용
        result = y - 543;
        std::cout << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "오류: " << e.what() << std::endl;
        return 1; // 프로그램 비정상 종료
    }

    return 0;
}

