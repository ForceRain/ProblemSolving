#include <iostream>
#include <cstdio>

using namespace std;

char func_map[256][256];
char input_stream[1000010];

int main(void)
{
	func_map['A']['A']=func_map['A']['C']=func_map['G']['T']=func_map['C']['A']=func_map['T']['G']='A';
	func_map['A']['G']=func_map['C']['C']=func_map['G']['A']='C';
	func_map['A']['T']=func_map['T']['C']=func_map['G']['G']=func_map['C']['T']=func_map['T']['A']='G';
	func_map['C']['G']=func_map['G']['C']=func_map['T']['T']='T';
	int len;
	scanf("%d",&len);
	scanf("%s",input_stream);
	char n_1,n;

	for (int i=len-1;i>0;i--)
	{
		n_1=input_stream[i-1];
		n=input_stream[i];
		input_stream[i-1]=func_map[n_1][n];
	}

	printf("%c\n",input_stream[0]);

	return 0;
}