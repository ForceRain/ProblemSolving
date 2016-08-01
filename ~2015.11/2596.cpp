#include <iostream>
#include <cstring>

using namespace std;

char input_stream[1000];
char output_stream[1000];
char tmp[1000];
char h_table[8][100]={"000000","001111","010011","011100","100110","101001","110101","111010"};
char h_val[8]={'A','B','C','D','E','F','G','H'};
bool nope;

char get_char()
{
	bool one_diff=false;
	char one_diff_found='X';
	for (int i=0;i<8;i++)
	{
		if (strcmp(h_table[i],tmp)==0)
		{
			one_diff=true;
			one_diff_found=h_val[i];
		}

		int counter=0;
		for (int j=0;j<6;j++)
		{
			if (tmp[j]==h_table[i][j])
				counter++;
		}
		if (counter>=5)
		{
			one_diff=true;
			one_diff_found=h_val[i];
		}
	}
	if (!one_diff)
		nope=true;
	return one_diff_found;
}

int main(void)
{
	int N;
	int output_ptr=0;
	cin>>N;
	cin>>input_stream;

	for (int i=0;i<N;i++)
	{
		int tmp_ptr=0;
		for (int j=i*6;j<(i+1)*6;j++)
			tmp[tmp_ptr++]=input_stream[j];
		char c=get_char();
		if (nope)
		{
			cout<<i+1<<endl;
			break;
		}
		else
			output_stream[output_ptr++]=c;
	}

	if (!nope)
		cout<<output_stream<<endl;

	return 0;
}