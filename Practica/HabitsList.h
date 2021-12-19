#pragma once
#include <iostream>
#include<fstream>
#include <vector>
#include<string>
#include "Habit.h"

using namespace std;

class HabitsList

{
public:
	void addRepo(Habit* p);
	Habit* deleteRepo(int id);
	~HabitsList();
	vector<Habit*> m_repo;
	void displayAll();
};