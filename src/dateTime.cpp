/*
 * dateTime.cpp
 *
 *  Created on: Apr 10, 2019
 *      Author: alotaibia
 */
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

#include <iostream>
using namespace std;
#include "date.h"
#include "Time.h"
#include "dateTime.h"



dateTime::dateTime(){
	// in order to create constructor
	//default constructor
	//date my_date=0;
	//Time my_time=0;

}

dateTime::dateTime(date Date, Time time) {
	date my_date;
	Time my_time;

}

dateTime::dateTime(const dateTime &dateTimeToCopy){
	my_date= dateTimeToCopy.my_date;
	my_time= dateTimeToCopy.my_time;
}

dateTime dateTime::operator+(const dateTime &rhs) const{
	dateTime datetime;
	// time parts of this and rhs
	datetime.my_time= this->my_time+rhs.my_time;
	//the date parts of this and rhs and put them in datetime
	datetime.my_date= this->my_date+rhs.my_date;
	return datetime;

}
	dateTime dateTime::operator+(const date &rhs) const{
		dateTime datetime;
		datetime.my_date= this->my_date+rhs;
		return datetime;
	}
	dateTime dateTime::operator+(const Time &rhs) const{
		dateTime datetime;
		datetime.my_time= this->my_time+rhs;
	return datetime;
	}
	dateTime dateTime::operator-(const dateTime &rhs) const{
		dateTime datetime;
		datetime.my_time= this->my_time-rhs.my_time;
		datetime.my_date= this->my_date-rhs.my_date;
		return datetime;
	}
	dateTime dateTime::operator-(const date &rhs) const{
		dateTime datetime;
		datetime.my_date= this->my_date-rhs;
		return datetime;
	}
	dateTime dateTime::operator-(const Time &rhs) const{
		dateTime datetime;
		datetime.my_time= this->my_time-rhs;
		return datetime;
	}
	bool dateTime::operator==(const dateTime &rhs) const{
		return (this->my_date == rhs.my_date) && (this->my_time == rhs.my_time);

	}
	bool dateTime::operator!=(const dateTime &rhs) const{
		return (this->my_date == rhs.my_date) || (this->my_time == rhs.my_time);

	}
	bool dateTime::operator<(const dateTime &rhs) const{

		if(this->my_date < rhs.my_date){
			return true;
		}
		if(this->my_date == rhs.my_date){
			if(this->my_time < rhs.my_time){
				return true;
			}
		}
		return false;

	}
	bool dateTime::operator>(const dateTime &rhs) const{
		if(this->my_date > rhs.my_date){
					return true;
				}
				if(this->my_date == rhs.my_date){
					if(this->my_time > rhs.my_time){
						return true;
					}
				}
				return false;
	}
	const dateTime& dateTime::operator=(const dateTime &rhs){
				this->my_date = rhs.my_date;
				this->my_time = rhs.my_time;
				return *this;
	}
	string dateTime::to_string(void){
	string ret= my_date.to_string()+" "+my_time.to_string();
	return ret;
	}


