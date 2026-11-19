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
