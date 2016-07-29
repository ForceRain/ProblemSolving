#include <iostream>
#include <cstring>

using namespace std;

char input1[100];
char input2[100];
char output[100];

void calculate_it()
{
	int l1=strlen(input1)-1;
	int l2=strlen(input2)-1;

	for (int i=0;i<100;i++)
		output[i]='\0';

	int carry=0;
	int tmp;
	int output_ptr=99;
	while ((l1>=0) && (l2>=0))
	{
		tmp=carry+input1[l1]+input2[l2]-2*'0';
		if (!((0<=tmp)&&(tmp<=1)))
		{
			output[output_ptr--]=(tmp-2)+'0';
			carry=1;
		}
		else
		{
			output[output_ptr--]=tmp+'0';
			carry=0;
		}
		l1--;l2--;
	}

	while (l1>=0)
	{
		tmp=carry+input1[l1]-'0';
		if (!((0<=tmp)&&(tmp<=1)))
		{
			output[output_ptr--]=(tmp-2)+'0';
			carry=1;
		}
		else
		{
			output[output_ptr--]=tmp+'0';
			carry=0;
		}
		l1--;
	}

	while (l2>=0)
	{
		tmp=carry+input2[l2]-'0';
		if (!((0<=tmp)&&(tmp<=1)))
		{
			output[output_ptr--]=(tmp-2)+'0';
			carry=1;
		}
		else
		{
			output[output_ptr--]=tmp+'0';
			carry=0;
		}
		l2--;
	}

	if (carry!=0)
		output[output_ptr--]=carry+'0';

	//for (int i=0;i<100;i++)
	//	cout<<"i : "<<i<<" value : "<<output[i]<<endl;

	//cout<<output_ptr<<endl;
	int start_point=0;
	bool find=false;
	for (int i=0;(i<100)&&(!find);i++)
	{
		if (output[i]=='1')
		{
			start_point=i;
			find=true;
		}
	}

	if (!find)
	{
		start_point=99;
	}

	cout<<output+start_point<<endl;
}

int main(void)
{
	int times;
	cin>>times;
	for (int i=0;i<times;i++)
	{
		cin>>input1>>input2;
		calculate_it();
	}

	return 0;
}