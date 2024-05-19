#include <iostream>
using namespace std;

int main()
{
	int n;
	int temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		temp = i;
		while (temp != 0) {
			cout << "*";
			temp--;
		}
		cout << "*" << endl;
	}
}

