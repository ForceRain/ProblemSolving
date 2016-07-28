#include <stdio.h>
#include <string.h>
struct hak
{
	char jum[5];
	double point;
};
int main(void)
{
	int i;
	char input[5];
	struct hak hak[13]={{"A+",4.3},{"A0",4.0},{"A-",3.7},{"B+",3.3},{"B0",3.0},{"B-",2.7},{"C+",2.3},{"C0",2.0},{"C-",1.7},{"D+",1.3},{"D0",1.0},{"D-",0.7},{"F",0.0}};
	scanf("%s",input);
	for (i=0;i<13;i++)
	{
		if ((strcmp(input,hak[i].jum))==0)
		{
			printf("%.1lf",hak[i].point);
			break;
		}
	}
	return 0;
}
