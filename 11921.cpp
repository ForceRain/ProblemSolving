#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;
#define size 65536

int main(void)
{
    char b[size];
	freopen("test.txt","r",stdin);
    int t=0,n,k,cnt=0;
    int c,j;
	unsigned long long sum = 0;
	
    scanf("%d",&n);
	cnt = n;
    while((c = fread(b,1,size,stdin)) > 0)
    {
        for(j=0;j<c;j++)
        {
			if ( b[j] != '\n' )
				t = (t*10) + (b[j]-'0');
			else
			{
				sum += t;
				t = 0;
			}
        }
	}
	sum += t;
    printf("%d\n%llu\n",cnt,sum);

    return 0;
}