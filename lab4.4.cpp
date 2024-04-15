#include <iostream>
using namespace std;

// Hàm ki?m tra tính h?p l? c?a i
bool isValid(int i, int length) {
    return (i > 0 && i <= length);
}

// Hàm tìm v? trí xu?t hi?n cu?i cùng c?a chu?i con
int lastIndexOf(const char* str, const char* subStr) {
    int length = strlen(str);
    int subLength = strlen(subStr);

    if (!isValid(subLength, length)) {
        cout << "?o dai chuoi con khong hop le!" << endl;
        return -1;
    }

    for (int i = length - subLength; i >= 0; --i) {
        bool found = true;
        for (int j = 0; j < subLength; ++j) {
            if (str[i + j] != subStr[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }

    return -1;
}

int main() {
    char str[100];
    char subStr[100];

    cout << "Nhap chuoi: ";
    cin.getline(str, 100);

    cout << "Nhap chuoi con can tim: ";
    cin.getline(subStr, 100);

    int lastIndex = lastIndexOf(str, subStr);
    if (lastIndex != -1) {
        cout << "Vi tri cuoi cung cua chuoi con: " << lastIndex << endl;
    }
    else {
        cout << "Khong tim thay chuoi con trong chuoi." << endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
