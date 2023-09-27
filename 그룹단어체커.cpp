#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, number = 0;
    vector<char> jap;
    cin >> a;

    for (int i = 0; i < a; i++) {
        string A;
        cin >> A;
        bool isGroup = true;
        for (int j = 0; j < A.length() - 1; j++) {
        	if(!isGroup){
        		break;
			}
            if (A[j] != A[j + 1]) {
            	isGroup = true; 
                for (int k = j + 2; k < A.length(); k++) {
                    if (A[j] != A[k]) {
                        isGroup = true;
                    } else {
                        isGroup = false;
                        break;
                    }
                }
            }
        }
        if (isGroup) {
            number += 1;
        }
    }

    cout << number << "\n";

    return 0;
}

