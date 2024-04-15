#include <iostream>
using namespace std;

// C?u trúc Ngay ch?a thông tin v? ngày, tháng, n?m
struct Ngay {
    int ngay;
    int thang;
    int nam;
};

// C?u trúc Thoitiet ch?a thông tin v? th?i ti?t trong m?t ngày
struct Thoitiet {
    Ngay ngayThoiTiet;
    double nhietDoCaoNhat;
    double nhietDoThapNhat;
    double tocDoGioLonNhat;
};

// Hàm tìm ngày có nhi?t ?? cao nh?t trong tháng 9/2012
void timNgayNhietDoCaoNhat(Thoitiet thoiTiet[], int soNgay) {
    double maxNhietDo = -1000; // Gi? s? nhi?t ?? cao nh?t là -1000 ?? C
    Ngay ngayMaxNhietDo;

    for (int i = 0; i < soNgay; ++i) {
        if (thoiTiet[i].ngayThoiTiet.thang == 9 && thoiTiet[i].nhietDoCaoNhat > maxNhietDo) {
            maxNhietDo = thoiTiet[i].nhietDoCaoNhat;
            ngayMaxNhietDo = thoiTiet[i].ngayThoiTiet;
        }
    }

    cout << "Ngày có nhi?t ?? cao nh?t trong tháng 9/2012: " << ngayMaxNhietDo.ngay << "/" << ngayMaxNhietDo.thang << "/" << ngayMaxNhietDo.nam << endl;
    cout << "Nhi?t ?? cao nh?t: " << maxNhietDo << " ?? C" << endl;
}

int main() {
    const int soNgay = 365; // S? ngày trong n?m
    Thoitiet thoiTiet[soNgay];

    // ??c thông tin th?i ti?t t? ng??i dùng ho?c t? file

    // G?i hàm tìm ngày có nhi?t ?? cao nh?t trong tháng 9/2012
    timNgayNhietDoCaoNhat(thoiTiet, soNgay);

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
