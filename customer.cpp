#include "customer.h"

string customer::get_name(int i)
{
	return name[i];
}

string customer::get_phone_number(int i)
{
	return phone_number[i];
}

int customer::check_item(string item)
{
	for (int i = 0; i < name.size(); i++)
	{
		if (item == arr_book[i])
		{
			return i;
		}
	}

	return -1;
}

void customer::add_record(string tit, string na, string phone)
{
	arr_book.push_back(tit);
	name.push_back(na);
	phone_number.push_back(phone);
}


void customer::delete_record(string tit)
{
	for (int i = 0; i < name.size(); i++)
	{
		if (tit == arr_book[i])
		{
			arr_book.erase(arr_book.begin() + i);
			name.erase(name.begin() + i);
			phone_number.erase(phone_number.begin() + i);
		}
	}
}
