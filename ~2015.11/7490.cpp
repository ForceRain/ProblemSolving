#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

int numb;
vector<string> container;

void backtrack(int value,int next_num,vector <char> cont)
{
//	cout<<"val :"<<value<<", ne_num : "<<next_num<<endl;
	if (next_num>numb)
	{
		if (value==0)
		{
			string output="";
			for (int i=1;i<numb;i++)
			{
				output+=(i+'0');
				output+=cont[i-1];
			}
			output+=(numb+'0');
			container.push_back(output);
		}
	}
	else
	{
		vector<char> v3=cont;
		v3.push_back(' ');
		int res_value;
		if (!cont.empty())
		{
			if (cont[cont.size()-1]=='-')
				res_value=value-10*next_num+9;
			else if (cont[cont.size()-1]=='+')
				res_value=value+10*next_num-9;
			else if (cont[cont.size()-1]==' ')
				res_value=value*10;
			backtrack(res_value,next_num+1,v3);
		}

		vector<char> v2=cont;
		v2.push_back('-');
		backtrack(value-next_num,next_num+1,v2);

		vector<char> v1=cont;
		v1.push_back('+');
		backtrack(value+next_num,next_num+1,v1);

	}
}

int main(void)
{
	int test;
	cin>>test;
	for (int i=0;i<test;i++)
	{
		cin>>numb;
		backtrack(1,2,vector<char>());
		sort(container.begin(),container.end());
		int sz=container.size();
		for (int j=0;j<sz;j++)
			printf("%s\n",container[j].c_str());
		if (i!=(test-1))
			printf("\n");
		container.clear();
	}
	
	return 0;
}