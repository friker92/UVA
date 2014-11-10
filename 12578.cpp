#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;
#define Pi 2*acos(0.0)
int main()
{
    int t;
    double b,c,r,h,g,L;
    cin >> t;
    while(t--)
    {
       r=0;
       cin >> L;
       r=L/5;
       h=L*0.6;
       r=Pi*r*r;
       g=(L*h)-r;
	   printf("%.2lf %.2lf\n",r,g);
    }
    return 0;
}