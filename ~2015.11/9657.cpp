#include <iostream>
#include <cstdio>

using namespace std;

int SK_win[1001];

int main(void)
{
	int ro[3]={1,3,4};
	SK_win[0]=0;
	for (int i=0;i<1001;i++)
	{
		for (int j=0;j<3;j++)
		{
			if (i-ro[j]>=0)
			{
				if (SK_win[i-ro[j]]==1)
					SK_win[i]=0;
			}
		}
	}
	int N;
	scanf("%d",&N);
	if (SK_win[N]==0)
		printf("SK\n");
	else
		printf("CY\n");

	return 0;
}