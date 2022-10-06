//Lab7-A1
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(void) {
	int movement;
	int drunk = 1;
	int numdrunk = 0;
	int x = 0;
	int y = 0;

	srand(time(0));
	while (drunk < 10) {
		numdrunk++;
		drunk = numdrunk;
		cout << "Drunkard #" << drunk;

		
		for (int m = 0; m <= 8; m++) {
			movement = rand() % 9;
		}

		//generate location of x coordinate
		if (movement == 3 || movement == 7) {
			x = 0;
		}
		if (movement == 4 || movement == 5 || movement == 8) {
			for (int i = 0; i <= 20; i++) {
				x = rand() % 21;
			}
		}
		if (movement == 1 || movement == 2 || movement == 6) {
			for (int i = 0; i >= -20; i--) {
				x = (-1) * (rand() % 21);
			}
		}

		// generate location of y coordinate
		if (movement == 1 || movement == 5) {
			y = 0;
		}
		if (movement == 2 || movement == 3 || movement == 4) {
			for (int j = 0; j <= 20; j++) {
				y = rand() % 21;
			}
		}
		if (movement == 6 || movement == 7 || movement == 8) {
			for (int j = 0; j >= -20; j--) {
				y = (-1) * (rand() % 21);
			}
		}
		else if (movement == 0) {
			x = 0;
			y = 0;
		}
		cout << " finished at location (" << x << ", " << y << ")" << endl;
	}
}
