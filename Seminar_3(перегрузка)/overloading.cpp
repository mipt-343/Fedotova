#include <iostream>

using namespace std;


int abs(int x)
{
	return x<0 ? -x : x;
}

double abs(double x)
{
	return x<0 ? -x : x;
}

int main()
{
	cout << "Enter int X and double Y" << endl;
	int x;
	double y;
	cin >> x >> y;
	cout << "|X| = " << abs(x) << "; |Y| = " << abs(y);
	return 0;
}
