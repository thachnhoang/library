#include "std_lib_facilities.h"
#include "customer.h"
#include "library.h"
#include "view.h"

library publication;
customer record;

void check_out()
{
	string command = "y";
	string title;

	while (command == "y")
	{
		cout << "Please tell me the title of item:\n";
		getline(cin, title);
		bool search = false;

		//check to see if there are any book as above
		for (int i = 0; i < publication.get_size(); i++)
		{

			if (title == publication.get_title(i))
			{
				search = true;
				publication.print(i);

				//check to see if it is available or not
				int j = record.check_item(title);
				if (j != -1)
				{
					cout << setprecision(10) << fixed << "Checked out to " << record.get_name(j) << " (" << record.get_phone_number(j) << ")\n";
				}
				else
				{
					string name;
					string phone;
					cout << "What is your name?\n";
					getline(cin, name);
					cout << "What is your phone number?\n";
					getline(cin, phone);
					record.add_record(title, name, phone);
					cout << "Done\n";
				}
			}
		}

		if (!search)
		{
			cout << "There are no book have the title above\n";
		}

		cout << "You want to continue to check out or not(y/n): ";
		getline(cin, command);
	}
}

void check_in()
{
	string command = "y";
	string title;

	while (command == "y")
	{
		cout << "Please tell me the title of item: ";
		getline(cin, title);

		//check to see if there are any book as above
		for (int i = 0; i < publication.get_size(); i++)
		{
			if (title == publication.get_title(i))
			{
				record.delete_record(title);
				cout << "Done\n";
			}
		}
		cout << "You want to continue to check in or not(y/n): ";
		getline(cin, command);
	}
}

void create_publication()
{
	publication.create_publication();
}

void list_publication()
{
	publication.list_publication();
}