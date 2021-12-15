#include <iostream>
#include <vector>
#include <algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	vector<int> vect{ 1,2,3,4,5};
	int x = 2;
	int y = 3;

	for_each(vect.begin(), vect.end(), [x](int i) {
		cout << i * x << endl;
		});

	cout << "\n\n";

	for_each(vect.begin(), vect.end(), [x,y](int i) {
		cout << i * x*y << endl;
		});

	cout << "\n\n";

	for_each(vect.begin(), vect.end(), [=](int i) {
		cout << i * x * y << endl;
		});

	cout << "\n\n";

	for_each(vect.begin(), vect.end(), [&](int i) {
		++x;
		--y;
		cout << i * x * y << endl;
		});

	cout << "\n\n";

	sort(vect.begin(), vect.end(), [](int a, int b) {
		return a > b;
		});

	for_each(vect.begin(), vect.end(), [](int i) {
		cout << i << endl;
		});
	return 0;
}
