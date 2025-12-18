#include <iostream>
using namespace std;
enum month {
Jan, Feb, Mar, Apr, May, June,
July, August, September, October, November, December,
MONTHS_COUNT 
};
int main() {
for (int i = Jan; i < MONTHS_COUNT; i++) {
cout << i + 1 << endl; 
}
return 0;
}
