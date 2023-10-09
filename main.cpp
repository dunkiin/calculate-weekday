#include "TextInput.h"
#include "Weekday.h"


#include <iostream>
#include <string>



int main() {

	int year{ promptForYear() };
	int month{ promptForMonth() };
	int dayOfMonth{ promptForDayOfMonth() };

	Weekday days{ calculateWeekday(month, dayOfMonth, year) };

	//std::cout << year << std::endl << month << std::endl << dayOfMonth << std::endl;

	std::cout << "Day of the week is " << getWeekdayName(days);

	return 0;
}
