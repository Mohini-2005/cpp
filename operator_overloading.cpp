#include <iostream>
using namespace std;

class Decrement {
private:
    int val;

public:
    Decrement(int v) : val(v) {}

    
    Decrement operator--() {
        --val;
        return *this;
    }

    void display() {
        cout << "The Value: " << val << endl;
    }
};

int main() {
    Decrement obj(15);

    cout << "The value before decrement: ";
    obj.display();

    --obj;

    cout << "The value after decrement: ";
    obj.display();

    return 0;
}
