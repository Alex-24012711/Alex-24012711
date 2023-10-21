#include<iostream> // khai báo thư viện iostream
#include<math.h>// khai báo thư viện toán math.h 
using namespace std;

class QuadraticEquation {   // Định nghĩa một lớp tên là QuadraticEquation
private:
    double a, b, c;  // khai báo biến dưới dạng double và thành viên của biến đó là a,b,c
public:
    void input() { // cho phép người dùng nhập dữ liệu vào các biến a,b,c
        cout << "Moi nhap he so a: ";
        cin >> a;
        cout << "Moi nhap he so b: ";
        cin >> b;
        cout << "Moi nhap he so c: ";
        cin >> c;
    }

    void solve() { // giai phuong trinh bac 2
        if (a == 0) {
            cout << "Day khong phai la phuong trinh bac 2";
        } else {
            double delta = b * b - 4 * a * c;
            if (delta < 0) {
                cout << "Phuong trinh vo nghiem";
            } else if (delta == 0) {
                double x = -b / (2 * a);
                cout << "Phuong trinh co nghiem kep " << x <<endl;
            } else {
                double x1 = (-b + sqrt(delta)) / (2 * a);
                double x2 = (-b - sqrt(delta)) / (2 * a);
                cout << "phuong trinh co 2 nghiem phan biet " << x1 << " va " << x2 << endl;
            }
        }
    }
};

int main() {  // tao một đối tượng lớp giải phương tình bậc 2
    QuadraticEquation eq;
    eq.input();  // để nhập hệ số biến a,b,c
    eq.solve();  // để giải phương trình bậc 2
    return 0;
}
