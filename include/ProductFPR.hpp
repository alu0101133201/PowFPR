/* Este fichero que contiene la definición una clase que implementa
  el producto implementada como una función primitiva recursiva
*/
#pragma once

#include <iostream>
#include "SumFPR.hpp"

class ProductFPR: public BasicFPR {
  private:
    SumFPR adder;

    int limitFunction (int firstNumber, int secondNumber);
    int recursiveFunction (int firstNumber, int secondNumber);

  public:
    ProductFPR();
    ~ProductFPR();

    int solve (int firstNumber, int secondNumber);
};