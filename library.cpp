#include "library.h"

library::library()
{
	add_item("The film", "John Grisham", 1991, "adult", "fiction", "book", "440240");
	add_item("start out", "Tony gaddis", 2008, "adult", "non-fiction", "book", "440241");
	add_item("The kid", "Peter Watt", 2000, "children", "performance", "video", "440242");
	add_item("Game", "Steven More", 1998, "teen", "self-help", "audio", "440243");
	add_item("Java", "Steve Harvey", 2005, "adult", "non-fiction", "periodicals", "440244");
}

void library::create_publication()
{
	string aut, tit, ag, gen, med,is;
	int yr;
	char command;
	bool check = true;
	while (check)
	{
		cout << "Author: ";
		getline(cin, aut);
		cout << "Title: ";
		getline(cin, tit);
		cout << "publication year: ";
		cin >> yr;
		cin.ignore();
		cout << "target age (children/teen/adult/restricted): ";
		getline(cin, ag);
		cout << "genre (fiction/non-fiction/performance/self-help): ";
		getline(cin, gen);
		cout << "media (book/ audio/ video/ periodicals/ newspapers: ";
		getline(cin, med);
		cout << "ISBN: ";
		getline(cin, is);

		add_item(tit, aut, yr, ag, gen, med, is);
		cout << "You want to continue or not (y/n): ";
		cin >> command;
		if (command == 'n')
		{
			check = false;
		}
	}
}

void library::list_publication()
{
	int size = title.size();
	for (int i = 0; i < size; i++)
	{
		cout << "\"" << title[i] << "\" by " << author[i] << ", " << year[i] << " (" << age[i] << " " << genre[i] << " " << media[i] << ") ISBN: " << ISBN[i] << endl;
	}
}

void library::add_item(string tit, string aut, int yr, string ag, string gen, string med, string is)
{
	author.push_back(aut);
	title.push_back(tit);
	year.push_back(yr);
	genre.push_back(gen);
	media.push_back(med);
	age.push_back(ag);
	ISBN.push_back(is);
}


void library::print(int i)
{
	cout << "\"" << title[i] << "\" by " << author[i] << ", " << year[i] << " (" << age[i] << " " << genre[i] << " " << media[i] << ") ISBN: " << ISBN[i] << endl;
}

string library::get_title(int i)
{
	return title[i];
}

int library::get_size()
{
	return title.size();
}