#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char name[1001];
char str[100001];
char printStr[256][100];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	strcpy (printStr['B'],"Bobcat");
	strcpy (printStr['C'],"Coyote");
	strcpy (printStr['M'],"Mountain Lion");
	strcpy (printStr['W'],"Wolf");
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		int func[256];
		func['M']=4;func['B']=2;func['C']=1;func['W']=3;
		int value[256] = {0};
		cin>>name>>str;
		int len = strlen(str);
		int max = -1;
		for ( int j=0;j<len;j++ )
		{
			int tmp = (value [ str[j] ] += func [ str[j] ]);
			if ( max < tmp )
				max = tmp;
		}
		int cnt = 0;
		int maxPos = -1;
		for ( int k=0;k<256;k++ )
		{
			if ( value[k] == max )
			{
				maxPos = k;
				cnt++;
			}
		}

		printf("%s: ",name);
		if ( cnt > 1 )
			printf("There is no dominant species\n");
		else
			printf("The %s is the dominant species\n",printStr[maxPos]);
	}

	return 0;
}