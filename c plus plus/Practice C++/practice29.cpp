// C++ program to print
// 1 to 10 numbers
#include <iostream>
#include <cstdlib>
using namespace std;

// Driver code
int main()
{
for (int i = 1; i <= 10; i += 2)
{
	cout << "i = " << i << endl;
	if (i == 5)
	{
	// Call the pause command
	cout << "Program Is Paused\n"<< endl;
	system("pause");
	cout << "Terminated\n";
	}
}
cout << "Done\n" << endl;
	
return 0; 
}
