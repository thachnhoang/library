#include "std_lib_facilities.h"
#ifndef LIBRARY_H
#define LIBRARY_H

class library {
private:
	vector <string> author;
	vector <string> title;
	vector <int> year;
	vector <string> genre;
	vector <string> media;
	vector <string> age;
	vector <string> ISBN;
public:
	library();
	void add_item(string aut, string tit, int yr, string gen, string med, string ag, string is);
	void print(int i);
	string get_title(int i);
	void create_publication();
	void list_publication();
	int get_size();
};
#endif // !LIBRARY_H

#pragma once
