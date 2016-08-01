#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int arr[1000001];
int arr_size;

int ans_find(int ans_key)
{
	int high=arr_size;
	int low=0;
	int mid;
	while (low<=high)
	{
		mid=(high+low)/2;
		if (ans_key<arr[mid])
			high=mid-1;
		else if (ans_key>arr[mid])
			low=mid+1;
		else
			return 1;
	}
	return 0;
}

int main(void)
{
    int N;
	int ans_size;
	int tmp;
    scanf("%d",&N);
    
    for (int i=0;i<N;i++)
    {
        scanf("%d",&arr_size);
        for (int j=0;j<arr_size;j++)
            scanf("%d",&arr[j]);

        sort(arr,arr+arr_size);

        scanf("%d",&ans_size);
        for (int j=0;j<ans_size;j++)
        {
            scanf("%d",&tmp);
            printf("%d\n",ans_find(tmp));
        }
    }

	return 0;
}