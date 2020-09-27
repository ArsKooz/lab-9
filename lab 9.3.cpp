#include <iostream>
using namespace std;

int main() {
	int k,n;
	cout << "Vvedite K N'\n";
	cin >> k>> n;
	k =(n + k % 7)%7 ;
	cout << k;
}