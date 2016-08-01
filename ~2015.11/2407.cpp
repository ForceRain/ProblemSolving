#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

class Bigint
{
private :
	char value[1000];
	int length;
public :
	Bigint()
	{
		length=1;
		memset(value,0,sizeof(value));
		value[1000-length]='1';
	}
	Bigint(int length, char* values)
	{
		this->length=length;
		memset(value,0,sizeof(value));
		strcpy(value,values);
	}
	Bigint operator+(const Bigint &ref)
	{
		int op_length=ref.length-1;
		int my_length=length-1;
		int m_ptr=0;
		int o_ptr=0;
		int result_length=1;
		int carry=0;
		char result_value[1000];

		while (m_ptr<=my_length && o_ptr<=op_length)
		{
			int tmp=value[999-m_ptr++]+ref.value[999-o_ptr++]-'0'+carry;
			if (!('0'<=tmp && tmp<='9'))
			{
				carry=1;
				result_value[1000-result_length++]=tmp%10;
			}
			else
			{
				carry=0;
				result_value[1000-result_length++]=tmp;
			}
		}
		while (m_ptr<=my_length)
		{
			int tmp=value[999-m_ptr++]+carry;
			if (!('0'<=tmp && tmp<='9'))
			{
				carry=1;
				result_value[1000-result_length++]=tmp%10;
			}
			else
			{
				carry=0;
				result_value[1000-result_length++]=tmp;
			}
		}
		while (o_ptr<=op_length)
		{
			int tmp=ref.value[999-o_ptr++]+carry;
			if (!('0'<=tmp && tmp<='9'))
			{
				carry=1;
				result_value[1000-result_length++]=tmp%10;
			}
			else
			{
				carry=0;
				result_value[1000-result_length++]=tmp;
			}
		}
		if (carry==1)
			result_value[1000-result_length]=carry+'0';

		for (int k=0;k<1000;k++)
			cout<<result_value[k];
		cout<<endl;
		cout<<result_length<<endl;
		return Bigint(result_length,result_value);
	}
	Bigint operator=(const Bigint &ref)
	{
		memset(value,0,sizeof(value));
		strcpy(value,ref.value);
		length=ref.length;
		return *this;
	}
	friend ostream& operator<<(ostream& os,const Bigint &ref);
};

ostream& operator<<(ostream& os,const Bigint &ref)
{
	for (int j=0;j<1000;j++)
		os<<ref.value[j];
	os<<endl;

	for (int i=ref.length;i>0;i++)
		os<<ref.value[1000-i];
	os<<endl;
	return os;
}

Bigint dp[101][101];

int main(void)
{
	int n,m;
	cin>>n>>m;

	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if ((i!=j))
			{
				dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
			}
		}
	}

	cout<<dp[n][m]<<endl;
	
	return 0;
}