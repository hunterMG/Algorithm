#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n=0;
    scanf("%d", &n);
    char str[100];
    while(n--){
        scanf("%s", str);
        int len = strlen(str), digitNum = 0;
        for(int i=0; i<len; i++){
            if(isdigit(str[i])){
                digitNum ++;
            }
        }
        printf("%d\n", digitNum);
    }
    return 0;
}
