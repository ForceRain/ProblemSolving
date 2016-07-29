#include <iostream>
#include <cstring>

using namespace std;

char input[1000001]={'\0'};
char check[1000001]={'\0'};
char output[1000001]={'\0'};

char str_value(char *input)
{
	if (strcmp(input,"000")==0)
		return '0';
	if (strcmp(input,"001")==0)
		return '1';
	if (strcmp(input,"010")==0)
		return '2';
	if (strcmp(input,"011")==0)
		return '3';
	if (strcmp(input,"100")==0)
		return '4';
	if (strcmp(input,"101")==0)
		return '5';
	if (strcmp(input,"110")==0)
		return '6';
	if (strcmp(input,"111")==0)
		return '7';
}

int main(void)
{
	cin>>input;

	int length=strlen(input);
	int start_point=0;
	if ((length%3)!=0)
		start_point=(length/3+1)*3-length;
	//else
	//	start_point=length;

	strcpy(check+start_point,input);

	for (int i=0;i<start_point;i++)
		check[i]='0';

	int output_length=strlen(check)/3;

	for (int i=output_length-1;i>=0;i--)
	{
		//cout<<"string : "<<check+3*(i)<<endl;
		output[i]=str_value(check+3*(i));
		//cout<<"trans::"<<output[i]<<endl;
		check[i*3]='\0';
	}

	cout<<output<<endl;

	return 0;
}