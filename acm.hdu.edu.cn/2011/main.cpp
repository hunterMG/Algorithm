#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n,m;
    scanf("%d", &m);
    while(m--){
        scanf("%d", &n);
        float res=0;
        for(int i=1; i<=n; i+=2){
            res += 1.0/i;
        }
        for(int i=2; i<=n; i+=2){
            res -= 1.0/i;
        }
        printf("%.2f\n", res);
    }
    return 0;
}
