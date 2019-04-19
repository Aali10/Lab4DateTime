///*
// * date.cpp
// *
// *  Created on: Apr 3, 2019
// *      Author: alotaibia
//date.cpp
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include <iostream>
using namespace std;
#include "date.h"

date::date(){
	// in order to create constructor
	//default constructor
	year=0;
	month=0;
	day=0;
}

date::date(int y, int m, int d) {

	// in order to create constructor
	//para. constructor
	year=y;
	month=m;
	day=d;
}

date::date(const date &dateToCopy){
	year= dateToCopy.year;
	month= dateToCopy.month;
	day= dateToCopy.day;
}

date date::operator+(const date &rhs) const{
	int totaldays= this->totaldays()+rhs.totaldays();
	date result;
	result.daystodate(totaldays);

	return result;
}

	date date::operator-(const date &rhs) const{
	int totaldays= this->totaldays()-rhs.totaldays();
	date result;
	result.daystodate(totaldays);

	return result;
	}

	bool date::operator==(const date &rhs) const{
		return this->totaldays()==rhs.totaldays();
	}

	bool date::operator!=(const date &rhs) const{
		return this->totaldays()!=rhs.totaldays();
	}

	bool date::operator<(const date &rhs) const{
		return this->totaldays()<rhs.totaldays();
	}

	bool date::operator>(const date &rhs) const{
		return this->totaldays()>rhs.totaldays();

	}

	const date& date::operator=(const date &rhs){

		this->year = rhs.year;
		this->month = rhs.month;
		this->day = rhs.day;
		return *this; // to return ptr where I knew by seeing the errors
}

	string date::to_string(void){
			ostringstream yr;
			ostringstream mon;
			ostringstream da;

			yr << year;
			mon << month;
			da << day;

			return yr.str()+"/"+mon.str()+"/"+da.str();
	}


int date::getDay(void) const {
		return day;
	}

	void date::setDay(int d) {
		//this->day = day;

		switch (month){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			if (day <=31){
				day= d;
			}
			else{
				cout<< "not applicable " <<endl;
			}
			break;
			case 4:
			case 6:
			case 9:
			case 11:

			if (day <=30){
				day= d;
			}
			else{
				cout<<"not applicable "<<endl;
			}
			break;
			default:
			if (day <=28){
				day= d;
			}
			else{
				cout<<"not applicable "<<endl;
			}
		}
	}




	int date::getMonth() const {
		return month;
	}

	void date::setMonth(int month) {
		// set month
		if (month < 1 || month > 12) {
		cout<<"not a number for a month";
		//return 0;
		}

	}

	int date::getYear() const {
		return year;
	}

	void date::setYear(int year) {
		this->year = year;
	}



	int date::totaldays() const{
		int momnth_arr[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int d= day;
		d=d+year*365;

		for (int i=0;i<month-2;i++){
			d=d+momnth_arr[i];
		}
		return d;
	}

// using for loop to convert to years, month and stop if its negative and back to
	// add the remaining as the days which left over.
	// the index to that the digits of the months as the number of days they have.
	void date::daystodate (int totaldays){
		int momnth_arr[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		year= totaldays/365;// get the number of the year
		totaldays-= year*365; // update the rest to get the number of the month
		for (int i=0;i<12;i++){ // check if less than 12 and stop the month when negative
			totaldays-=momnth_arr[i];
			if(totaldays<0){
				month = i+1; // if the left days when set Februray 0000/02/03 will be 3 days
				totaldays+=momnth_arr[i]; // then add -25+28 will give the number of days.
				break;
			}
			day = totaldays;

		}
	}



