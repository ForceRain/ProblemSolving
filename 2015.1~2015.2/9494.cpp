#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

char input[104];

int main(void)
{
	//ofstream fout("test.txt");
	int ln_ptr=0;
	int line=0;
	int idx=0;
	bool find_idx=false;
	char c;
	while (true)
	{
		cin>>line;
		if (line==0)
			break;

		getchar();
		ln_ptr=0;
		for (int i=0;i<line;i++)
		{
			idx=0;
			find_idx=false;
			while ((c=getchar())!='\n')
			{
				//fout<<c;
				if ((c==' ') && (idx>=ln_ptr) && !find_idx)
				{
					//cout<<"idx : "<<idx<<endl;
					ln_ptr=idx;
					find_idx=true;
				}
				idx++;
			}
			if (!find_idx && idx>=ln_ptr)
				ln_ptr=idx;
			//fout<<endl;
		}
		cout<<ln_ptr+1<<endl;
	}

	return 0;
}