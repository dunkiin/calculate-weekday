#ifndef WEEKDAY_H
#define WEEKDAY_H

#include <string>

enum class Weekday {
	Saturday,	// 0
	Sunday,		// 1
	Monday,		// 2
	Tuesday,	// 3
	Wednesday,	// 4
	Thursday,	// 5
	Friday		// 6
};

/// <summary>
/// Prompt the user for the 4 digit year. Read it as an int. Range [0-9999]
/// </summary>
/// <returns>An int number in Range [0-9999]</returns>
int promptForYear();

/// <summary>
/// Prompt the user for the 2 dighit month. Read it as an int. Range [1-12]
/// </summary>
/// <returns>An int number in Range [1-12]</returns>
int promptForMonth();

/// <summary>
/// Prompt the user For the 2 or 1 digit day. Read it as an int. Range [1-31]
/// </summary>
/// <returns>An int number in Range [1-31]</returns>
int promptForDayOfMonth();

/// <summary>
/// Calculate the Weekday in the month. 
/// </summary>
/// <param name="month"></param>
/// <param name="dayOfMonth"></param>
/// <param name="year"></param>
/// <returns>return a weekday type</returns>
Weekday calculateWeekday(int month, int dayOfMonth, int year);

/// <summary>
/// Get the Weekday in the array
/// </summary>
/// <param name="day"></param>
/// <returns>The days in week</returns>
std::string getWeekdayName(Weekday day);


#endif // !TEXTINPUT_H
