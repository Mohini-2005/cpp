#include <iostream>  
using namespace std;  
class Account {  
   public:  
       int accno; //data member (also instance variable)      
       string name;   
       static int count;     
       Account(int accno, string name)   
        {    
             this->accno = accno;    
            this->name = name;    
            count++;  
        }    
       void display()    
        {    
            cout<<accno<<" "<<name<<endl;   
        }    
};  
int Account::count=0;  
int main(void) {  
    Account a1 =Account(101, "John"); //creating an object of Account  
    Account a2=Account(102, "Alice");   
    Account a3=Account(103, "Michael");  
    Account a4=Account(104, "Harry"); 
    a1.display();    
    a2.display();    
    a3.display();   
    a3.display();  
    cout<<"Total Objects are: "<<Account::count;  
    return 0;  
} 