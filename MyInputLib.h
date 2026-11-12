#pragma once
#include <iostream>
using namespace std;

namespace MyInputLib
{
    int ReadNumber()
    {
        int Number;

        cout << "please enter your Number \n";
        cin >> Number;
        return Number;
    }
}