#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int E,S,M;
	cin>>E>>S>>M;

	int counter=1;
	int e_ptr=1,s_ptr=1,m_ptr=1;
	while (true)
	{
		if (e_ptr==E && s_ptr==S && m_ptr==M)
			break;
		e_ptr=e_ptr>=15?1:++e_ptr;
		s_ptr=s_ptr>=28?1:++s_ptr;
		m_ptr=m_ptr>=19?1:++m_ptr;
		counter++;
	}
	cout<<counter<<endl;

	return 0;
}