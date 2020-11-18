/* Este fichero contiene una clase que implementa
   el producto implementada como una función primitiva recursiva
*/
#include "ProductFPR.hpp"

ProductFPR::ProductFPR() {}

ProductFPR::~ProductFPR() {}

int ProductFPR::limitFunction (int firstNumber, int secondNumber) {
  if (secondNumber != 0) {
    std::string s("ERROR EN TIEMPO DE EJECUCIÓN - se ha llegado a una situación inesperada (limitFunction)\n");
    throw std::runtime_error(s);
  }
  return (BasicFPR::basicFunctions.zero(firstNumber));
}

int ProductFPR::recursiveFunction (int firstNumber, int secondNumber) {
  if (secondNumber == 0)
    return limitFunction(firstNumber, secondNumber);
  else {
    secondNumber = --secondNumber;
    std::vector<int> toProject;
    toProject.push_back(firstNumber);
    toProject.push_back(secondNumber);
    toProject.push_back(solve(firstNumber, secondNumber));
    return (adder.solve(BasicFPR::basicFunctions.projection(toProject, 0), BasicFPR::basicFunctions.projection(toProject, 2)));
  }
}

int ProductFPR::solve (int firstNumber, int secondNumber) {
  int result = recursiveFunction(firstNumber, secondNumber);
  return result;
}