#include <iostream>
using namespace std;

int main() {

	srand(time(0));
	int target = rand() % 100 + 1;
	int guess = 0;

	while (guess != target) {
		cout << "Please guess a number:" << endl;
		cin >> guess;

		if (!cin) {
			cout << "BAD INPUT" << endl;
			exit(1);
		}
		if (guess == 0) {
			cout << "Input numbers 1-100" << endl;
			return 1;
		}

		if (guess > target) {
			cout << "Too high!" << endl;
		}

		if (guess < target) {
			cout << "Too low!" << endl;
		}

		if (guess == target) {
			cout << "Winner is you!" << endl;
			exit(1);
		}

	}
}

