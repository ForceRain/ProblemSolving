#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
	int test;
	int arr1[3],arr2[3];
	scanf("%d",&test);

	for (int i=0;i<test;i++)
	{
		int sum_space=0;
		for (int j=0;j<3;j++)
		{
			scanf("%d%d",&arr1[j],&arr2[j]);
			sum_space+=arr1[j]*arr2[j];
		}
		sort(arr1,arr1+3);
		sort(arr2,arr2+3);
		int v1=( (sum_space % arr1[2]) !=0 ) ? sum_space/arr1[2]+1 : sum_space/arr1[2] ;
		int v2=( (sum_space % arr2[2]) !=0 ) ? sum_space/arr2[2]+1 : sum_space/arr2[2] ;
	//	cout<<v1<<", "<<v2<<endl;
		int select_val;
		if ( (v1 - arr1[2]) >= arr2[1] && (v1 - arr1[2]) >= arr1[1] )
			select_val = v1 * arr1[2];
		 
		if ( (v2 - arr2[2]) >= arr2[1] && (v2 - arr2[2]) >= arr1[1] )
			select_val = v2 * arr2[2];

		printf("%d\n",select_val);
	}

	return 0;
}