#include "TextInput.h"
#include "Weekday.h"
#include <iostream>
#include <string>

using namespace std;


int main() {

	int year{ promptForYear() };
	int month{ promptForMonth() };
	int dayOfMonth{ promptForDayOfMonth() };

	Weekday days{ calculateWeekday(month, dayOfMonth, year) };

	//std::cout << year << std::endl << month << std::endl << dayOfMonth << std::endl;

	std::cout << "The Year you enter is: " << year << std::endl;
	std::cout << "The Month you enter is: " << month << std::endl;
	std::cout << "The Day you enter is: " << dayOfMonth << std::endl;
	std::cout << "Day of the week is " << getWeekdayName(days);

	return 0;
}
