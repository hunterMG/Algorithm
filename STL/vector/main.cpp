#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    vector<int> vec(10);
    vector<int>::iterator p;
    printf("vec's size=%d\n",vec.size());
    for (int i=0; i<10; i++){
        vec[i] = i;
    }
    for (int i=0; i<10; i++){
        printf("vec[%3d] = %3d\n", i, vec[i]);
    }
    printf("capacity= %d\n",vec.capacity());
    vector<int> vec2(vec);
    for (int i=0; i<10; i++){
        printf("vec2[%3d] = %3d\n", i, vec2[i]);
    }
    vec.assign(5,15);
    cout<<"after assign:"<<endl;
    for (int i=0; i<10; i++){
        printf("vec[%3d] = %3d\n", i, vec[i]);
    }
    if(vec.empty()){
        printf("vec  is empty\n");
    }else{
        printf("vec  isn't empty\n");
    }
    printf("vec's size=%d\n",vec.size());

    for(p = vec.begin(); p != vec.end(); ++p){
        printf("%d ", *p);
    }
    vec.clear();
    cout<<"after clear:"<<endl;
    for (int i=0; i<10; i++){
        printf("vec[%3d] = %3d\n", i, vec[i]);
    }
    if(vec.empty()){
        printf("vec  is empty\n");
    }else{
        printf("vec  isn't empty\n");
    }
    printf("vec's size=%d\n",vec.size());

    for(p = vec.begin(); p != vec.end(); ++p){
        printf("%d ", *p);
    }
    return 0;
}
