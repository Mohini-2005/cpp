#include <iostream>  
using namespace std;  
enum month {Jan, Feb, Mar, Apr, May, June};  
int main()  
{  
    month mon_name;  
    mon_name = Mar;  
    cout << "Month: " << mon_name+2<<endl;  
    return 0;  
}