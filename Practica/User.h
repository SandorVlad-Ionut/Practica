#pragma once
using namespace std;
#include <string>

class User
{
public:
	User();
	User(string firstname,string surname,int age,char goals);

	void setFirstname(string name);
	string getFirstname() const;

	void setSurname(string name);
	string getSurname() const;

	void setAge(int age);
	int getAge() const;

	// sa fac un modul separat pt goals sau sa il pun aici?
	// goals sa fie categorii prestabilite de ex "sport", "istorie" sau stringuri facute de user : "sa fac cozonaci cu nuca mai bine" ?


	int getId() const;


protected:
	string m_firstname;
	string m_surname;
	char m_goals;
	int m_age;;

private:
	int m_id;
	static int idGenerator;

};