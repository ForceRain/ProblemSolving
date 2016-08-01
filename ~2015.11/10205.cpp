#include <iostream>
#include <cstring>

using namespace std;

char input_buffer[1000];

int main(void)
{
	int test,hydra,len,b_num,c_num;
	cin>>test;
	for (int i=0;i<test;i++)
	{
		b_num=0,c_num=0;
		memset(input_buffer,0,sizeof(input_buffer));
		cin>>hydra;
		cin>>input_buffer;
		len=strlen(input_buffer);
		for (int j=0;j<len;j++)
		{
			if (input_buffer[j]=='b')
				b_num++;
			if (input_buffer[j]=='c')
				c_num++;
		}
		hydra=hydra-b_num+c_num;
		cout<<"Data Set "<<i+1<<":"<<endl;
		cout<<hydra<<endl<<endl;
	}

	return 0;
}