#include <iostream>
using namespace std;

class Tpoint {
 private:
  int private_data; 

 protected:
  int protected_data;

 public:
  Tpoint() : private_data(0), protected_data(0) {}

  friend void friend_Funct(Tpoint& obj); 
};

void friend_Funct(Tpoint& obj) 
{
  obj.private_data = 57; 
  obj.protected_data = 18; 
  cout << "Private Data: " << obj.private_data << endl;
  cout << "Protected Data: " << obj.protected_data << endl;
}

int main() 
{
  Tpoint obj;
  friend_Funct(obj); 
  return 0;
}