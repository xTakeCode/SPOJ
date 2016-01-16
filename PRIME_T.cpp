#include<iostream>

using namespace std;

bool IsPrime(int);

int main() {
	int length, number;
	cin >> length;

	while (length > 0) {

		cin >> number;

		if (IsPrime(number)) {
			cout << "TAK" << endl;
		}
		else {
			cout << "NIE" << endl;
		}
		length--;
	}
	return 0;
}

bool IsPrime(int number) {

	if (number == 1) {
		return false;
	}
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}
