#include <iostream>    
using namespace std;   
 class Tuteradekh {    
   public:   
   float salary = 69;     
 };    
   class Merimarzi: public Tuteradekh {  
   public:    
   float bonus = 69;      
   };         
int main(void) {  
     Merimarzi p1;    
     cout<<"Salary: "<<p1.salary<<endl;      
     cout<<"Bonus: "<<p1.bonus<<endl;      
    return 0;    
}    