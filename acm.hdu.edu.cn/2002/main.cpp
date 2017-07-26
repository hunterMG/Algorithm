#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define PI 3.1415927

int main()
{
    double r=0;
    while(~scanf("%lf", &r)){
        printf("%.3lf\n", PI*r*r*r*4.0/3.0);
    }
    return 0;
}
