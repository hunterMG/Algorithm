#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float a[100], sum , avg;
    while(~scanf("%d", &n)){
        float maxV = 0, minV = 100;
        sum = 0.0, avg = 0.0;
        for(int i=0; i<n; ++i){
            scanf("%f", &a[i]);
            if(a[i] < minV)
                minV = a[i];
            if(a[i] > maxV)
                maxV = a[i];
            sum += a[i];
        }
        sum -= (maxV + minV);
        avg = sum/(n-2);
        printf("%.2f\n", avg);
    }
    return 0;
}
