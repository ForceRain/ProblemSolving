#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_buffer[1000];

int mapping[256];
char * mapping_str1="bkxznhdcwgpvjqtsrlmf";
char * mapping_str2="aiyeou";
char * mapping_str3="BKXZNHDCWGPVJQTSRLMF";
char * mapping_str4="AIYEOU";

int main(void)
{
	for (int i=0;i<20;i++)
	{
		if (i>=10)
		{
			mapping[mapping_str1[i]]=mapping_str1[i-10];
			mapping[mapping_str3[i]]=mapping_str3[i-10];
		}
		else
		{
			mapping[mapping_str1[i]]=mapping_str1[i+10];
			mapping[mapping_str3[i]]=mapping_str3[i+10];
		}
	}
	for (int i=0;i<6;i++)
	{
		if (i>=3)
		{
			mapping[mapping_str2[i]]=mapping_str2[i-3];
			mapping[mapping_str4[i]]=mapping_str4[i-3];
		}
		else
		{
			mapping[mapping_str2[i]]=mapping_str2[i+3];
			mapping[mapping_str4[i]]=mapping_str4[i+3];
		}
	}
	char c;
	while ((c=getchar())!=EOF)
	{
		if ( (('a'<=c) && (c<='z')) || ( ('A'<=c) && (c<='Z') ))
			printf("%c",mapping[c]);
		else
			printf("%c",c);
	}
	
	return 0;
}