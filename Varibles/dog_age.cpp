#include <iostream>

int main() {
  // Tao bien tuoi cua cho
  int dog_age = 10;

  // The first two years of a dog’s life count as 21 human years
  int early_years = 7;

  // Each following year counts as 4 human years
  int later_years = (dog_age - 2) * 4;

  // Tuoi nguoi sau khi quy doi tu tuoi cho
  int human_years = early_years + later_years;
  
  // output
  std::cout << "My name is Vang! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
}
