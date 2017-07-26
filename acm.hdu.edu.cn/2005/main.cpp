#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int m[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y,mon,d;
    char date[10];// 1985/1/20
    while(~scanf("%s", date)){
        getchar();
        m[2] = 28;
        y = (date[0]-'0')*1000+(date[1]-'0')*100+(date[2]-'0')*10+date[3]-'0';
        if(date[6] == '/'){
            mon = date[5]-'0';
            if(strlen(date) == 8) d = date[7]-'0';
            else    d = (date[7]-'0')*10 +date[8]-'0';
        }else{
            mon = (date[5]-'0')*10+date[6]-'0';
            if(strlen(date) == 9) d = date[8]-'0';
            else    d = (date[8]-'0')*10 +date[9]-'0';
        }
        if( y%400==0 || (y%4==0 && y%100!=0))
            m[2] = 29;
        if(mon == 1){
            printf("%d\n", d);
        }else{
            int i=1;
            while(i<mon){
                d += m[i];
                i++;
            }
            printf("%d\n", d);
        }
    }
    return 0;
}
