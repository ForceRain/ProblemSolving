#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int values[100001];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	while ( true )
	{
		memset(values,0,sizeof(values));
		scanf("%d",&N);
		if ( N == -1 )
			break;

		int lim = sqrt(N);
		long long summation = 0;
		int vPtr = 0;
		for ( int i=1;i<=lim;i++ )
		{
			if ( (N%i) == 0 )
			{
				summation += i;
				values[vPtr++] = i;
				if ( (N/i) != N )
				{
					summation += (N/i);
					values[vPtr++] = (N/i);
				}
			}
		}
		if ( summation == N )
		{
			sort(values,values+vPtr);
			printf("%d = ",N);
			for (int j=0;j<vPtr;j++)
			{
				if ( j == 0 )
					printf("%d ",values[j]);
				else
					printf("+ %d ",values[j]);
			}
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n",N);
	}
	return 0;
}