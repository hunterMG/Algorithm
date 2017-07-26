#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    while(~scanf("%d", &n)){
        int res=1;
        n--;
        while(n--){
            res = 2*(res +1);
        }
        printf("%d\n", res);
    }
    return 0;
}
