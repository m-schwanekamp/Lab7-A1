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

		for (int i = 1; i <= 10; i++) {
			for (int i = 0; i <= 8; i++) {
				int iRand = ((rand() % 9) + 1);
				movement = iRand;


				//generate location of x and y coordinate
				if (movement == 3) {
					y++;
				}
				if (movement == 7) {
					y--;
				}
				if (movement == 4) {
					x++;
					y++;
				}
				if (movement == 5) {
					x++;
				}
				if (movement == 8) {
					x++;
					y--;
				}
				if (movement == 1) {
					x--;
				}
				if (movement == 2) {
					x--;
					y++;
				}
				if (movement == 6) {
					x--;
					y--;
				}
				else if (movement == 0) {
					x += 0;
					y += 0;
				}
			}
		}
		cout << " finished at location (" << x << ", " << y << ")" << endl;
	}
}
