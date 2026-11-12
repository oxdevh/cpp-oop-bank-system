#pragma once
#include <iostream>
using namespace std;

namespace Mylib 
{
    void test()
    {
        cout << "hi this is my firs fuction in my first library" << endl;
    }

    int Sum2Numbers (int Num1, int Num2)
    {
        return Num1 + Num2;
    }
}