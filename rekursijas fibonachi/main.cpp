#include "mylib.h"

int main() {

	int uzdevums(0);
	cout << "Enter the task 1, 2, 3, 4" << endl;
	cin >> uzdevums;
	switch (uzdevums)
	{
	case 1: firstUzd(); break;
	case 2: secondUzd(); break;
	case 3: thirdUzd(); break;
	case 4: fourthUzd(); break;
	default:
		break;
	}


    return 0;
}
