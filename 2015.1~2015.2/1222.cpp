#include <iostream>

using namespace std;

int main(void)
{
	int *arr;

	arr=new int[200000];

	for (int i=0;i<200000;i++)
		cout<<"i :"<<i<<", "<<arr[i]<<endl;


	return 0;
}