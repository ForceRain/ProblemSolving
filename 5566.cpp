#include <iostream>
#include <cstdio>

using namespace std;

int curPtr = 1;
int space[10001];

int main(void)
{
	int N,M,dice,rollDice=0,nextPos;
	freopen("test.txt","r",stdin);

	scanf("%d%d",&N,&M);
	for (int i=1;i<=N;i++)
		scanf("%d",&space[i]);

	for (int i=0;i<M;i++)
	{
		rollDice++;
		scanf("%d",&dice);
		nextPos = curPtr + dice;

	//	if (cur_ptr>=N)
	//		break;
		
		curPtr = nextPos + space[ nextPos ];

		if (curPtr <= 0)
			curPtr = 1;
		if (curPtr >= N)
			break;

		
	//	cur_ptr = nextPos;
	//	cout<<curPtr<<endl;
	}
	printf("%d\n",rollDice);

	return 0;
}