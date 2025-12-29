#include <iostream>
using namespace std; 
class baseClass {
public: //Access Modifier
    virtual void display() 
    { 
        cout << "It is the print base class method\n"; 
        }
    void show() 
    { 
        cout << "It is the show base class method\n"; 
        }
};
class derived : public baseClass {
public:
    void display() 
    { 
        cout << "It is the print derived class method\n"; 
        }
    void show() 
    {
        cout << "It is the show derived class method\n"; 
        }
};
int main() 
{
    baseClass* bptr;
    derived d1;
    bptr = &d1;
    bptr->display();
    bptr->show();
    return 0;
}