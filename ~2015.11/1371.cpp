#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int alphab[26];
int space;
int c_r;

int main(void)
{
	char c;
	int maxi=-1;
	while ((c=getchar())!=EOF)
	{
		if (c=='\n')
		{
			c_r++;
	//		if (c_r>maxi)
	//			maxi=c_r;
		}
		else if (c==' ')
		{
			space++;
	//		if (space>maxi)
	//			maxi=space;
		}
		else
		{
			alphab[c-'a']++;
			if (alphab[c-'a']>maxi)
				maxi=alphab[c-'a'];
		}
	}
	/*
	if (maxi==space)
		cout<<" "<<endl;
	if (c_r==space)
		cout<<"\n"<<endl;*/
	for (int i=0;i<26;i++)
	{
		if (alphab[i]==maxi)
			printf("%c",i+'a');
	}
	cout<<endl;

	return 0;
}