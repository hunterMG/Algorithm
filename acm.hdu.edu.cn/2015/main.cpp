#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n=0,m=0;
    while(~scanf("%d%d", &n, &m)){
        int num=2, counterM = 0, sum=0;
        for(int i=0; i<n; ++i){
            sum += num;
            ++counterM;
            if(counterM == m){
                if(i < m)
                    printf("%d", sum/m);
                else printf(" %d", sum/m);
                counterM = 0;
                sum = 0;
            }
            num += 2;
        }
        if(n%m)
            printf(" %d\n", sum/(n%m));
        else printf("\n");
    }
    return 0;
}
