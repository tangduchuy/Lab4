#include <iostream>
using namespace std;

const int MAX = 100; // Kích thước tối đa cho ma trận

// Hàm tính ma trận kết quả
void nhan_matran(int matran1[][MAX], int matran2[][MAX], int r1, int c1, int r2, int c2) {
    int ketqua[MAX][MAX]; // Ma trận kết quả

    // Kiểm tra tính hợp lệ của phép nhân ma trận
    if (c1 != r2) {
        cout << "Lỗi! Số cột của ma trận thứ nhất không bằng số hàng của ma trận thứ hai." << endl;
        return;
    }

    // Tính ma trận kết quả
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            ketqua[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                ketqua[i][j] += matran1[i][k] * matran2[k][j];
            }
        }
    }

    // In ra ma trận kết quả
    cout << "Ma trận kết quả:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << ketqua[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r1, c1, r2, c2;
    cout << "Nhập số hàng và số cột cho ma trận thứ nhất: ";
    cin >> r1 >> c1;
    cout << "Nhập số hàng và số cột cho ma trận thứ hai: ";
    cin >> r2 >> c2;

    int matran1[MAX][MAX], matran2[MAX][MAX];
    cout << "Nhập ma trận thứ nhất:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> matran1[i][j];
        }
    }

    cout << "Nhập ma trận thứ hai:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cin >> matran2[i][j];
        }
    }

    nhan_matran(matran1, matran2, r1, c1, r2, c2);

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
