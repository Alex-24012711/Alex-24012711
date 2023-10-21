#include<iostream>
using namespace std;

class Human{
    public:
    void speak(){
        cout<<"Human is speak"<<endl;
    }

};
class American:public Human{
    public:
    void speak(){
        cout<<"American is speak english"<<endl;
    }
};
class Vietnamese:public Human{
    public:
    void speak(){
        cout<<"Vietnamese is speak vietnam language"<<endl;
    }
};