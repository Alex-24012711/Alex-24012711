#include <iostream>

// Lớp cơ sở
class Teacher {
public:
    virtual void teach() = 0;  // Phương thức ảo
};

// Lớp dẫn xuất: MathTeacher
class MathTeacher : public Teacher {
public:
    void teach() override {
        std::cout << "Teaching Math" << std::endl;
    }
};

// Lớp dẫn xuất: LiteratureTeacher
class LiteratureTeacher : public Teacher {
public:
    void teach() override {
        std::cout << "Teaching Literature" << std::endl;
    }
};

// Sử dụng tính đa hình
int main() {
    MathTeacher mathTeacher;
    LiteratureTeacher literatureTeacher;

    Teacher* teacher = &mathTeacher;
    teacher->teach();  // In ra: "Teaching Math"

    teacher = &literatureTeacher;
    teacher->teach();  // In ra: "Teaching Literature"

    return 0;
}
