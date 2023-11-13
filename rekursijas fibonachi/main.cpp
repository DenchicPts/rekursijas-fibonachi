#include "mylib.h"

int main() {
	setlocale(LC_ALL, "Russian");

	int uzdevums(0);
	cout << "Ievadiet uzdevums 1, 2, 3" << endl;
	cin >> uzdevums;
	switch (uzdevums)
	{
	case 1: firstUzd(); break;
	//case 2: secondUzd(); break;
	//case 3: thirdUzd(); break;
	default:
		break;
	}


    return 0;
}
