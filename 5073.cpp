#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
	int arr[3];
	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);

		if ( arr[0]==0 && arr[1]==0 && arr[2]==0 )
			break;
		
		sort(arr,arr+3);
		if ( arr[0]+arr[1] > arr[2] )
		{
			if ( arr[0]==arr[2] )
				printf("Equilateral\n");
			else
			{
				if ( (arr[0]==arr[1] && arr[2] != arr[1]) ||
					(arr[1]==arr[2] && arr[2] != arr[0]) )
					printf("Isosceles\n");
				else 
					printf("Scalene\n");
			}
		}
		else
			printf("Invalid\n");
	}
	return 0;
}