#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int m,n,a,b,c;
    int res[1000];
    while(~scanf("%d%d", &m, &n)){
        int count = 0;
        for(int i=m; i<=n; i++){
            a = i/100;
            b = i%100/10;
            c = i%10;
            if(i == (a*a*a+b*b*b+c*c*c)){
                res[count++] = i;
            }
        }
        if(count==0){
            printf("no\n");
        }else{
            for(int i=0; i<count-1; i++){
                printf("%d ", res[i]);
            }
            printf("%d\n", res[count-1]);
        }
    }
    return 0;
}
