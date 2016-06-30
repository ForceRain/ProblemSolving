#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	freopen("sample_input.txt", "r", stdin);

	/* setbuf 함수를 사용하지 않으면, 본인의 프로그램이 제한 시간 초과로 강제 종료 되었을 때,
	   C++에서 printf를 사용할 경우, printf로 출력한 내용이 채점되지 않고 '0점'이 될 수도 있습니다.
	   따라서 printf를 사용할 경우 setbuf(stdout, NULL) 함수를 반드시 사용하시기 바랍니다. */
	setbuf(stdout, NULL);

	int T;
	int test_case;
    
	scanf("%d", &T);	// Codeground 시스템에서는 C++에서도 scanf 함수 사용을 권장하며, cin을 사용하셔도 됩니다.
	for(test_case = 1; test_case <= T; test_case++) {
		// 이 부분에서 알고리즘 프로그램을 작성하십시오. 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
        int K;
		scanf("%d",&K);
        
		int ruler = 1;
		unsigned long long maximum = 1;
		maximum = maximum << K;
        
		int minimum = 1;
		for ( int j=1;j<=maximum;j++ )
		{
			int cnt = 0;
			int val = j;
			while ( true )
			{
				if ( val == 1 )
					break;
				if ( (val % 2) == 0 )
					val = val/2;
				else
					val = 3*val +1;
				cnt++;
			}
			if ( cnt == K )
			{
				minimum = j;
				break;
			}
		}
        
		// 이 부분에서 정답을 출력하십시오. Codeground 시스템에서는 C++에서도 printf 사용을 권장하며, cout을 사용하셔도 됩니다.
		printf("Case #%d\n", test_case);
        printf("%d %llu\n",minimum,maximum);
	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}