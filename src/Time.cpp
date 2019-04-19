/*
 * Time.cpp
 *
 *  Created on: Apr 7, 2019
 *      Author: alotaibia
 */


#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
#include "Time.h"

Time::Time(){
	// in order to create constructor
	//default constructor
	hour=0;
	minute=0;
	seconds=0;
}

Time::Time(int h, int m, int s) {

	// in order to create constructor
	//para. constructor
	hour=h;
	minute=m;
	seconds=s;
}

Time::Time(const Time &TimeToCopy){
	hour= TimeToCopy.hour;
	minute= TimeToCopy.minute;
	seconds= TimeToCopy.seconds;
}

Time Time::operator+(const Time &rhs) const{
int sum= this->totalsecond()+rhs.totalsecond();
if (sum>= 3600*24){
	sum= sum-3600*24;

}
Time result;
result.secondtotime(sum);
return result;
}

Time Time::operator-(const Time &rhs) const{
int dif= this->totalsecond()-rhs.totalsecond();
if (dif< 0 ){
	dif= dif+3600*24;

}
Time result;
result.secondtotime(dif);
return result;
}

	bool Time::operator==(const Time &rhs) const{
		return this->totalsecond()==rhs.totalsecond();

	}

	bool Time::operator!=(const Time &rhs) const{
		return this->totalsecond()!=rhs.totalsecond();
	}

	bool Time::operator<(const Time &rhs) const{
		return this->totalsecond()<rhs.totalsecond();
	}

	bool Time::operator>(const Time &rhs) const{
		return this->totalsecond()>rhs.totalsecond();
	}

	const Time& Time::operator=(const Time &rhs) {

		this->hour = rhs.hour;
		this->minute = rhs.minute;
		this->seconds = rhs.seconds;
		return *this; // to return ptr
	}

	string Time::to_string(void){ // time class


	ostringstream ho;
	ostringstream min;
	ostringstream sec;

	ho << hour;
	min << minute;
	sec << seconds;

	return ho.str()+":"+min.str()+":"+sec.str();
	}

int Time::gethour(void) {
		return hour;
	}

	void Time::sethour(int h) {
		//this->hour = hour;
		if (h <0 || h>23 ){
			cout << "error!! "<< endl;
		}
			else {
			hour= h;
			}

	}
	int Time::getminute() {
		return minute;
	}


	void Time::setminute(int m) {
		// set minute
		if (m <0 || m >59 ){
			cout << "error!! "<< endl;
		}
		else {
			minute= m;
		}

	}

	int Time::getseconds() {
		return seconds;
	}

	void Time::setseconds(int s) {
		//this->seconds = seconds;
		if (s <0 || s >59 ){
			cout << "error!! "<< endl;
		}
		else {
			seconds= s;
		}

	}


	int Time::totalsecond () const{   // method of class time -- taken the semicolin

		return seconds+60*minute+3600*hour; // convert every thing into seconds
	}
	void Time::secondtotime (int totalseconds){
		hour = totalseconds/3600;
		totalseconds= totalseconds-hour*3600;
		minute = totalseconds/60;
		seconds= totalseconds-minute*60;


	}

