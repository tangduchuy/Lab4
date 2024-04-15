#include <iostream>
using namespace std;

// Hàm ki?m tra tính h?p l? c?a i
bool isValid(int i, int length) {
    return (i > 0 && i <= length);
}

// Hàm tìm ký t? xu?t hi?n i l?n trong chu?i
void findCharacter(const char* str, char ch, int i) {
    int count = 0;
    int length = strlen(str);

    if (!isValid(i, length)) {
        cout << "i khong hop le! i phai lon hon 0 va nho hon hoac bang chieu dai cua chuoi." << endl;
        return;
    }

    for (int j = 0; j < length; ++j) {
        if (str[j] == ch) {
            count++;
            if (count == i) {
                cout << "Ky tu '" << ch << "' xuat hien lan thu " << i << " trong chuoi." << endl;
                return;
            }
        }
    }

    cout << "Khong tim thay ky tu '" << ch << "' xuat hien " << i << " lan trong chuoi." << endl;
}

int main() {
    char str[100];
    char ch;
    int i;

    cout << "Nhap chuoi: ";
    cin.getline(str, 100);

    cout << "Nhap ky tu can tim: ";
    cin >> ch;

    cout << "Nhap so lan xuat hien can tim: ";
    cin >> i;

    findCharacter(str, ch, i);

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
