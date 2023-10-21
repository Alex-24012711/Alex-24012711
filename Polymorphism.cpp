#include<iostream>  // khai báo thư viện chuẩn iostream
using namespace std;  // khai báo sử dụng hàm std
// đoạn code sau thể hiện tính kế thừa và tính đa hình 
class Human{   // khai báo lớp Human
    public:
    void speak(){ // khai báo hàm void không trả về giá trị gì
        cout<<"Human is speak"<<endl;
    }

};
class American:public Human{ // lớp American kế thừa lớp cha Human
    public:
    void speak(){
        cout<<"American is speak english"<<endl;
    }
};
class Vietnamese:public Human{ // lớp VietNamese kế thừa lớp cha Human
    public:
    void speak(){
        cout<<"Vietnamese is speak vietnam language"<<endl;
    }
};
