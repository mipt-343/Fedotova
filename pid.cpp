#include <iostream>

using namespace std;

int main()
{
	cout << getpid() << endl;
	cout << getppid() << endl;
	pid_t pid = fork();
	pid == 0 ? cout << "Child " << pid : cout << "Parent " << pid;
	return 0;
}
