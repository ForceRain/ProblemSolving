#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[1001];
int mapping[256];
int push_times[256];

int main(void)
{
	mapping['A']=mapping['B']=mapping['C']=1;
	mapping['D']=mapping['E']=mapping['F']=2;
	mapping['G']=mapping['H']=mapping['I']=3;
	mapping['J']=mapping['K']=mapping['L']=4;
	mapping['M']=mapping['N']=mapping['O']=5;
	mapping['P']=mapping['Q']=mapping['R']=mapping['S']=6;
	mapping['T']=mapping['U']=mapping['V']=7;
	mapping['W']=mapping['X']=mapping['Y']=mapping['Z']=8;
	mapping[' ']=0;

	push_times['A']=push_times['D']=push_times['G']=push_times['J']=push_times['M']=push_times['P']=push_times['T']=push_times['W']=1;
	push_times['B']=push_times['E']=push_times['H']=push_times['K']=push_times['N']=push_times['Q']=push_times['U']=push_times['X']=2;
	push_times['C']=push_times['F']=push_times['I']=push_times['L']=push_times['O']=push_times['R']=push_times['V']=push_times['Y']=3;
	push_times['S']=push_times['Z']=4;
	push_times[' ']=1;

	int p,w;
	scanf("%d%d",&p,&w);
	getchar();
	gets(input_stream);
	int len=strlen(input_stream);
	unsigned long long total_time=0;
	int bef_class=mapping[input_stream[0]];
	total_time+=push_times[input_stream[0]]*p;
	for (int i=1;i<len;i++)
	{
		if (bef_class==mapping[input_stream[i]] && (input_stream[i]!=' '))
			total_time+=w;
		total_time+=push_times[input_stream[i]]*p;
		bef_class=mapping[input_stream[i]];
	}
	printf("%llu\n",total_time);

	return 0;
}