#include<iostream>
using namespace std;

// Lớp cơ sở Shape
class Shape {
protected:
    double S;
public:
    virtual void input() = 0; // Phương thức ảo
    virtual void calculateArea() = 0; // Phương thức ảo
    double getArea() {
        return S;
    }
};

// Lớp Square kế thừa từ Shape
class Square : public Shape {
private:
    double a;
public:
    void input() override {
        cout << "Moi ban nhap canh hinh vuong";
        cin >> a;
    }
    void calculateArea() override {
        S = a * a;
    }
};

// Lớp Circle kế thừa từ Shape
class Circle : public Shape {
private:
    double r;
public:
    void input() override {
        cout << "Moi ban nhap ban kinh hinh tron ";
        cin >> r;
    }
    void calculateArea() override {
        S = 3.14 * r * r;
    }
};

int main() {
    Square sq;
    sq.input();
    sq.calculateArea();
    cout << "Dien tich hinh vuong la: " << sq.getArea() << endl;

    Circle cir;
    cir.input();
    cir.calculateArea();
   cout << "Dien tich hinh tron la: " << cir.getArea() << endl;

    return 0;
}
