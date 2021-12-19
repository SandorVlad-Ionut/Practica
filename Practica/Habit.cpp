#include "Habit.h"
#include <iostream>
#include<list>
using namespace std;

Habit::Habit(string title, bool pos, bool done, string category, int score)
{
	this->m_title = title;
	this->m_category = category;
	this->m_done = done;
	this->m_pos = pos;
	this->m_score = score;
}





void Habit::setTitle(string title)
{
	this->m_title = title;
}

string Habit::getTitle() const
{
	return this->m_title;
}


void Habit::setCategory(string name)
{
	this->m_category = name;
}

string Habit::getCategory() const
{
	return this->m_category;

}



void Habit::setScore(int score)
{
	this->m_score = score;
}

int Habit::getScore() const
{
	return this->m_score;
}





