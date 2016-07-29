#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(void)
{
	char input1[81]={'\0'};
	char input2[81]={'\0'};
	char output[85]={'\0'};

	cin>>input1>>input2;

	int l1=strlen(input1)-1;
	int l2=strlen(input2)-1;
	int output_ptr=83;

	int carry=0;
	while ((l1>=0) && (l2>=0))
	{
		char tmp=input1[l1--]+input2[l2--]-'0'+carry;
		//cout<<"tmp : "<<tmp<<endl;
		if (!(('0'<=tmp) && (tmp<='1')))
		{
			carry=1;
			output[output_ptr--]=tmp-2;
		}
		else
		{
			carry=0;
			output[output_ptr--]=tmp;
		}
	}

	while (l1>=0)
	{
		char tmp=input1[l1--]+carry;
		//cout<<"tmp : "<<tmp<<endl;
		if (!(('0'<=tmp) && (tmp<='1')))
		{
			carry=1;
			output[output_ptr--]=tmp-2;
		}
		else
		{
			carry=0;
			output[output_ptr--]=tmp;
		}
	}

	while (l2>=0)
	{
		char tmp=input2[l2--]+carry;
		//cout<<"tmp : "<<tmp<<endl;
		if (!(('0'<=tmp) && (tmp<='1')))
		{
			carry=1;
			output[output_ptr--]=tmp-2;
		}
		else
		{
			carry=0;
			output[output_ptr--]=tmp;
		}
	}

	if (carry==1)
		output[output_ptr]='1';

	int start_point=-1;
	for (int i=4;i<85;i++)
	{
		if (output[i]=='1')
		{
			start_point=i;
			break;
		}
	}
	
	if (start_point!=-1)
		printf("%s",output+start_point);
	else
		printf("0");

	return 0;
}