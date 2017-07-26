#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int m,n, pfh, lfh;
    while(~scanf("%d%d", &m, &n)){
        if(m>n){
            swap(m,n);
        }
        pfh = 0; lfh = 0;
        if(m%2 == 0){
            for (int i=m; i<=n; i+=2){
                pfh += i*i;
            }
            for (int i=m+1; i<=n; i+=2){
                lfh += i*i*i;
            }
        }else{
            for (int i=m+1; i<=n; i+=2){
                pfh += i*i;
            }
            for (int i=m; i<=n; i+=2){
                lfh += i*i*i;
            }
        }
        printf("%d %d\n", pfh, lfh);
    }
    return 0;
}
