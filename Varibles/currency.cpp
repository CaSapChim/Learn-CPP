#include <iostream>

using namespace std;

int main() {
  // Create variables  
  double pesos;
  double reais;
  double soles;

  double dollars;

  // Pesos conversion rate: 0.055
  // Reais conversion rate: 0.2
  // Soles conversion rate: 0.26
  // In 2023

  cout << "Enter number of Colombian Pesos: ";
  cin >> pesos;
  cout << "Enter number of brazilian Reais: ";
  cin >> reais;
  cout << "Enter number of Peruvian Soles: ";
  cin >> soles; 

  // Pesos conversion rate: 0.055
  // Reais conversion rate: 0.2
  // Soles conversion rate: 0.26
  // In 2023
   dollars = 0.055 * pesos + 0.2 * reais + 0.26 * soles;

  //output
  cout << "Your USD = $" << dollars << "\n";

}
