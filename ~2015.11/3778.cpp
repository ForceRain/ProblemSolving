#include <iostream>
#include <cstring>
#include <cstdio>

#define my_abs(x) ((x)>0)?(x):-(x)

using namespace std;

char buff1[1000];
char buff2[1000];

int main(void)
{
	int test;
	unsigned long long summation=0;
	cin>>test;
	getchar();

	for (int i=0;i<test;i++)
	{
		summation=0;
		int b1[26]={0};
		int b2[26]={0};
		gets(buff1);
		gets(buff2);
		int len1=strlen(buff1);
		int len2=strlen(buff2);
		for (int j=0;j<len1;j++)
			b1[buff1[j]-'a']++;
		for (int j=0;j<len2;j++)
			b2[buff2[j]-'a']++;

		for (int j=0;j<26;j++)
			summation+=my_abs(b1[j]-b2[j]);
		
		cout<<"Case #"<<i+1<<": "<<summation<<endl;
	}

	return 0;
}