#include <iostream>
#include <vector>
#include <algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	vector<int> vect{ 1,2,3,4,5 };
	sort(vect.begin(), vect.end(), [](int a, int b) {
		return a > b;
		});

	for_each(vect.begin(), vect.end(), [](int i) {
		cout << i << endl;
		});
	return 0;
}