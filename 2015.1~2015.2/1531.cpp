#include <iostream>

using namespace std;

class paint
{
private :
	int **arr;
	int c_M;

public :
	paint(int M)
	{
		c_M=M;
		arr=new int*[101];

		for (int i=0;i<101;i++)
			arr[i]=new int[101];

		for (int i=0;i<101;i++)
		{
			for (int j=0;j<101;j++)
				arr[i][j]=0;
		}
	}

	void coloring(int x1,int y1,int x2,int y2)
	{
		for (int i=x1;i<=x2;i++)
		{
			for (int j=y1;j<=y2;j++)
			{
				arr[i][j]++;
			}
		}
	}

	void check()
	{
		int not_see=0;
		for (int i=0;i<101;i++)
		{
			for (int j=0;j<101;j++)
			{
				if (arr[i][j]>c_M)
					not_see++;
			}
		}

		cout<<not_see<<endl;
	}
};

int main(void)
{
	int N,M;
	cin>>N>>M;
	paint obj(M);

	int x1,y1,x2,y2;
	for (int i=0;i<N;i++)
	{
		cin>>x1>>y1>>x2>>y2;
		obj.coloring(x1,y1,x2,y2);
	}

	obj.check();

	return 0;
}