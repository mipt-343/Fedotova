#include <iostream>
#include <string>

using namespace std;

int print_fig (int fig, int place);

int main()
{
	cout << "Enter the number" << endl;
	int X;
	cin >> X;
	
	int arr_fig[4];
	int size = 0;
	
	for (int i=0; X!=0; i++)
	{
		arr_fig[i] = X % 10;
		X = X/10;
		size++;
	}
	
	for (int j=size-1; j>=0; j--)
	{
		print_fig (arr_fig[j], j+1);
	}
	
	return 0;
}


int print_fig (int fig, int place)
{
	string R[7] = {"I","V","X","L","C","D","M"};
	
	if (fig%5==4)
	{
		cout << R[2*place-2] << R[2*place-(9-fig)/5];
		return 0;
	}
	
	if (fig/5==1)
	{	cout << R[2*place-1];	}
	
	for (int i = 1; i<=fig%5; i++)
	{	cout << R[2*place-2];	}
	
	return 0;
}












