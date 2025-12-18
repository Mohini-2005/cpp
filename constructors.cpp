#include<iostream>

using namespace std;

class Student{
    public:
    int id;
    string name;

    Student(int i,string n){
        id=i;
        name =n;
        cout<<name<<" Created"<<endl;
    }

    void insert(int i,string n){
        id=i;
        name =n;
    }
    void show(){
        cout<<"ID :"<<id<<endl;
        cout<<"Name :"<<name<<endl;

    }
};

int main(){
    Student s1 = Student(101,"Mohini");
    s1.show();
    Student s2= Student(102,"Rohit");
    s2.show();
}