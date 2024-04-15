#include <iostream>
using namespace std;

const int MAX = 100; // Kích th??c t?i ?a cho ma tr?n

// Hàm tính ma tr?n chuy?n v?
void chuyen_vi(int matran[][MAX], int n) {
    int chuyen_vi_matran[MAX][MAX]; // Ma tr?n chuy?n v?

    // Duy?t qua t?ng ph?n t? c?a ma tr?n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            chuyen_vi_matran[j][i] = matran[i][j];
        }
    }

    // In ra ma tr?n chuy?n v?
    cout << "Ma tran chuyen vi:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << chuyen_vi_matran[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Nhap kich co cua ma tran: ";
    cin >> n;

    int matran[MAX][MAX];
    cout << "Nhap ma tran:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matran[i][j];
        }
    }

    chuyen_vi(matran, n);

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
