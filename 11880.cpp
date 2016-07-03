#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
    int test;
	freopen("test.txt","r",stdin);
    scanf("%d",&test);
    
    for (int i=0;i<test;i++){
        int arr[3];
        scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
        sort(arr,arr+3);
        printf("%llu\n",(unsigned long long)(arr[0]+arr[1])*(arr[0]+arr[1])+arr[2]*arr[2]);
    }
    
    return 0;
}