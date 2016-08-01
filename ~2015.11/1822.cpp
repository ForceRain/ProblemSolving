#include <iostream>
#include <algorithm>

using namespace std;

int A[500001];
int B[500001];
int AminusB[500001];

int main(void)
{
	int N,M,tmp;
	cin>>N>>M;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		A[i]=tmp;
	}
	for (int j=0;j<M;j++)
	{
		cin>>tmp;
		B[j]=tmp;
	}
	sort(A,A+N);
	sort(B,B+M);

	int a_ptr=0;
	int b_ptr=0;
	int a_m_b_cnt=0;
	
	while (a_ptr<N && b_ptr<M)
	{
		if (A[a_ptr]==B[b_ptr])
		{
			a_ptr++;
			b_ptr++;
		}
		else if (A[a_ptr]<B[b_ptr])
		{
			AminusB[a_m_b_cnt++]=A[a_ptr];
			a_ptr++;
		}
		else
		{
			b_ptr++;
		}
	}

	while (a_ptr<N)
	{
		AminusB[a_m_b_cnt++]=A[a_ptr++];
	}

	cout<<a_m_b_cnt<<endl;
	for (int i=0;i<a_m_b_cnt;i++)
		cout<<AminusB[i]<<" ";
	cout<<endl;

	return 0;
}