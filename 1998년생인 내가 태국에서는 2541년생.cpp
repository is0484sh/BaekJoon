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
#include <stdexcept> // ���� ���̺귯�� ���

int checkingRange(int x) {
    if (x < 1000 || x > 3000) {
        throw std::out_of_range("�Է°��� ������ ������ϴ�.");
    }
    return x;
}

int main() {
    int y, result;

    try {
        std::cout << "������ �Է��ϼ���: ";
        std::cin >> y;
        y = checkingRange(y); // ���� �߻� ���θ� �˻��ϱ� ���� ��ȯ���� ���
        result = y - 543;
        std::cout << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "����: " << e.what() << std::endl;
        return 1; // ���α׷� ������ ����
    }

    return 0;
}

