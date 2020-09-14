#include <iostream>
#include <cmath>

int main() {
    //short x = 32768;
    //double plancks = 6.62607004e-34;
    bool a;
    bool b;
    bool c;
    a = true;
    b = false;
    c = a && b;
    std::cout << c << "\n";
    c = a || b;
    std::cout << c << "\n";
  return 0;
}