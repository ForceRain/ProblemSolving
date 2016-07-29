#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	ofstream fout("text.txt");

	for (int i=1000;i<10000;i++)
	{
		int sum_decimal=0;
		int sum_tw=0;
		int sum_hex=0;

		int de=i,tw=i,hex=i;

		while (de!=0)
		{
			sum_decimal+=de%10;
			de/=10;
		}

		while (tw!=0)
		{
			sum_tw+=tw%12;
			tw/=12;
		}

		while (hex!=0)
		{
			sum_hex+=hex%16;
			hex/=16;
		}

		if (sum_decimal==sum_tw && sum_tw==sum_hex)
			fout<<i<<endl;
	}

	fout.close();

	return 0;
}