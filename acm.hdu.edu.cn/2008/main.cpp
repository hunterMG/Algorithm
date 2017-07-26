#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    float a[100];
    while(~scanf("%d", &n)){
        if(n==0) break;
        int fushu=0,zhengshu=0, zero = 0;
        for(int i=0; i<n; i++){
            scanf("%f", &a[i]);
        }
        for(int i=0; i<n; i++){
            if(a[i] < 0)
                fushu ++;
            else if(a[i]>0)
                zhengshu ++;
            else zero ++;
        }
        printf("%d %d %d\n", fushu, zero, zhengshu);

    }
    return 0;
}
