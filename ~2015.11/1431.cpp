#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector < string > container;

char input_buffer[100];

bool my_compare(string a, string b)
{
	if (a.length()<b.length())
		return true;
	else if (a.length()==b.length())
	{
		int len=a.length();
		int sum_a=0,sum_b=0;
		for (int i=0;i<len;i++)
		{
			if (('0'<=a[i]) && (a[i]<='9'))
				sum_a+=(a[i]-'0');
			if (('0'<=b[i]) && (b[i]<='9'))
				sum_b+=(b[i]-'0');
		}
		if (sum_a==sum_b)
			return a<b;
		else
			return sum_a<sum_b;
	}
	else
		return false;
}

int main(void)
{
	int N;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		scanf("%s",input_buffer);
		container.push_back(string(input_buffer));
	}
	sort(container.begin(),container.end(),my_compare);
	int sz=container.size();
	for (int i=0;i<sz;i++)
		printf("%s\n",container[i].c_str());
	
	return 0;
}