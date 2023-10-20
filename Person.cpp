#include<iostream>
#include<cmath>

class QuadraticEquation {
private:
    double a, b, c;
public:
    void input() {
        std::cout << "Enter coefficient a: ";
        std::cin >> a;
        std::cout << "Enter coefficient b: ";
        std::cin >> b;
        std::cout << "Enter coefficient c: ";
        std::cin >> c;
    }

    void solve() {
        if (a == 0) {
            std::cout << "This is not a quadratic equation.\n";
        } else {
            double delta = b * b - 4 * a * c;
            if (delta < 0) {
                std::cout << "The equation has no real roots.\n";
            } else if (delta == 0) {
                double x = -b / (2 * a);
                std::cout << "The equation has one root: " << x << "\n";
            } else {
                double x1 = (-b + sqrt(delta)) / (2 * a);
                double x2 = (-b - sqrt(delta)) / (2 * a);
                std::cout << "The equation has two roots: " << x1 << " and " << x2 << "\n";
            }
        }
    }
};

int main() {
    QuadraticEquation eq;
    eq.input();
    eq.solve();
    return 0;
}
