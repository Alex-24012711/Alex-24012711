#include<iostream>
using namespace std;

class NhanVien{
    protected:
    string hoTen;
    float luong;
    public:
    NhanVien()
    {
        this->hoTen ="";
        this->luong=0.0;
    }
    void nhap(){
        cout<<"Ho ten: ";
        cin.ignore();
        getline(cin, this->hoTen);
    }
    void xuat()
    {
        cout<<"Ho ten:";
        cout<<this->hoTen<<endl;
    }
    virtual void tinhLuong()=0; // phương thức thuần ảo của lớp NhanhVien
};
class NhanVienSanXuat : public NhanVien
{
    private:
    int soSanPham;
    float tienCong1SP;
    public:
    NhanVienSanXuat(): NhanVien()  // <- Thể hiện tính đa hình trong C++
    {
        this->soSanPham=0;
        this->tienCong1SP=0;
    }
    void nhap(){
        NhanVien::nhap();
        cout<<"So san pham:";
        cin>> this->soSanPham;
        cout<<"Tien cong 1 san pham: ";
        cin>> this->tienCong1SP;
    }
    void xuat(){
        NhanVien::xuat();
        cout<<"So san pham: ";
        cout<< this->soSanPham <<endl;
        cout<<"Tien con 1 san pham:"<<endl;
        cout<<this->tienCong1SP<<endl;
        cout<<"Luong: ";
        cout<<this->luong<<endl;
    }
    void tinhLuong(){ 
        this->luong=this->soSanPham*this->tienCong1SP;
    }

};
class NhanVienVanPhong : public NhanVien  // <- Thể hiện tính đa hinh trong C++
{
private:
    float luongCoBan;
    int soNgayLamViec;

public:
    NhanVienVanPhong() : NhanVien()
    {
        this->luongCoBan = 0.0;
        this->soNgayLamViec = 0;
    }
    void nhap()
    {
        NhanVien::nhap();
        cout << "Luong co ban: ";
        cin >> this->luongCoBan;
        cout << "So ngay lam viec: ";
        cin >> this->soNgayLamViec;
    }

    void xuat()
    {
        NhanVien::xuat();
        cout << "Luong co ban: ";
        cout << this->luongCoBan << endl;
        cout << "So ngay lam viec: ";
        cout << this->soNgayLamViec << endl;
        cout << "Luong: ";
        cout << this->luong << endl;
    }

    void tinhLuong()
    {
        this->luong = this->soNgayLamViec * this->luongCoBan;
    }
};
