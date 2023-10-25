#include<iostream>
using namespace std;
// lớp trừu tượng cho phép chúng ta tạo ra các lớp hoặc các đối tượng mà chỉ hiện thị các thông tin và hành vi cần thiết đối với người dùng và ẩn hết các chi tiết triển khai bên trong 
// Tính trừu tượng để lập trình viên có thể ẩn tất cả dữ liệu hoặc quá trình không liên quan của ứng dụng
// Vì Lớp trừu tượng giúp cho giao diện người dùng đơn giản hơn, ẩn các đoạn mã code phức tạp, thuận tiện cho việc bảo trì và cập nhập phần mềm dễ dàng hơn 


class Animal{ //Đây là lớp trừu tượng
    virtual void phatAm()=0; //<- Tính trừu tượng ở đây. 
    };
class Dog: public Animal{ // 
    public: 
     void phatAm(){
        cout<<"Gau gau"<<endl;
     }
};                                   // Lớp trừu tượng sẽ ẩn hết các lớp con Dog và cat và chỉ hiện thị tiếng con con chó và con mèo kêu
class Cat: public Animal{
    public: 
    void phatAm(){
        cout<<"Meow"<<endl;
    }
};
int main(){
    Dog dog;
    Cat cat;
    dog.phatAm(); // Gọi phương thức trừu tượng
    cat.phatAm();
    return 0;
}