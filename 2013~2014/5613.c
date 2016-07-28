#include <stdio.h>
int main(void)
{
	int a,b,result;
	char c;
	scanf("%d",&a);
	result=a;
	while (1)
	{
		scanf("%c",&c);
		if (c=='=')
		{
			printf("%d",result);
			break;
		}
		scanf("%d",&b);
		switch(c)
		{
			case '+' :
					result+=b;
					break;
			case '-' :
					result-=b;
					break;
			case '*' :
					result*=b;
					break;
			case '/' :
					result/=b;
					break;
		}
	}
	return 0;
}
