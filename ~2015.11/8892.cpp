#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

string container[101];
char input_buffer[10000];

int main(void)
{
	int test,num;
	scanf("%d",&test);
	for (int i=0;i<test;i++)
	{
		scanf("%d",&num);
		for (int j=0;j<num;j++)
		{
			scanf("%s",input_buffer);
			container[j]=input_buffer;
		}

		bool looping_out=false;
		for (int j=0;(j<num) && (!looping_out);j++)
		{
			for (int k=j+1;k<num;k++)
			{
				string op1=container[k]+container[j];
				string op2=container[j]+container[k];
				bool okay1=true;
				int le1=(op1.length()-1);
				int l1=op1.length()/2;
				for (int i=0;i<l1;i++)
				{
					if (op1[i]!=op1[le1-i])
						okay1=false;
				}

				bool okay2=true;
				int le2=(op2.length()-1);
				int l2=op2.length()/2;
				for (int i=0;i<l2;i++)
				{
					if (op2[i]!=op2[le1-i])
						okay2=false;
				}

				if (okay1)
				{
					printf("%s\n",op1.c_str());
					looping_out=true;
					break;
				}
				else if (okay2)
				{
					printf("%s\n",op2.c_str());
					looping_out=true;
					break;
				}
			}
		}
		if (!looping_out)
			printf("0\n");
	}

	return 0;
}