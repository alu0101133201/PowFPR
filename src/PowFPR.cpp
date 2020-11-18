/* Este fichero  una clase que implementa
  la potencia entre dos números implementada como 
  una función primitiva recursiva
*/

#include "PowFPR.hpp"

PowFPR::PowFPR() {}

PowFPR::~PowFPR() {}

int PowFPR::limitFunction (int firstNumber, int secondNumber) {
  if (secondNumber != 0) {
    std::string s("ERROR EN TIEMPO DE EJECUCIÓN - se ha llegado a una situación inesperada (limitFunction)\n");
    throw std::runtime_error(s);
  }
  return (BasicFPR::basicFunctions.successor(BasicFPR::basicFunctions.zero(firstNumber)));
}

int PowFPR::recursiveFunction (int firstNumber, int secondNumber) {
  if (secondNumber == 0)
    return limitFunction(firstNumber, secondNumber);
  else {
    secondNumber = --secondNumber;
    std::vector<int> toProject;
    toProject.push_back(firstNumber);
    toProject.push_back(secondNumber);
    toProject.push_back(solve(firstNumber, secondNumber));
    return (multiplier.solve(BasicFPR::basicFunctions.projection(toProject, 0), BasicFPR::basicFunctions.projection(toProject, 2)));
  }
}

int PowFPR::solve (int firstNumber, int secondNumber) {
  int result = recursiveFunction(firstNumber, secondNumber);
  return result;
}