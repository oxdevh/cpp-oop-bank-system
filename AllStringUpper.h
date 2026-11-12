#pragma onse
#include <iostream>
using namespace std;

namespace AllStringUpper
{
    string UpperAllString(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
        {
            S1[i] = toupper(S1[i]);
        }
        return S1;
    }
}