#include <iostream>  
using namespace std;  
class Me 
{  
    protected:  
int m; 
    public:  
 void get_m(int n)  
    {  
        m = n;  
    }  
};  
  
class You 
{  
    protected:  
    int y;  
    public:  
    void get_y(int n)  
    {  
        y = n;  
    }  
};  
class Us : public Me,public You  
{  
   public:  
    void display()  
    {  
        cout << "The value of m is : " <<m<< endl;  
        cout << "The value of y is : " <<y<< endl;  
        cout<<"Addition of m and y is : "<<m+y;  
    }  
};  
int main()  
{  
   Us u;  
   u.get_m(50);  
   u.get_y(90);  
   u.display();  
     return 0;  
}  