#include <iostream>
#include<list>
#include"User.h"
using namespace std;

User::User(string firstname, string surname, int age, char goals)
{
	idGenerator++;
	this->m_id = idGenerator;
	this->m_surname = surname;
	this->m_firstname = firstname;
	this->m_goals = goals;
	this->m_age = age;
}


int User::getId() const
{
	return this->m_id;
}

//geters setters

void User::setFirstname(string name)
{
	this->m_firstname = name;
}

string User::getFirstname() const
{
	return this->m_firstname;
}


void User::setSurname(string name)
{
	this->m_surname = name;
}

string User::getSurname() const
{
	return this->m_surname;

}



	void User::setAge(int age)
	{
		this->m_age = age;
	}

	int User::getAge() const
	{
		return this->m_age;
	}





