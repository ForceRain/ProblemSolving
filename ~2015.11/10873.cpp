#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

char input_buffer[1000];

string sentences[25][5]=
{{},{"how","to","install"},{"what","is"},{"","not","working"},{"why","use"},{"who","use"},{"disadvantages","of"},{"advantages","of"},
{"","open","source","projects"},{"","tutorial"},{"","performance"},{"","sucks"},{"getting","started"},{""},{"","reference"},{"","solution"},
{"","example","code"},{"difference","between","","and","C++"},{"","site:acmicpc.net"},{"","filetype:pdf"},{"","slides"},{"how","to","make"},
{"","jobs"},{"","time"},{"best","os","x","","app"}};

int mapping[25]=
{-1,3,2,0,2,2,2,2,0,0,0,0,2,0,0,0,0,2,0,0,0,3,0,0,3};
int lenh[25]=
{-1,4,3,3,3,3,3,3,4,2,2,2,3,1,2,2,3,5,2,2,2,4,2,2,5};

vector <string> container;

int main(void)
{
	int N;
	cin>>N;
	int num;
	for (int i=0;i<N;i++)
	{
		cin>>num;
		getchar();
		gets(input_buffer);
		
		string keyw(input_buffer);
		if ((( 1 <= num) && (num <= 24)))
		{
			string result="";
			int loop_len=lenh[num];
			for (int i=0;i<loop_len;i++)
			{
				if (mapping[num]==i)
					result+=keyw;
				else
					result+=sentences[num][i];
				result+=" ";
			}
			container.push_back(result);
		}
		else
			container.push_back(keyw);
	}

	int sz=container.size();
	for (int i=0;i<sz;i++)
		cout<<container[i]<<endl;

	return 0;
}