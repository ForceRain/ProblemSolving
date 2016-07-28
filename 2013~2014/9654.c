#include <stdio.h>
struct ship{
	char name[16];
	char class[16];
	char deploy[12];
	int in;
};
int main(void)
{
	struct ship ship[5]={{"N2 Bomber","Heavy Fighter","Limited",21},{"J-Type 327","Light Combat","Unlimited",1},\
		{"NX Cruiser","Medium Fighter","Limited",18},{"N1 Starfighter","Medium Fighter","Unlimited",25},{"Royal Cruiser","Light Combat","Limited",4}};
	int i;
	printf("%-15s%-15s%-11s%-10s\n","SHIP NAME","CLASS","DEPLOYMENT","IN SERVICE");
	for (i=0;i<5;i++)
	{
		printf("%-15s%-15s%-11s%-10d\n",ship[i].name,ship[i].class,ship[i].deploy,ship[i].in);
	}
}
