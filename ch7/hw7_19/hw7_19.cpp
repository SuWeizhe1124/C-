// hw7_19,
#include <iostream>
#include <cstdlib>
#include "myhfile.h"
using namespace std;
int main(void)
{
   double x,y;
   cout << "第一個數:";
   cin >> x;
   cout << "第二個數:";
   cin >> y;
   cout << "SUM(" << x << "," << y << ")=";
   cout << SUM(x,y) << endl;
   cout << "MAX(" << x << "," << y << ")=";
   cout << MAX(x,y) << endl;    
   
   system("pause");
   return 0;
}

/* output---------------
第一個數:6.9
第二個數:7.3
SUM(6.9,7.3)=14.2
MAX(6.9,7.3)=7.3
----------------------*/
