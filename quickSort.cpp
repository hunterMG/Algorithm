#include <cstdio>
#include <iostream>
#include <algorithm>

int a[6] = {5,2,7,8,4,1};

int partition(const int low, const int high){
    int privotPos = low; int privot = a[low]; //基准元素
    for(int i=low+1; i<=high; i++){
    	if(a[i] < privot){
    		privotPos ++;
    		if(privotPos != i){
    			//swap(a[privotPos], a[i]);
    			int tmp = a[privotPos];
    			a[privotPos] = a[i];
    			a[i] = tmp;
    		}
    	}
    }
    a[low] = a[privotPos];
    a[privotPos] = privot;

    return privotPos;
}
void quickSort(int a[], const int left, const int right){
	if(left < right){
		int privotPos = partition(left, right);
		quickSort(a, left, privotPos-1);
		quickSort(a, privotPos+1, right);
	}
}

int main(int argc, char const *argv[])
{
	quickSort(a, 0, 5);
	for(int i=0; i<5; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
