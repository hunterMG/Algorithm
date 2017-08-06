// http://v.youku.com/v_show/id_XMTQ3MzI0NzI2OA==.html
// http://karaffeltut.com/NEWKaraffeltutCom/Knapsack/knapsack.html
#include <iostream>
#include <cstdio>
using namespace std;

#define N 6
#define W 22

int B[N][W] = {0};
int w[6] = {0, 2, 3, 4, 5, 9};
int v[6] = {0, 3, 4, 5, 8, 10};
void knapsack(){
    int k,cap;
    for(k=1; k<N; k++){
        for(cap=1; cap<W; cap++){
            if(w[k] > cap){
                B[k][cap] = B[k-1][cap];
            }else{
                int value1 = B[k-1][cap];
                int value2 = B[k-1][cap-w[k]] + v[k];
                B[k][cap] = max(value1, value2);
            }
        }
    }
}


int main()
{
    knapsack();
    printf("%d\n", B[5][20]);
    for(int i=0; i<6; i++){
        for(int j=0; j<=20; j++){
            printf("%2d ",B[i][j]);
        }
        cout<<endl;
    }
    return 0;
}
