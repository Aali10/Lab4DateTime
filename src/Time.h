/*
 * Time.h
 *
 *  Created on: Apr 7, 2019
 *      Author: alotaibia
 */

#ifndef TIME_H_
#define TIME_H_
#include <string>

class Time { // must match with match the name of the .h file


public:
	Time();
	Time(int h, int m, int s);
	Time(const Time &TimeToCopy); // copy constructor
	Time operator+(const Time &rhs) const;
	Time operator-(const Time &rhs) const;
	bool operator==(const Time &rhs) const;
	bool operator!=(const Time &rhs) const;
	bool operator<(const Time &rhs) const;
	bool operator>(const Time &rhs) const;
	const Time& operator=(const Time &rhs) ;
	string to_string(void);

  // functions method
	void sethour(int h);
	int gethour(void);
	void setminute(int m);
	int getminute(void);
	void setseconds(int s);
	int getseconds(void);
// adding new method for total secondm
	int totalsecond () const;




private:
  int hour;
  int minute;
  int seconds;
  // I jsut think to keep it in private will not make different but not more than prefer to be in private
	void secondtotime (int totalseconds); // fine name as long it not a data member, Because only used on operator
};




#endif /* TIME_H_ */
