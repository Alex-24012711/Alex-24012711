// Thư viện cần thiết
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

// Lớp NGUOI
class NGUOI {
protected:
    string maDinhDanh; // Mã định danh của người
    string hoTen; // Họ tên của người
public:
    // Hàm khởi tạo mặc định
    NGUOI() {
        maDinhDanh = "";
        hoTen = "";
    }
    // Hàm nhập thông tin người
    void nhap() {
        cout << "Nhap ma dinh danh: ";
        cin >> maDinhDanh;
        cout << "Nhap ho ten: ";
        cin.ignore();
        getline(cin, hoTen);
    }
    // Hàm xuất thông tin người
    void xuat() {
        cout << "Ma dinh danh: " << maDinhDanh << endl;
        cout << "Ho ten: " << hoTen << endl;
    }
};

// Lớp NHANVIEN kế thừa từ lớp NGUOI
class NHANVIEN : public NGUOI {
private:
    int namSinh; // Năm sinh của nhân viên
    double heSoLuong; // Hệ số lương của nhân viên
    static double tienPhuCap; // Tiền phụ cấp (thuộc tính tĩnh)
public:
    // Hàm khởi tạo mặc định
    NHANVIEN() : NGUOI() {
        namSinh = 0;
        heSoLuong = 0.0;
    }
    // Hàm nhập thông tin nhân viên
    void nhap() {
        NGUOI::nhap();
        cout << "Nhap nam sinh: ";
        cin >> namSinh;
        cout << "Nhap he so luong: ";
        cin >> heSoLuong;
    }
    // Hàm xuất thông tin nhân viên
    void xuat() {
        NGUOI::xuat();
        cout << "Nam sinh: " << namSinh << endl;
        cout << "He so luong: " << heSoLuong << endl;
    }
    // Hàm tính lương của nhân viên
    double tinhLuong() {
        return heSoLuong * 1550 + tienPhuCap;
    }
};

// Khởi tạo giá trị mặc định cho tiền phụ cấp
double NHANVIEN::tienPhuCap = 1000.0;

// Hàm main chính của chương trình
int main() {
    // Tạo và nhập thông tin cho một đối tượng người
    NGUOI nguoi1;
    nguoi1.nhap();
    
    // Xuất thông tin người vừa nhập
    nguoi1.xuat();

    // Nhập số lượng nhân viên
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    // Tạo danh sách nhân viên
    vector<NHANVIEN> dsNhanVien(n);
    
    // Nhập thông tin cho từng nhân viên trong danh sách
    for (int i = 0; i < n; i++) {
        dsNhanVien[i].nhap();
    }

   // Xuất thông tin và lương của từng nhân viên trong danh sách 
   for (int i = 0; i < n; i++) {
       dsNhanVien[i].xuat();
       cout << "Luong: " << dsNhanVien[i].tinhLuong() << endl;
   }

   // Tìm lương cao nhất trong danh sách nhân viên 
   double maxLuong = max_element(dsNhanVien.begin(), dsNhanVien.end(),  { return a.tinhLuong() < b.tinhLuong(); })->tinhLuong();

   // Xuất thông tin các nhân viên có lương cao nhất 
   for (int i = 0; i < n; i++) {
       if (dsNhanVien[i].tinhLuong() == maxLuong) {
           dsNhanVien[i].xuat();
           cout << "Luong: " << dsNhanVien[i].tinhLuong() << endl;
       }
   }

   return 0;
}
