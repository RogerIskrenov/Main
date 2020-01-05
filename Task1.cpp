#include <iostream> // contains functions like cout, cin etc
using namespace std; // i just use it

int count(int n, int d) // we count n and d
{
	if (n < 10)
		return d; // if n<10 we return the result to d
	else
		return count(n / 10, d + 1); // if n>10 or n=10 we divie it to 10
}

int main()
{
	int n;
	cout << "Enter a number" << endl; // we show this on the screen
	cin >> n; // we enter a number -> n
	int x = count(n, 1); // x gets the new value of count
	cout << x; // and we show it on the screen
	return 0; // we terminate the program
}