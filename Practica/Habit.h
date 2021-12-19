#pragma once
using namespace std;
#include <string>

class Habit
{
public:
	Habit();
	Habit(string title,bool pos, bool done,string category, int score);

	void setTitle(string title);
	string getTitle() const;

	void setScore(int age);
	int getScore() const;

	void setCategory(string category);
	string getCategory() const;





protected:
	string m_title;
	string m_category;
	int	m_score;
	bool m_done;
	bool m_pos;



};