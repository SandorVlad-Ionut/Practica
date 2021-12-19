#include "HabitsList.h"
#include "Habit.h"
using namespace std;
#include<fstream>
#include<string>

void HabitsList::addRepo(Habit* p)
{
	m_repo.push_back(p);
}

void HabitsList::displayAll()
{
	int n = m_repo.size();
	cout << endl;
	for (int i = 0; i <= n; i++)
		cout << m_repo[i];

}



HabitsList::~HabitsList()
{
	for (int i = 0; i < m_repo.size(); i++)
		delete m_repo[i];
}



