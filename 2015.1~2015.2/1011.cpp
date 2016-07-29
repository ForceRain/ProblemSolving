#include <iostream>

using namespace std;

int minimum=2147483646;

void calculate(int length,int move,int cnt)
{
	//cout<<"length : "<<length<<", move : "<<move<<", cnt : "<<cnt<<endl;
	//getchar();
	if ((length>=0) && (move>0))
	{
		if ((length==0) && ((move==2) || (move==1)))
		{
			if (minimum>cnt)
				minimum=cnt;
		}
		else
		{
			calculate(length-(move-1),move-1,cnt+1);
			calculate(length-move,move,cnt+1);
			calculate(length-(move+1),move+1,cnt+1);
		}
	}
}

int main(void)
{
	int N;
	int start,end,length;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		minimum=2147483646;
		cin>>start>>end;
		if ((end-start)==2)
			cout<<2<<endl;
		else if ((end-start)==1)
			cout<<1<<endl;
		else
		{
			length=end-start-2;
			calculate(length,1,0);

			cout<<minimum+2<<endl;
		}
	}

	return 0;
}