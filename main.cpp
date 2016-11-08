#include <ctime>
#include <random>
#include <iostream>
#include <string>
#include <fstream>
#include "randchar.h"

RandChar randChar;
char modID[36];
int loopcount = 0;

int main() {
	srand(time(0));
	for (; loopcount < 8; loopcount++) {
		if (rand() % 2 == 0) {
			randChar.setSeed(rand() % 10);
			modID[loopcount] = randChar.getRandDigit();
		}
		else {
			randChar.setSeed(rand() % 10);
			randChar.setUpper(rand() % 2);
			modID[loopcount] = randChar.getRandChar();
		}
	}
	modID[loopcount++] = '-';
	for (; loopcount < 13; loopcount++) {
		if (rand() % 2 == 0) {
			randChar.setSeed(rand() % 10);
			modID[loopcount] = randChar.getRandDigit();
		}
		else {
			randChar.setSeed(rand() % 10);
			randChar.setUpper(rand() % 2);
			modID[loopcount] = randChar.getRandChar();
		}
	}
	modID[loopcount++] = '-';
	for (; loopcount < 18; loopcount++) {
		if (rand() % 2 == 0) {
			randChar.setSeed(rand() % 10);
			modID[loopcount] = randChar.getRandDigit();
		}
		else {
			randChar.setSeed(rand() % 10);
			randChar.setUpper(rand() % 2);
			modID[loopcount] = randChar.getRandChar();
		}
	}
	modID[loopcount++] = '-';
	for (; loopcount < 23; loopcount++) {
		if (rand() % 2 == 0) {
			randChar.setSeed(rand() % 10);
			modID[loopcount] = randChar.getRandDigit();
		}
		else {
			randChar.setSeed(rand() % 10);
			randChar.setUpper(rand() % 2);
			modID[loopcount] = randChar.getRandChar();
		}
	}
	modID[loopcount++] = '-';
	for (; loopcount < 36; loopcount++) {
		if (rand() % 2 == 0) {
			randChar.setSeed(rand() % 10);
			modID[loopcount] = randChar.getRandDigit();
		}
		else {
			randChar.setSeed(rand() % 10);
			randChar.setUpper(rand() % 2);
			modID[loopcount] = randChar.getRandChar();
		}
	}
	for (loopcount = 0; loopcount < 36; loopcount++) std::cout << modID[loopcount];
	std::ofstream output;
	output.open("modid.txt");
	for (loopcount = 0; loopcount < 36; loopcount++) output << modID[loopcount];
	output.close();
	std::cout << "\nThis ID has been outputted to modid.txt";
	std::cout << "\n\n A mod ID generator for Civilization 6.\nCreated by NerdByFate.\n\n Press any key to continue...\n";
	std::getchar();
	return 0;
}
