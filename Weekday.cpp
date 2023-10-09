#include <iostream>
#include <string>
#include "TextInput.h"
#include "Weekday.h"

//enum class Weekday {
//	Saturday,	// 0
//	Sunday,		// 1
//	Monday,		// 2
//	Tuesday,	// 3
//	Wednesday,	// 4
//	Thursday,	// 5
//	Friday		// 6
//};

int promptForYear() {

	while (true) {

		std::cout << "Enter the year: (e.g., 2018): "; // range will be 0 - 9999

		int userYear{ getIntFromUserInRange(0, 9999) };

		return userYear;
	}

}

int promptForMonth() {

	while (true) {

		std::cout << "Enter Month: 1 - 12: ";

		int userMonth{ getIntFromUserInRange(1, 12) };	// range will be 1 - 12

		return userMonth;
	}


}

int promptForDayOfMonth() {

	while (true) {

		std::cout << "Enter the day of the month: 1 - 31: ";	// range will be 1 - 31

		int userDayOfMonth{ getIntFromUserInRange(1, 31) };		// mark 0,31 or 1,31 ???

		return userDayOfMonth;
	}
}


Weekday calculateWeekday(int month, int dayOfMonth, int year) {
	if (month <= 2) {
		month += 12;
		year -= 1;
	}

	int century{ year / 100 };
	int yearOfTheCentury{ year % 100 };

	// formula: h = (q + 26(m+1) / 10 + k + k/4 + j/4 + 5j) % 7
	// h is the day of the week. q is the day of the month. m is the month. j is the century(year / 100). 
	// k is the year of the century (year % 100)

	int dateOfTheWeek = (dayOfMonth + (26 * (month + 1)) / 10 + yearOfTheCentury + yearOfTheCentury / 4 + century / 4 + 5 * century) % 7;

	return static_cast<Weekday>(dateOfTheWeek); // Using static_cast to convert int type to Weekday type
};


std::string getWeekdayName(Weekday day) {

	// 0: Saturday, 1: Sunday, 2: Monday, 3: Tuesday, 4: Wednesday, 5: Thursday, 6: Friday
	std::string weekdays[] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };

	return weekdays[static_cast<int>(day)];		// Using static_cast to convert string to int
};