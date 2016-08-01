#include <iostream>

using namespace std;

char space[11][11];

int main(void)
{
	int M,N;
	cin>>M>>N;

	int U,L,R,D;
	cin>>U>>L>>R>>D;

	for (int i=0;i<M;i++)
		cin>>space[i];

	int total_width=L+R+N;
	int total_height=U+D+M;
	int end_print_width=L+N;
	int end_print_height=U+M;

	for (int i=0;i<total_height;i++)
	{
		for (int j=0;j<total_width;j++)
		{
			if (((L<=j) && (j<end_print_width)) && ((U<=i) && (i<end_print_height)))
				cout<<space[i-U][j-L];
			else
			{
				if ((i+j)%2!=0)
					cout<<".";
				else
					cout<<"#";
			}
		}
		cout<<endl;
	}

	return 0;
}