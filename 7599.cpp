#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[1001];

int main(void)
{
	int F;

	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%s%d",input_stream,&F);

		if ( ( strcmp("#",input_stream) == 0 ) && ( F == 0 ) )
			break;

		int C;
		scanf("%d",&C);
		
		printf("%s Library\n",input_stream);
		for ( int i=1;i<=C;i++ )
		{
			int len;
			scanf("%d%s",&len,input_stream);
			len = len -2;
			printf("Book %d ",i);
			int ll = strlen(input_stream);
			if ( ll*F <= len )
				printf("horizontal\n");
			else
				printf("vertical\n");
		}
	}

	return 0;
}