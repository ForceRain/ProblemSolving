#include <iostream>

using namespace std;

int main(void)
{
	int number,tmp,bef=-1;
	int counter=0;
	int max_counter=0;
	while (cin>>number)
	{
		max_counter=0;
		counter=0;
		bef=-1;
		for (int i=0;i<number;i++)
		{
			cin>>tmp;
			if (bef<tmp)
				counter++;
			else
			{
				if (max_counter<counter)
					max_counter=counter;
				counter=1;
			}
			bef=tmp;
		}
		cout<<max_counter<<endl;
	}
	return 0;
}