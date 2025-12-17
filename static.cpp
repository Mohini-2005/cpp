#include <iostream>    
using namespace std;    
class Account {    
   public:    
       int accno;         
       string name;   
       static float rateOfInterest;     
       Account(int accno, string name)     
        {      
             this->accno = accno;      
            this->name = name;      
        }      
       void display()      
        {      
            cout<<accno<< " "<<name<< " "<<rateOfInterest << endl;     
        }      
};  
float Account::rateOfInterest=7.25;    
int main(void) {    
    Account a1 =Account(101, "John");     
    Account a2=Account(102, "Alice");  
    a1.display();      
    a2.display();      
    return 0;    
} 