#include <iostream>
#include <format>
using namespace std;

int main() {

	int a{};
	int b{};

	cout << "Hello! I will calculate if one of the numbers is exact multiple of the other. Please, enter the first positive number: ";
	cin >> a;
	cout << "Please, enter the second positive number: ";
	cin >> b;

	if (a>0 && b>0) {

		int c = max({ a, b });
		int d = min({ a,b });

		if (!(c % d)) {
			cout << format("The number {} is a multiple of the number {}", c, d);
		}
		else {
			cout <<format("The number {} is not a mutliple of {}", c, d);
		}
	    }

	//we can also use a simple else statemt
	else if ((!a || !b) || (a < 0 || b < 0)) {
		cout << "Please, enter numbers that iz not equal to zero or not equal to a negative integer.";
	    }

	return 0;
}