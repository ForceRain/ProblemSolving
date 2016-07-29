#include <iostream>
#include <vector>

using namespace std;

int arr[101][101];

typedef struct _set
{
    int x1;
    int y1;
    int w;
    int h;
    public :
    _set(int x1,int y1,int w,int h) : x1(x1),y1(y1),w(w),h(h)
    {}
}Set;

vector<Set> container;
vector<int> output;

int main(void)
{
    int N;
    cin>>N;
    
    int x1,y1,w,h;
    for (int i=0;i<N;i++)
    {
        cin>>x1>>y1>>w>>h;
        container.push_back(Set(x1,y1,w,h));
        for (int j=x1;j<x1+w;j++)
        {
            for (int k=y1;k<y1+h;k++)
            {
                arr[j][k]++;
            }
        }        
    }
    int sum=0;
    for (int i=N;i>0;i--)
    {
		sum=0;
        int start_x=container[i-1].x1;
        int start_y=container[i-1].y1;
        int n_w=container[i-1].w;
        int n_h=container[i-1].h;

		//cout<<start_x<<" "<<start_y<<" "<<n_w<<" "<<n_h<<endl;
        for (int j=start_x;j<start_x+n_w;j++)
        {
            for (int k=start_y;k<start_y+n_h;k++)
            {
                if (arr[j][k]!=0)
				{
                    sum++;
					arr[j][k]=0;
				}
            }
        }
		output.push_back(sum);
    }
    for (int i=output.size()-1;i>=0;i--)
	{
		cout<<output[i]<<endl;
	}

    return 0;
}