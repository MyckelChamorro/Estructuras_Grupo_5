#include <cstdio>
#include <iostream>

using namespace std;

char maxOfChar(char a, char b) {
    return (a > b ? a : b);
}

int maxOfInt(int a, int b) {
    return (a > b ? a : b);
}

template <typename T> T maxOf(T a, T b) {
    return (a > b ? a : b);
}

int main()
{
    char i = maxOfChar('e', 'z');
    int j = maxOfInt(9, 4);

    cout << "Max character between e and z is: " << i << endl;
    cout << "Max integer between 9 and 4 is: " << j << endl;

    char x = maxOf<char>('e', 'z');
    int y = maxOf<int>(9, 4);

    cout << "Max character between e and z using template is: " << x << endl;
    cout << "Max integer between 9 and 4 using template is: " << y << endl;

    return 0;
}
