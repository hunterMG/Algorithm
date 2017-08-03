#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n=0, a[102], minPos;
    while(~scanf("%d", &n) && n){
        scanf("%d", &a[0]);
        minPos = 0;
        for(int i=1; i<n; i++){
            scanf("%d", &a[i]);
            if(a[i] < a[minPos])
                minPos = i;
        }
        swap(a[0], a[minPos]);
        for(int i=0; i<n-1; i++){
            printf("%d ", a[i]);
        }
        printf("%d\n", a[n-1]);
    }
    return 0;
}
