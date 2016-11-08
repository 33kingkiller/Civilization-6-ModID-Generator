#ifndef RANDCHAR_H
#define RANDCHAR_H
class RandChar {
public:
	RandChar();
	char getRandChar();
	char getRandDigit();
	void setSeed(const int seed);
	void setUpper(const int upper);
private:
	int seed;
	int upper;
};
#endif //RANDCHAR_H
