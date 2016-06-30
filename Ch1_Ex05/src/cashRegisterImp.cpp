
//**********************************************************
// Author: D.S. Malik
//
// Chapter 1: Programming Exercise 5
// Cash Register Implementation File
//**********************************************************
  
#include <iostream>
#include "cashRegister.h"

using namespace std;

int cashRegister::getCurrentBalance() const
{
    return cashOnHand;
}

void cashRegister::acceptAmount(int amountIn)
{
    cashOnHand = cashOnHand + amountIn;
}

cashRegister::cashRegister()
{
    cashOnHand = 500;
}

cashRegister::cashRegister(int cashIn)
{
    if (cashIn >= 0)
        cashOnHand = cashIn;
    else
        cashOnHand = 500;
}
