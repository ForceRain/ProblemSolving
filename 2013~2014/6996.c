#include <stdio.h>
#include <string.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int i,len,j,key=1;
	int check[26]={0};
	int ans1[N];
	char ans[N][2][100];
	char arr1[100];
	char arr2[100];
	for (i=0;i<N;i++)
	{
		j=0;
		key=1;
		scanf("%s %s",arr1,arr2);
		while (arr1[j]!='\0' || arr2[j]!='\0')
		{
			check[arr1[j]]++;
			check[arr2[j]]++;
			j++;
		}
		if (strlen(arr1)!=strlen(arr2))
		{
			strcpy(ans[i][0],arr1);
			strcpy(ans[i][1],arr2);
			ans1[i]=0;
		}
		for (j=0;j<26;j++)
		{
			if (check[j]%2==1)
			{
				strcpy(ans[i][0],arr1);
				strcpy(ans[i][1],arr2);
				ans1[i]=0;
				key=0;
				break;
			}
		}
		if (key==1)
		{
			strcpy(ans[i][0],arr1);
			strcpy(ans[i][1],arr2);
			ans1[i]=1;
			key=1;
		}
		for (j=0;j<26;j++)
			check[j]=0;
	}
	for (i=0;i<N;i++)
	{
		if (ans1[i]==1)
			printf("%s & %s are anagrams.\n",ans[i][0],ans[i][1]);
		else
			printf("%s & %s are NOT anagrams.\n",ans[i][0],ans[i][1]);
	}
	return 0;
}
