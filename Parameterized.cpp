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
    hahaha M1 =hahaha(81, "Mohini", 23000);  
    hahaha M2=hahaha(85, "Rohit", 100);   
    M1.show();    
    M2.show();    
    return 0;  
} 
