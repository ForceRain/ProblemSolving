#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>

using namespace std;

char input_stream[1000];
char happy[4]=":-)";
char sad[4]=":-(";
int hp_cnt;
int sad_cnt;

int main(void)
{
	gets(input_stream);
	string input(input_stream);
	string input2(input_stream);

	size_t found=input.find(happy);
	while (found!=string::npos)
	{
		hp_cnt++;
		found=input.find(happy,found+1);
	}
	found=input2.find(sad);
	while (found!=string::npos)
	{
		sad_cnt++;
		found=input2.find(sad,found+1);
	}
	if (hp_cnt==0 && sad_cnt==0)
		cout<<"none"<<endl;
	else
	{
		if (hp_cnt==sad_cnt)
			cout<<"unsure"<<endl;
		else if (hp_cnt>sad_cnt)
			cout<<"happy"<<endl;
		else
			cout<<"sad"<<endl;
	}

	return 0;
}