/*
 * date.h
 *
 *  Created on: Apr 3, 2019
 *      Author: alotaibia
 */

#ifndef DATE_H_
#define DATE_H_


////////////////////date.h


#include <iostream>
using namespace std;
#include <string>



class date { // must match with match the name of the .h file


public:
	date();

	date(int y, int m, int d);
	date(const date &dateToCopy);
	date operator+(const date &rhs) const;
	date operator-(const date &rhs) const;
	bool operator==(const date &rhs) const;
	bool operator!=(const date &rhs) const;
	bool operator<(const date &rhs) const;
	bool operator>(const date &rhs) const;
	const date& operator=(const date &rhs);
	string to_string(void);

	//virtual ~date();


  // functions method
	void setYear(int y);
	int getYear(void) const;
	void setMonth(int m);
	int getMonth(void) const;
	void setDay(int d);
	int getDay(void) const;

// a function to convert to days
	int totaldays () const;



private:
  int year;
  int month;
  int day;
  void daystodate (int totaldays);

};


#endif /* DATE_H_ */
