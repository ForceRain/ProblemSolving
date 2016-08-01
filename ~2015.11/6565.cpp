#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_buffer[100];
char tmp_buffer[1000];

int main(void)
{
	while (true)
	{
		scanf("%s",input_buffer);
		if (strcmp(input_buffer,"0+0=0")==0)
		{
			printf("True\n");
			break;
		}
		int plus_pos,eq_pos;
		int op1,op2,res,i_ptr;
		int len=strlen(input_buffer);
		for (int i=0;i<len;i++)
		{
			if (input_buffer[i]=='+')
				plus_pos=i;
			if (input_buffer[i]=='=')
				eq_pos=i;
		}
		i_ptr=0;
		for (int j=plus_pos-1;j>=0;j--,i_ptr++)
			tmp_buffer[i_ptr]=input_buffer[j];
		tmp_buffer[i_ptr]=0;
		sscanf(tmp_buffer,"%d",&op1);

		i_ptr=0;
		for (int j=eq_pos-1;j>plus_pos;j--,i_ptr++)
			tmp_buffer[i_ptr]=input_buffer[j];
		tmp_buffer[i_ptr]=0;
		sscanf(tmp_buffer,"%d",&op2);

		i_ptr=0;
		for (int j=len-1;j>eq_pos;j--,i_ptr++)
			tmp_buffer[i_ptr]=input_buffer[j];
		tmp_buffer[i_ptr]=0;
		sscanf(tmp_buffer,"%d",&res);

		if ((op1+op2)==res)
			printf("True\n");
		else
			printf("False\n");
	}
	return 0;
}