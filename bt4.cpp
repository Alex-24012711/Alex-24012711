#include<iostream>
#include<string>
using namespace std;

class DATE {
p   rivate:
    int ngay, thang, nam;
public:
    DATE() : ngay(0), thang(0), nam(0) {}
    void nhap() {
        cin >> ngay >> thang >> nam;
    }
    void xuat() {
        cout << ngay << "/" << thang << "/" << nam << endl;
    }
};

class CANBO : public DATE {
private:
    string maCanBo, tenCanBo;
    DATE ngaySinh;
    double luongCoBan;
    static double phuCapChucVu;
public:
    CANBO() : maCanBo(""), tenCanBo(""), luongCoBan(0.0) {}
    void nhap() {
        cin >> maCanBo >> tenCanBo;
        ngaySinh.nhap();
        cin >> luongCoBan;
    }
    void xuat() {
        cout << "Ma can bo: " << maCanBo << endl;
        cout << "Ten can bo: " << tenCanBo << endl;
        cout << "Ngay sinh: "; ngaySinh.xuat();
        cout << "Luong co ban: " << luongCoBan << endl;
    }
    double tinhLuong() {
        return luongCoBan + phuCapChucVu;
    }
};

double CANBO::phuCapChucVu = 1000000;

int main() {
    DATE d;
    d.nhap();
    d.xuat();

    int n;
    cin >> n;
    CANBO* ds = new CANBO[n];
    
    for (int i = 0; i < n; i++) {
        ds[i].nhap();
        ds[i].xuat();
        cout << "Luong: " << ds[i].tinhLuong() << endl;
    }

    double minLuong = ds[0].tinhLuong();
    
    for (int i = 1; i < n; i++) {
        if (ds[i].tinhLuong() < minLuong) {
            minLuong = ds[i].tinhLuong();
        }
    }

    cout << "Nhan vien co luong thap nhat: " << endl;
    
    for (int i = 0; i < n; i++) {
        if (ds[i].tinhLuong() == minLuong) {
            ds[i].xuat();
        }
    }

    delete[] ds;

    return 0;
}
