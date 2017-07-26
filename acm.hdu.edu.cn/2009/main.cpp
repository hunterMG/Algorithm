#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int m;
    float n , a[1000];
    while(~scanf("%f%d", &n, &m)){
        float res = 0;
        while(m--){
            res+= n;
            n = sqrt(n);
        }
        printf("%.2f\n", res);
    }
    return 0;
}
