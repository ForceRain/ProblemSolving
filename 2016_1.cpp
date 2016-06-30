#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	freopen("sample_input.txt", "r", stdin);

	/* setbuf �Լ��� ������� ������, ������ ���α׷��� ���� �ð� �ʰ��� ���� ���� �Ǿ��� ��,
	   C++���� printf�� ����� ���, printf�� ����� ������ ä������ �ʰ� '0��'�� �� ���� �ֽ��ϴ�.
	   ���� printf�� ����� ��� setbuf(stdout, NULL) �Լ��� �ݵ�� ����Ͻñ� �ٶ��ϴ�. */
	setbuf(stdout, NULL);

	int T;
	int test_case;
    
	scanf("%d", &T);	// Codeground �ý��ۿ����� C++������ scanf �Լ� ����� �����ϸ�, cin�� ����ϼŵ� �˴ϴ�.
	for(test_case = 1; test_case <= T; test_case++) {
		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�. �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
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
        
		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
		printf("Case #%d\n", test_case);
        printf("%d %llu\n",minimum,maximum);
	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}