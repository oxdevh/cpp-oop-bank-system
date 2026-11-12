#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>
#include <iomanip>
#include "clsDate.h"
#include "clsPeriod.h"
#include "clsUtil.h"
#include "clsInputValidate.h"
#include "clsBankClient.h"
#include "clsLoginScreen.h"
#include "clsCurrency.h"

using namespace std;

/* template <class T>

class Calculator
{
private:
    T Number1, Number2;

public:
    Calculator(T n1, T n2)
    {
        Number1 = n1;
        Number2 = n2;
    }

    void PrintResults()
    {
        cout << "Numbers: " << Number1 << " and " << Number2 << "." << endl;

        cout << Number1 << " " << " + " << " " << Number2 << " = " << Add() << endl;
        cout << Number1 << " " << " - " << " " << Number2 << " = " << Sub() << endl;
        cout << Number1 << " " << " * " << " " << Number2 << " = " << Mul() << endl;
        cout << Number1 << " " << " / " << " " << Number2 << " = " << Div() << endl;
    }

    T Add()
    {
        return Number1 + Number2;
    }
    T Sub()
    {
        return Number1 - Number2;
    }
    T Mul()
    {
        return Number1 * Number2;
    }
    T Div()
    {
        return Number1 / Number2;
    }

};

int main()
{
    Calculator <int> intCalc(67, 69);
    Calculator <float> floatCalc(67.67, 69.69);

    cout << "int Results: " << endl;
    intCalc.PrintResults();

    cout << "\nfloat Results: " << endl;
    floatCalc.PrintResults();

    return 0;
} */

int main()

{
    // system("clear");
    while (true)
    {
        if(!clsLoginScreen::ShowLoginScreen())
        {
            break;
        }
    }

    return 0;
}
