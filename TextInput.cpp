#include <iostream>
#include <limits>
#include "TextInput.h"


int getIntFromUserInRange(int min, int max) {

	while (true) {
		int userInput{ getIntFromUser() }; // use getIntFromUser() so we dont need to re-writting again.

		if (userInput < min || userInput > max) {
			std::cout << "Invalid input. Range is [ " << min << " to " << max << " ]. Please try again." << std::endl;
		}
		else {
			return userInput;
		}
	}
}

int getIntFromUser() {
	while (true) {
		int inputGuess{};

		std::cin >> inputGuess;

		if (std::cin.fail()) {	// if the previous extraction failed
			std::cin.clear();	// put it back to normal operation mode

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // except for first input, the rest are ignore().

			std::cout << "Invalid input. Input must be a valid input. Please try again." << std::endl;

		}
		else {
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return inputGuess;
		}

	}
}
