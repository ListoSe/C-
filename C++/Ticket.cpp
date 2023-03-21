#include "Ticket.h"

Ticket::Ticket()
{
    myNum = 0;
    dest = "None"; name = "None"; depart = Date();
}

Ticket::Ticket(string d, string n, Date dp)
{
    myNum = ++num;
    dest = d; name = n; depart = dp;
}

void Ticket::setDest(string d)
{
    dest = d;
}

void Ticket::setName(string n)
{
    name = n;
}

void Ticket::setDep(Date d)
{
    depart = d;
}

string Ticket::getDest() const
{
    return dest;
}

string Ticket::getName() const
{
    return name;
}

Date Ticket::getDep() const
{
    return depart;
}

int Ticket::getMNum() const
{
    return myNum;
}

int Ticket::getNum() const
{
    return num;
}

void Ticket::show() const
{
    cout << myNum << ") " << name << " - " << dest << " (" << depart << ")\n";
}

bool Ticket::operator<(const Ticket t) const
{
    return this->dest<t.dest;
}
