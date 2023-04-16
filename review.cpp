#include <iostream>

int main() {
  // Khỡi tạo biến  
  int eweight = 50;
  int mweight;

  mweight = eweight * 0.38;
  std::cout << "Your weight on Mars: " << mweight << "kg\n";

  // Khởi tạo biến
  int met;
  int km;

  std::cout << "met: ";
  
  // yêu cầu user
  std::cin >> met;

  km = met / 1000;
  std::cout << km << "km\n";
}
