#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class NGUOI {
protected:
    string maDinhDanh;
    string hoTen;
public:
    NGUOI() {}
    NGUOI(string maDinhDanh, string hoTen) : maDinhDanh(maDinhDanh), hoTen(hoTen) {}
    virtual ~NGUOI() {}
    void nhap() {
        cout << "Nhap ma dinh danh: ";
        cin >> maDinhDanh;
        cout << "Nhap ho ten: ";
        cin.ignore();
        getline(cin, hoTen);
    }
    void xuat() {
        cout << "Ma dinh danh: " << maDinhDanh << endl;
        cout << "Ho ten: " << hoTen << endl;
    }
};

class NHANVIEN : public NGUOI {
private:
    int namSinh;
    float heSoLuong;
public:
    static float tienPhuCap;
    NHANVIEN() : NGUOI() {}
    NHANVIEN(string maDinhDanh, string hoTen, int namSinh, float heSoLuong) : NGUOI(maDinhDanh, hoTen), namSinh(namSinh), heSoLuong(heSoLuong) {}
    void nhap() {
        NGUOI::nhap();
        cout << "Nhap nam sinh: ";
        cin >> namSinh;
        cout << "Nhap he so luong: ";
        cin >> heSoLuong;
    }
    void xuat() {
        NGUOI::xuat();
        cout << "Nam sinh: " << namSinh << endl;
        cout << "He so luong: " << heSoLuong << endl;
        cout << "Luong: " << tinhLuong() << endl;
    }
    float tinhLuong() {
        return heSoLuong * 1550 + tienPhuCap;
    }
    bool operator > (const NHANVIEN& nv) {
        return this->heSoLuong > nv.heSoLuong;
    }
};
float NHANVIEN::tienPhuCap = 1000;

int main(){
    NGUOI nguoi;
    nguoi.nhap();
    nguoi.xuat();

    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    vector<NHANVIEN> dsNhanVien(n);
    
    for(int i = 0; i < n; i++) {
        dsNhanVien[i].nhap();
    }

    for(int i = 0; i < n; i++) {
        dsNhanVien[i].xuat();
    }

    sort(dsNhanVien.begin(), dsNhanVien.end(), greater<NHANVIEN>());

    cout << "\nDanh sach sau khi sap xep:\n";
    
    for(int i = 0; i < n; i++) {
        dsNhanVien[i].xuat();
    }

   return 0;
}
