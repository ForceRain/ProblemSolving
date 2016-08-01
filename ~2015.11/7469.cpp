#include <cstdio>
#include <cstdlib>
#include <memory.h>
#include <map>
#include <algorithm>

int arr[100010];
int partial[100010];
int n,m;

using namespace std;

int cmp(const void * n1, const void *n2)
{
	return *(int *)n1-*(int *)n2;
}
int main(void)
{
//	freopen("test1.txt","r",stdin);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",arr+i);
	for(int i=0;i<m;i++)
	{
		int s,e,target;
		scanf("%d%d%d",&s,&e,&target);
		memcpy(partial,arr+s-1,sizeof(int)*(e-s+1));
	//	qsort(partial,e-s+1,sizeof(int),cmp);
		sort(partial,partial+e-s+1);
		printf("%d\n",partial[target-1]);
	}

}