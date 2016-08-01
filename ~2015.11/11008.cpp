#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int main(void)
{
	int test;
	scanf("%d",&test);

	for (int i=0;i<test;i++)
	{
		string total,partial;
		cin>>total>>partial;

		int cnt=0;
		int found=total.find(partial);
		while ( found != string::npos )
		{
			found=total.find(partial,found+partial.length());
		//	cout<<found<<endl;
			cnt++;
		}
		printf("%d\n",total.length()-partial.length()*cnt+cnt);
	}

	return 0;
}