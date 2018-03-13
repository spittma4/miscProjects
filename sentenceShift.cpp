/*
Samuel Pittman
Program to "decode" a string of characters that is shifted 
Current state: Not returning accurate statements (shifting too much), the iterator in letterShift() can go out of bounds; TL;DR: iterator issues
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

const std::vector <char> alphabet = { 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N',
	'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};

char letterShift(int, char);
std::string sentenceShift(int, std::string);

int main() {

	//std::string test = "Guo: GzpertMsyr b5.0 At pm yjr esu yp mr. Daovr Htomfrt ypp.";

	//std::cout << sentenceShift(1, test) << std::endl;
	std::cout << letterShift(1, 'z') << std::endl;

	system("pause");
	return 0;
}

char letterShift(int shift, char letter) {
	for (std::vector<char>::const_iterator it = alphabet.begin(); it != alphabet.end(); ++it) {

		if (*it == letter && (it + shift != alphabet.end())) {
			return *it + (shift);
		}
	}

	return letter;
}

std::string sentenceShift(int shift, std::string input) {
	std::string output = "";

	int length = input.length();

	for (int i = 0; i < length; ++i) {
		output += letterShift(shift, input[i]);
	}

	return output;
}
