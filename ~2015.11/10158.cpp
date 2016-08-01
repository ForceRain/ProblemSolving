#include <iostream>

using namespace std;

int main(void)
{
	int R,C;
	int startX,startY;
	int time;
	int outX,outY;
	cin>>R>>C;
	cin>>startX>>startY;
	cin>>time;

	if (((startX+time)/R)%2==1)
		outX=R-(startX+time)%R;
	else
		outX=(startX+time)%R;

	if (((startY+time)/C)%2==1)
		outY=C-(startY+time)%C;
	else
		outY=(startY+time)%C;

	cout<<outX<<" "<<outY<<endl;

	return 0;
}