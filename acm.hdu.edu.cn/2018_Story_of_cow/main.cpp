#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, a[57];
    a[1] = 1, a[2] = 2, a[3] = 3;
    for(int i=4; i<=55; i++){
        a[i] = a[i-1] + a[i-3];
    }
    while(~scanf("%d", &n) && n){
        printf("%d\n", a[n]);
    }
    return 0;
}
