#include <iostream>
#include <cmath>

using namespace std;

int total_len;
int R,C;
int counter;
int out_counter;

void divide_and_conquer(int st_x,int st_y,int e_x,int e_y)
{
//	cout<<st_x<<", "<<st_y<<", "<<e_x<<", "<<e_y<<endl;
//	getchar();
	if ((st_x==e_x) && (st_y==e_y))
	{
		counter++;
		if ((C==st_x) && (R==st_y))
			out_counter=(counter-1);
	}
	else
	{
		int tot_x=(e_x-st_x);
		int tot_y=(e_y-st_y);
		int len_x=tot_x/2;
		int len_y=tot_y/2;
		divide_and_conquer(st_x,st_y,st_x+len_x,st_y+len_y);
		divide_and_conquer(st_x+(tot_x-len_x),st_y,e_x,st_y+len_y);
		divide_and_conquer(st_x,st_y+(tot_y-len_y),st_x+len_x,e_y);
		divide_and_conquer(st_x+(tot_x-len_x),st_y+(tot_y-len_y),e_x,e_y);
	}
}

int main(void)
{
	int N;
	while (cin>>N)
	{
		counter=0;
		cin>>R>>C;
		total_len=pow(2,N);
		divide_and_conquer(0,0,total_len-1,total_len-1);
		cout<<out_counter<<endl;
	}

	return 0;
}