#include <iostream>
#include <cmath>

int main() {
  double a,b,c,x;
  double root1, root2;
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);
  std::cout << root1 << "\n";
  std::cout << root2 << "\n";
  return 0;
}