#include <iostream>
#include <string>

int is_permutation(std::string str1, std::string str2) {
	if(str1.length() != str2.length()) return 0;

	int check_char[128] = {0};

	for(int i = 0; i < str1.length(); i++) {
		check_char[str1[i]]++;
	}

	for(int i = 0; i < str2.length(); i++) {
		check_char[str2[i]]--;

		if(check_char[str2[i]] < 0)
			return 0;
	}

	return 1;
}

int main() {
	std::string input1, input2;

	std::cout << "Check if a string is a permutation of the other\n1: ";
	std::cin >> input1;

	std::cout << "2: ";
	std::cin >> input2;

	if(is_permutation(input1, input2))
		std::cout << "True";
	else
		std::cout << "False";

	return 0;
}