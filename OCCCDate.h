#pragma once
#include <string>

class OCCCDate {

private:

	int dayOfMonth;
	int monthOfYear;
	int year;
	bool dateFormat = true;

public:

	OCCCDate();
	OCCCDate(int day, int month, int year);
	int getDayofMonth();
	int getMonth();
	std::string getNameOfMonth(int id);
	int getYear();
	int getDifference(OCCCDate d1, OCCCDate d2);
	int getDifference(OCCCDate d);
	void setDateFormat(bool df);
	std::string toString();
};


