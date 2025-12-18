#include <iostream>  
using namespace std; 
class hahaha { 
   public:  
       int id;       
       string name;  
       float salary;  
       hahaha(int i, string n, float s)    
        {    
            id = i;    
            name = n;    
            salary = s;  
        }    
       void show()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main(void) 
{  
    hahaha emp1 =hahaha(81, "Mohini", 23000);  
    hahaha emp2=hahaha(85, "Rohit", 100);   
    emp1.show();    
    emp2.show();    
    return 0;  
} 
