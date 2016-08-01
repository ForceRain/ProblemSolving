#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
	int test;
	int N,M,num;
	scanf("%d",&test);
	for (int i=0;i<test;i++)
	{
		vector <int> A;
		vector <int> B;
		scanf("%d%d",&N,&M);
		for (int j=0;j<N;j++)
		{
			scanf("%d",&num);
			A.push_back(num);
		}
		for (int j=0;j<M;j++)
		{
			scanf("%d",&num);
			B.push_back(num);
		}
		sort(A.begin(),A.end(),greater<int>());
		sort(B.begin(),B.end(),greater<int>());

		int A_size=A.size();
		int B_size=B.size();
		int B_ptr=0;
		int summation=0;
		for (int k=0;k<A_size;k++)
		{
			while (true)
			{
				if (A[k]>B[B_ptr])
				{
					summation+=(B_size-B_ptr);
					B_ptr=0;
					break;
				}
				else if (A[k]<=B[B_ptr])
					B_ptr++;
				if (B_ptr>=B_size)
				{
					B_ptr=0;
					break;
				}
			}
		}
		printf("%d\n",summation);
	}

	return 0;
}
