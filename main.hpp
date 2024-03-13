#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        return rand() % 99;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        int retnum = (rdnum1 + rdnum2 + rdnum3) / 3;
        if (abs(retnum - rdnum1) > abs(retnum - rdnum2) && abs(retnum - rdnum1) > abs(retnum - rdnum3))
                return rdnum1;
        else if (abs(retnum - rdnum2) > abs(retnum - rdnum1) && abs(retnum - rdnum1) > abs(retnum - rdnum3))
                return rdnum2;
        else if (abs(retnum - rdnum3) > abs(retnum - rdnum2) && abs(retnum - rdnum1) > abs(retnum - rdnum1))
                return rdnum3;
        else
                return retnum;
}