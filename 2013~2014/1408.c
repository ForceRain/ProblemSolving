
#include <stdio.h>
int main(void)
{
	int arr[2][3];
	scanf("%d:%d:%d",&arr[0][0],&arr[0][1],&arr[0][2]);
	scanf("%d:%d:%d",&arr[1][0],&arr[1][1],&arr[1][2]);
	int result[3];
	arr[1][0]+=24;
	result[2]=arr[1][2]-arr[0][2];
	if (result[2]<0)
	{
		result[2]+=60;
		arr[1][1]--;
	}
	result[1]=arr[1][1]-arr[0][1];
	if (result[1]<0)
	{
		result[1]+=60;
		arr[1][0]--;
	}
	result[0]=arr[1][0]-arr[0][0];
	if (result[0]>=24)
		result[0]-=24;
	printf("%02d:%02d:%02d",result[0],result[1],result[2]);
	return 0;
}
