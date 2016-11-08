#include "randchar.h"

RandChar::RandChar() {
	seed = 0;
	upper = 0;
}

char RandChar::getRandChar() {
	if (upper == 0) {
		switch (seed + 1) {
		case 1:
			return 'a';
			break;
		case 2:
			return 'b';
			break;
		case 3:
			return 'c';
			break;
		case 4:
			return 'd';
			break;
		case 5:
			return 'e';
			break;
		case 6:
			return 'f';
			break;
		case 7:
			return 'g';
			break;
		case 8:
			return 'h';
			break;
		case 9:
			return 'i';
			break;
		case 10:
			return 'j';
			break;
		case 11:
			return 'k';
			break;
		case 12:
			return 'l';
			break;
		case 13:
			return 'm';
			break;
		case 14:
			return 'n';
			break;
		case 15:
			return 'o';
			break;
		case 16:
			return 'p';
			break;
		case 17:
			return 'q';
			break;
		case 18:
			return 'r';
			break;
		case 19:
			return 's';
			break;
		case 20:
			return 't';
			break;
		case 21:
			return 'u';
			break;
		case 22:
			return 'v';
			break;
		case 23:
			return 'w';
			break;
		case 24:
			return 'x';
			break;
		case 25:
			return 'y';
			break;
		case 26:
			return 'z';
			break;
		default:
			return '-';
		} //switch
	} //if
	else {
		switch (seed + 1) {
		case 1:
			return 'A';
			break;
		case 2:
			return 'B';
			break;
		case 3:
			return 'C';
			break;
		case 4:
			return 'D';
			break;
		case 5:
			return 'E';
			break;
		case 6:
			return 'F';
			break;
		case 7:
			return 'G';
			break;
		case 8:
			return 'H';
			break;
		case 9:
			return 'I';
			break;
		case 10:
			return 'J';
			break;
		case 11:
			return 'K';
			break;
		case 12:
			return 'L';
			break;
		case 13:
			return 'M';
			break;
		case 14:
			return 'N';
			break;
		case 15:
			return 'O';
			break;
		case 16:
			return 'P';
			break;
		case 17:
			return 'Q';
			break;
		case 18:
			return 'R';
			break;
		case 19:
			return 'S';
			break;
		case 20:
			return 'T';
			break;
		case 21:
			return 'U';
			break;
		case 22:
			return 'V';
			break;
		case 23:
			return 'W';
			break;
		case 24:
			return 'X';
			break;
		case 25:
			return 'Y';
			break;
		case 26:
			return 'Z';
			break;
		default:
			return '+';
		} //switch
	} //else
	return '0';
} //char

char RandChar::getRandDigit() {
	switch (seed) {
	case 0:
		return '0';
		break;
	case 1:
		return '1';
		break;
	case 2:
		return '2';
		break;
	case 3:
		return '3';
		break;
	case 4:
		return '4';
		break;
	case 5:
		return '5';
		break;
	case 6:
		return '6';
		break;
	case 7:
		return '7';
		break;
	case 8:
		return '8';
		break;
	case 9:
		return '9';
		break;
	}
}

void RandChar::setSeed(const int par) {
	seed = par;
}

void RandChar::setUpper(const int par) {
	upper = par;
}
