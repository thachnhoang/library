#include "std_lib_facilities.h"
#include "library.h"

#ifndef CUSTOMER_H
#define CUSTOME_H

class customer {
private:
	vector <string> name;
	vector <string> phone_number;
	vector <string> arr_book;
public:
	string get_name(int i);
	string get_phone_number(int i);
	int check_item(string item);
	void delete_record(string tit);
	void add_record(string tit, string name, string phone);
};
#endif // !CUSTOMER_H

#pragma once
