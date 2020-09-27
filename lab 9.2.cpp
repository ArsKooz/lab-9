#include <iostream>
using namespace std;

int main() {
	int k;
	cout << "Vvedite den'\n";
	cin >> k;
	k = (1+(k % 7))%7;
	cout << k;
}
