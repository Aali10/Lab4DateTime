/*
 * dateTime.h
 *
 *  Created on: Apr 10, 2019
 *      Author: alotaibia
 */

#ifndef DATETIME_H_
#define DATETIME_H_

#include "date.h"
#include "Time.h"

#include <string>

class dateTime { // must match with match the name of the .h file


public:
	dateTime();
	dateTime(date Date, Time time);
	dateTime(const dateTime &TimeToCopy); // copy constructor
	dateTime operator+(const dateTime &rhs) const;
	dateTime operator+(const date &rhs) const;
	dateTime operator+(const Time &rhs) const;
	dateTime operator-(const dateTime &rhs) const;
	dateTime operator-(const date &rhs) const;
	dateTime operator-(const Time &rhs) const;
	bool operator==(const dateTime &rhs) const;
	bool operator!=(const dateTime &rhs) const;
	bool operator<(const dateTime &rhs) const;
	bool operator>(const dateTime &rhs) const;
	const dateTime& operator=(const dateTime &rhs) ;
	string to_string(void);

  // functions method
	void sethour(int h);
	int gethour(void);
	void setminute(int m);
	int getminute(void);
	void setseconds(int s);
	int getseconds(void);




private:
  date my_date;
  Time my_time;



};

#endif /* DATETIME_H_ */
