#include <iostream>

using namespace std;

pair<int,int> container[101];
pair<int,int> real_con[101];

int my_abs(int x)
{
	return (x<0)?(-x):(x);
}

int main(void)
{
	int R,C,market;
	cin>>C>>R;
	cin>>market;
	int mirror_map[5]={0,2,1,4,3};
	int position[5]={0,1,R+1,1,C+1};
	int x,y;
	for (int i=0;i<market;i++)
	{
		cin>>x>>y;
		container[i].first=x;
		container[i].second=y;
		if (x<=2)
		{
			real_con[i].first=position[x];
			real_con[i].second=y+1;
		}
		else
		{
			real_con[i].first=y+1;
			real_con[i].second=position[x];
		}
	}
	int dong_x,dong_y;
	int real_dongx,real_dongy;
	cin>>dong_x>>dong_y;
	if (dong_x<=2)
	{
		real_dongx=position[dong_x];
		real_dongy=dong_y+1;
	}
	else
	{
		real_dongx=dong_y+1;
		real_dongy=position[dong_x];
	}
	for (int i=0;i<market;i++)
	{
		if (container[i].first==mirror_map[dong_x])			//반대편에 위치하고 있다면,
		{
	//		cout<<container[i].first<<" && "<<mirror_map[dong_x]<<"i : "<<i<<endl;
			if (container[i].first<=2)		// south, north
			{
				int left=true;
				int sweep_distance=(my_abs(2*(C+1)-real_con[i].second-real_dongy)<my_abs(2-real_con[i].second-real_dongy)?(left=false):left=true);
				if (left)
					real_con[i].second=2-real_con[i].second;
				else
					real_con[i].second=2*(C+1)-real_con[i].second;
			}
			else			// west,east
			{
				int up=true;
				int sweep_distance=(my_abs(2*(R+1)-real_con[i].first-real_dongx)<my_abs(2-real_con[i].first-real_dongx)?(up=false):up=true);
				if (up)
					real_con[i].first=2-real_con[i].first;
				else
					real_con[i].first=2*(R+1)-real_con[i].first;
			}
		}
	}

	int summation=0;
	for (int i=0;i<market;i++)
	{
//		cout<<"position x: "<<real_con[i].first<<", y: "<<real_con[i].second<<endl;
		summation+=my_abs(real_dongx-real_con[i].first)+my_abs(real_dongy-real_con[i].second);
	}
//	cout<<"r_d pos x: "<<real_dongx<<", y: "<<real_dongy<<endl;
	cout<<summation<<endl;

	return 0;
}