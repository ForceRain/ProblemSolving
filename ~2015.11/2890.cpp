#include <iostream>
#include <vector>

using namespace std;

char input_buffer[100];
vector<int> diff_container;

int main(void)
{
	int R,C,pos,maximum=-1;
	bool found=false;
	cin>>R>>C;

	for (int i=0;i<R;i++)
	{
		cin>>input_buffer;
		found=false;
		for (int j=C-1;j>=0;j--)
		{
			if ('0'<=input_buffer[j] && input_buffer[j]<='9')
			{
				pos=j;
				found=true;
				break;
			}
		}
		if (maximum<pos)
			maximum=pos;
		if (found)
			diff_container.push_back(pos-maximum+1);
	}

	for (int i=0;i<diff_container.size();i++)
		cout<<diff_container[i]+1<<endl;

	return 0;
}