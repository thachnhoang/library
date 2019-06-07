#include "std_lib_facilities.h"
#include "library.h"
#include "customer.h"
#include "view.h"


int main()
{
	int demand;
	bool check = true;
	cout << "Welcome to the library!\n";

	while (check)
	{
		cout << "\nWhat do you want today?\n"
			<< "\t Create publication (press 1)\n"
			<< "\t list all publication (press 2)\n"
			<< "\t Check out (press 3)\n"
			<< "\t Check in (press 4)\n"
			<< "\t exit (press 0)\n";
		cin >> demand;
		cin.ignore();

		switch (demand)
		{
			case 0: check = false;
					break;
			case 1: create_publication();
					break;
			case 2: list_publication();
					break;
			case 3: check_out();
					break;
			case 4: check_in();
					break;
		}
	}
	return 0;
}



