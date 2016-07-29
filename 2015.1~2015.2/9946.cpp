#include <iostream>
#include <cstring>

using namespace std;

char input1[1004];
char input2[1004];
int arr1[26];
int arr2[26];

void cal()
{
	for (int i=0;i<26;i++)
	{
		arr1[i]=0;
		arr2[i]=0;
	}

	int str1=strlen(input1);
	for (int i=0;i<str1;i++)
		arr1[input1[i]-'a']++;

	int str2=strlen(input2);
	for (int i=0;i<str2;i++)
		arr2[input2[i]-'a']++;
}

bool checking()
{
	for (int i=0;i<26;i++)
	{
		if (arr1[i]!=arr2[i])
			return false;
	}

	return true;
}

int main(void)
{
	int idx=1;
	while (true)
	{
		cin>>input1;
		cin>>input2;

		if ((strcmp(input1,"END")==0) && (strcmp(input2,"END")==0))
			break;

		cal();
		if (checking())
			cout<<"Case "<<idx<<": same"<<endl;
		else
			cout<<"Case "<<idx<<": different"<<endl;

		idx++;
	}
	return 0;
}