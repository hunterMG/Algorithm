#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,m, a[102];
    while(~scanf("%d%d", &n, &m) && (n||m)){
        int pos = -1;
        for(int i=0; i< n; i++){
            scanf("%d", &a[i]);
            if(a[i] < m)
                pos = i;
        }
        for(int i=0; i<=pos; i++){
            printf("%d ", a[i]);
        }
        printf("%d", m);
        for(int i=pos+1; i<n; i++){
            printf(" %d", a[i]);
        }
        printf("\n");

    }
    return 0;
}
