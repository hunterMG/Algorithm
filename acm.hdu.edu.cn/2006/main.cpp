#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n, a[99];
    int res = 1;
    while(~scanf("%d", &n)){
        for(int i=0; i<n ;i++)
            scanf("%d", &a[i]);
        res = 1;
        for(int i=0; i<n; i++){
            if(a[i]%2 != 0){
                res *= a[i];
            }
        }
        printf("%d\n", res);

    }
    return 0;
}
