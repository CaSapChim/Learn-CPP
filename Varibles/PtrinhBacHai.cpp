#include <iostream>
#include <cmath>

int main() {
  // Tao bien
  double a, b, c;

  // Nhap so
  std::cout << "Nhap a: ";
  std::cin >> a;
  std::cout << "Nhap b: ";
  std::cin >> b;
  std::cout << "Nhap c: ";
  std::cin >> c;

  double root1, root2;

  root1 = (-b + std::sqrt(b*b - 4*a*c))/(2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c))/(2*a);

  // output
  std::cout << root1 << "\n" << root2 << "\n";

}
