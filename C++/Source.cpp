#include<iostream>
#include<string>
#include<set>
#include"Ticket.h"
using namespace std;

int Ticket:: num = 0;
int main() {
	int menu=0;
	set<Ticket> all;
	all.insert(Ticket());
	all.insert(Ticket("Dep", "Name", Date(12, 12, 12)));
	all.insert(Ticket("Ped", "Emaa", Date(13, 02, 1212)));
	all.insert(Ticket("Ed", "Men", Date(7, 12, 2020)));
	all.insert(Ticket("De", "Nem", Date(5, 15, 2021)));
	all.insert(Ticket("Dpe", "Nme", Date(20, 2, 2002)));

	do {
		system("cls");
		for (set<Ticket>::iterator i = all.begin(); i != all.end(); i++)
		{
			i->show();
		}

		cout << "\n\n1 - Add\n";
		cout << "2 - Delete\n";
		cout << "3 - Find by dest\n";
		cout << "4 - Count\n";
		cout << "5 - ...\n";
		cout << "6 - ...\n";
		cout << "7 - ...\n";

		cin >> menu;
		string n;
		string d;
		Date dd;
		int nn;
		Date dd2;
		switch (menu) {
		case 1: 
			cout << "Name? ";
			cin >> n;
			cout << "Dest? ";
			cin >> d;
			cout << "Date? ";
			cin >> dd;
			all.insert(Ticket(d, n, dd));
			break;
		case 2: 
			cout << "Number? ";
			cin >> nn;
			for (set<Ticket>::iterator i = all.begin(); i != all.end(); i++)
			{
				if (i->getMNum() == nn) {
					all.erase(i);
					break;
				}
			}
			cout << "\n Item deleted.";
			system("pause");
			break;
		case 3: 
			cout << "Dest? ";
			cin >> n;
			for (set<Ticket>::iterator i = all.begin(); i != all.end(); i++)
			{
				if (i->getDest() == n)i->show();
			}
			system("pause");
			break;
		case 4: 
			cout << "Date 1? ";
			cin >> dd;
			cout << "Date 2? ";
			cin >> dd2;
			nn = 0;
			for (set<Ticket>::iterator i = all.begin(); i != all.end(); i++)
			{
				if (dd <= i->getDep() && i->getDep() <= dd2)nn++;
			}
			cout << "Count: " << nn;
			system("pause");
			break;
		case 5: break;
		}
	} while (menu != 0);
}


