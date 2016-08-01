#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[101];
int key_mapping[10];
pair <int,int> mapped[256];

int main(void)
{
	mapped['a'].first=mapped['b'].first=mapped['c'].first=2;
	mapped['d'].first=mapped['e'].first=mapped['f'].first=3;
	mapped['g'].first=mapped['h'].first=mapped['i'].first=4;
	mapped['j'].first=mapped['k'].first=mapped['l'].first=5;
	mapped['m'].first=mapped['n'].first=mapped['o'].first=6;
	mapped['p'].first=mapped['q'].first=mapped['r'].first=mapped['s'].first=7;
	mapped['t'].first=mapped['u'].first=mapped['v'].first=8;
	mapped['w'].first=mapped['x'].first=mapped['y'].first=mapped['z'].first=9;

	mapped['a'].second=mapped['d'].second=mapped['g'].second=mapped['j'].second=mapped['m'].second=mapped['p'].second=mapped['t'].second=mapped['w'].second=1;
	mapped['b'].second=mapped['e'].second=mapped['h'].second=mapped['k'].second=mapped['n'].second=mapped['q'].second=mapped['u'].second=mapped['x'].second=2;
	mapped['c'].second=mapped['f'].second=mapped['i'].second=mapped['l'].second=mapped['o'].second=mapped['r'].second=mapped['v'].second=mapped['y'].second=3;
	mapped['s'].second=mapped['z'].second=4;

	int val;
	for (int i=1;i<=9;i++)
	{
		scanf("%d",&val);
		key_mapping[val]=i;
	}
	scanf("%s",input_stream);
	int len=strlen(input_stream);
	int bef_class_num=-1;
	for (int i=0;i<len;i++)
	{
		int cur_class=mapped[input_stream[i]].first;
		if (bef_class_num==cur_class)
			printf("#");

		int looping=mapped[input_stream[i]].second;
		for (int j=0;j<looping;j++)
			printf("%d",key_mapping[cur_class]);
		bef_class_num=cur_class;
	}
	printf("\n");

	return 0;
}