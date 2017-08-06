#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, a;
    while(~scanf("%d", &n) && n){
        int res=0;
        for(int i=0; i<n; i++){
            scanf("%d", &a);
            res += a/100 + a%100/50 + a%50/10 + a%10/5 + a%5/2 + a%5%2;
        }
        printf("%d\n", res);
    }
    return 0;
}
