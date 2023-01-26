#include <iostream>
#include <iomanip>

int main() {

	int num, i= 0, j;
	bool flag = true;

	std::cout << "*********************************"
		<< "      MULTIPLICATION TABLES      "
		<< "*********************************"
		<< std::endl << std::endl;

	do {
		std::cout << std::endl << std::endl
			<< "ENTER A NUMBER FROM 1 TO 12 (0 TO EXIT): ";
		std::cin >> num;
		if (std::cin.fail() || num < 0 || num > 12) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else {
			flag = false;
		}
	} while (flag == true);

	if (num == 0) {
		std::cout << std::endl << std::endl
			<< "GOODBYE! :)"
			<< std::endl << std::endl;
		exit(0);
	}

	std::cout << std::endl << std::endl
		<< " ---------------"
		<< std::endl;
	while (i != num) {
		j = i * num;
		std::cout << "| " << std::left << std::setw(2) << i << " X " << num << " = "
			<< std::setw(3) << j << " |"
			<< std::endl;
		i++;
	}
	j = i * num;
	std::cout << "| " << std::left << std::setw(2) << i << " X " << num << " = "
		<< std::setw(3) << j << " |"
		<< std::endl;
	std::cout << " ---------------"
		<< std::endl;

	return 0;
}
