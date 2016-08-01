#include <iostream>
#include <string>

using namespace std;

int space[9];
char key_map[256];

int main(void)
{
	key_map['`']=key_map['1']=key_map['Q']=key_map['A']=key_map['Z']=1;
	key_map['2']=key_map['W']=key_map['S']=key_map['X']=2;
	key_map['3']=key_map['E']=key_map['D']=key_map['C']=3;
	key_map['4']=key_map['R']=key_map['F']=key_map['V']=key_map['5']=key_map['T']=key_map['G']=key_map['B']=4;
	key_map['6']=key_map['Y']=key_map['H']=key_map['N']=key_map['7']=key_map['U']=key_map['J']=key_map['M']=5;
	key_map['8']=key_map['I']=key_map['K']=key_map[',']=6;
	key_map['9']=key_map['O']=key_map['L']=key_map['.']=7;
	key_map['0']=key_map['P']=key_map[';']=key_map['/']=key_map['-']=key_map['[']=key_map['\'']=key_map[']']=key_map['=']=8;
	string input;
	cin>>input;

	int len=input.length();
	for (int i=0;i<len;i++)
		space[key_map[input[i]]]++;

	for (int i=1;i<=8;i++)
		cout<<space[i]<<endl;

	return 0;
}