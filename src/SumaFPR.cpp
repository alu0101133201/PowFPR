/* Este fichero contiene una clase que implementa
  la suma implementada como una función primitiva recursiva
*/
#include "SumFPR.hpp"

SumFPR::SumFPR() {}

SumFPR::~SumFPR() {}

int SumFPR::limitFunction (int firstNumber, int secondNumber) {
  if (secondNumber != 0) {
    std::string s("ERROR EN TIEMPO DE EJECUCIÓN - se ha llegado a una situación inesperada (limitFunction)\n");
    throw std::runtime_error(s);
  }
  std::vector<int> toProject;
  toProject.push_back(firstNumber);
  return (BasicFPR::basicFunctions.projection(toProject, 0));
}

int SumFPR::recursiveFunction (int firstNumber, int secondNumber) {
  if (secondNumber == 0)
    return limitFunction(firstNumber, secondNumber);
  else {
    secondNumber = --secondNumber;
    std::vector<int> toProject;
    toProject.push_back(firstNumber);
    toProject.push_back(secondNumber);
    toProject.push_back(solve(firstNumber, secondNumber));
    return BasicFPR::basicFunctions.successor(BasicFPR::basicFunctions.projection(toProject, 2));
  }
}

int SumFPR::solve (int firstNumber, int secondNumber) {
  int result = recursiveFunction(firstNumber, secondNumber);
  return result;
}
