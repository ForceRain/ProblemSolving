#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[100];
char mapping[256];
char res[100000];
char *alpha[26]={
".-   ","-... ","-.-. ","-..  ",".    ","..-. ","--.  ",".... ","..   ",".--- ","-.-  ",".-.. ","--   ","-.   ","---  ",".--. ","--.- ",".-.  ",
"...  ","-    ","..-  ","...- ",".--  ","-..- ","-.-- ","--.. "
};

int main(void)
{
	int test;
	mapping['.'] = 1;
	mapping[' '] = 2;
	mapping['-'] = 3;

	for ( int i=0;i<26;i++ )
	{
		int keeey = 0;
		for ( int k=0, ruler = 10000 ;k<5 && (alpha[i][k]!=' ') ;k++,ruler/=10 )
			keeey += mapping[ alpha[i][k] ] * ruler;
		res[keeey] = i+'A';
	}
	freopen("test.txt","r",stdin);
	scanf ("%d",&test);
	getchar();
	for ( int i=0;i<test;i++ )
	{
		gets(input_stream);
		int len = strlen(input_stream);
//		cout<<input_stream<<endl;

		printf("Case %d: ",i+1);
		for ( int j=0;j<len;j++ )
		{
			int keeey = 0;int k=j;
			for ( int ruler = 10000 ;k<j+5 && (input_stream[k]!=' '); k++,ruler/=10 )
				keeey += mapping[ input_stream[k] ] * ruler;
			j=k;
			printf("%c",res[keeey]);
		}
		printf("\n");
	}

	return 0;
}