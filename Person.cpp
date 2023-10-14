    #include<iostream>

    using namespace std;

    class Person{
        private:
        string name;
        int age;
        string address;
        public:
        Person(string name, int age, string address){
            this->name=name;
            this->age=age;
            this->address=address;
        }
        string getName(){
            return name;
        }
        string getAge(){
            return age;
        }
        string getAddress(){
            return address;
        }
        void setName(String name){
            this->name=name;
        }
        void setAge(int age){
            this->age=age;
        }
        void setAddress(string address){
            this->address=address;;
        }
        void displa(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Address: "<<address<<endl;
        }
    };
    #define PERSON_CPP
    class Student:Public Person{
        private:
        double gpa;
        public:
        Student(string name, int age, string address, double gpa){
            this->gpa=gpa;
        }
        double getGpa(){
            return gpa;
        }
        void setGpa(double gpa){
            this->gpa=gpa;
        }
        void display(){
            Person::display();
            cout<<"GPA: "<<gpa<<endl;
        }

    };
    #define PERSON_CPP
    class Teacher: public Persos{
        private:
        int salary;
        public:
        Teacher(string name, int age, string address, int salary): Person(name, age, address){
            this->salary=salary;
        }
        int getSalary(){
            return salary;
        }
        void setSalary(int salary){
            this->salary=salary;
        }
        void display(){
            Person::display();
            cout<<"Salary: "<<salary<<endl;
        }

    };
