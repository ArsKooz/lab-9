#include <iostream>
using namespace std;

int main() 
{
	int s,a,b,c,l,k,n,ost;
	cout << "Vvedite znacheniya A B C\n";
	
	cin >> a >> b >> c;
	s = a * b;
	l = 0;	k = 0;
	while (a >= c )
	{
		a -= c;
		l++;
	}
	while  (b>= c)
	{
		b -= c;
		k++;
	}
	n = l * k;
	ost = s - c * c * n;
	cout << n << "\n" << ost;
}
