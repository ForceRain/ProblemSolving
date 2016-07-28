#include <stdio.h>
int main(void)
{
	int N;
	int eye[6]={0};
	scanf("%d",&N);
	int num[N];
	int i,j,temp,max_index,out=0,max;
	for (i=0;i<N;i++)
	{
		out=0;
		for (j=0;j<3;j++)
		{
			scanf("%d",&temp);
			eye[temp-1]++;
		}
		for (j=0;j<6;j++)
		{
			if (eye[j]==3)
			{
				num[i]=10000+(j+1)*1000;
				out=1;
			}
			else if (eye[j]==2)
			{
				num[i]=1000+(j+1)*100;
				out=1;
			}
			else if (eye[j]==1)
				max_index=j;            
		}
		if (out==0)
			num[i]=(max_index+1)*100;
		for (j=0;j<6;j++)
			eye[j]=0;
	}
	max=num[0];
	for (i=0;i<N;i++)
	{
		if (max<num[i])
			max=num[i];
	}
	printf("%d",max);
	return 0;
}
