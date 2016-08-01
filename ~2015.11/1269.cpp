#include <iostream>
#include <algorithm>

#define MAX 100000001

using namespace std;

int A[200001];
int B[200001];

int main(void)
{
	int N,M,tmp;
	cin>>N>>M;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		A[i]=tmp;
	}
	A[N]=MAX;
	for (int j=0;j<M;j++)
	{
		cin>>tmp;
		B[j]=tmp;
	}
	B[M]=MAX;

	sort(A,A+N);
	sort(B,B+M);

	int a_ptr=0;
	int b_ptr=0;
	int n_cnt=0;
	while (a_ptr<N || b_ptr<M)
	{
		if (A[a_ptr]==B[b_ptr])
		{
			a_ptr++;b_ptr++;
		}
		else if (A[a_ptr]<B[b_ptr])
		{
			a_ptr++;
			n_cnt++;
		}
		else
		{
			n_cnt++;
			b_ptr++;
		}
	}
	cout<<n_cnt<<endl;

	return 0;
}