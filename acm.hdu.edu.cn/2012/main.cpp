#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int x,y;
    while(~scanf("%d%d", &x, &y)){
        if(x==0 && y==0) break;
        int allissushu = 1;
        for(int i=x; i<=y; i++){
            int f = i*i+i+41;
            int sqrt_f = sqrt(f);
            int issushu = 1;
            for(int j=2; j<sqrt_f; j++){
                if(f%j == 0){
                    issushu=0;
                    break;
                }
            }
            if(!issushu){
                allissushu = 0;
                break;
            }
        }
        if(allissushu){
            printf("OK\n");
        }
        else{
            printf("Sorry\n");
        }
    }
    return 0;
}
