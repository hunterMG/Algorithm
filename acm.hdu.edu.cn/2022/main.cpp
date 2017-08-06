#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int m=0, n=0, score;
    long int maxS;
    while(~scanf("%d%d", &m, &n)){
        maxS = 0;
        int row=0,col=0;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                scanf("%d", &score);
                if(abs(score) > abs(maxS)){
                    maxS = score;
                    row = i;
                    col = j;
                }
            }
        printf("%d %d %d\n", row+1, col+1, maxS);
    }
    return 0;
}
