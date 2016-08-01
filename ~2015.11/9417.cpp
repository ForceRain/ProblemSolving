#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

char input_stream[10000];
int num_list[101];

int get_gcd(int a,int b)
{
	if (b==0)
		return a;
	else
		return get_gcd(b,a%b);
}

int main(void)
{
	int N;
	scanf("%d",&N);
	getchar();
	
	for (int i=0;i<N;i++)
	{
		gets(input_stream);
		int len=strlen(input_stream);
		int read_len=0;
		int val=0,val_list_num=0;
		for (int j=0;j<len;j++)
		{
			if (input_stream[j]==' ')
			{
				input_stream[j]=0;
				sscanf(input_stream+read_len,"%d",&val);
		//		printf("val : %d\n",val);
				read_len=(j+1);
				num_list[val_list_num++]=val;
			}
		}
		sscanf(input_stream+read_len,"%d",&val);
	//	printf("val : %d\n",val);
		num_list[val_list_num++]=val;

		int maxi_gcd=-1;
		for (int j=0;j<val_list_num;j++)
		{
			for (int k=j+1;k<val_list_num;k++)
			{
				int v=get_gcd(num_list[j],num_list[k]);
				if (v>maxi_gcd)
					maxi_gcd=v;
			}
		}
		printf("%d\n",maxi_gcd);
	}

	return 0;
}