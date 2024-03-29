//============================================================================
// Name        : LAB4.cpp
// Author      : Aali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
#include "Time.h"
#include "date.h"
#include "dateTime.h"

int main() {
	// Test Date class.
	cout << "***Test Date Class***" << endl;
	date d1(2016,1,31);
	date d2(0,0,31);
	date d3(2017,9,1);
	date d4(0,5,12);
	date d5(0,5,11);
	date d6(2000,3,1);
	date d7(0,0,1);
	date d8(1000,1,30);
	date d9(2019,3,31);
	date d10(0,2,0);
	cout << "d1: " << d1.to_string() << endl;
	cout << "d2: " << d2.to_string() << endl;
	cout << "d3: " << d3.to_string() << endl;
	cout << "d4: " << d4.to_string() << endl;
	cout << "d5: " << d5.to_string() << endl;
	cout << "d6: " << d6.to_string() << endl;
	cout << "d7: " << d7.to_string() << endl;
	cout << "d8: " << d8.to_string() << endl;
	cout << "d9: " << d9.to_string() << endl;
	cout << "d10: " << d10.to_string() << endl;

	date dTest = d1 + d2;
	cout << "d1 + d2: " << dTest.to_string() << endl;
	dTest = d3 - d1;
	cout << "d3 - d1: " << dTest.to_string() << endl;
	dTest = d3 + d4;
	cout << "d3 + d4: " << dTest.to_string() << endl;
	dTest = d6 - d7;
	cout << "d6 - d7: " << dTest.to_string() << endl;
	dTest = d8 + d8;
	cout << "d8 + d8: " << dTest.to_string() << endl;
	dTest = d9 + d10;
	cout << "d9 + d10: " << dTest.to_string() << endl;

	cout << "d1 > d2: ";
	if(d1 > d2){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "d1 < d2: ";
	if(d1 < d2){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "d4 == d5: ";
	if(d4 == d5){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "d4 != d5: ";
	if(d4 != d5){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}

	// Test Time class.
	cout << "\n***Test Time Class***" << endl;
	Time t1(10,15,30);
	Time t2(0,0,45);
	Time t3(14,45,8);
	Time t4(0,46,9);
	Time t5(0,46,8);
	cout << "t1: " << t1.to_string() << endl;
	cout << "t2: " << t2.to_string() << endl;
	cout << "t3: " << t3.to_string() << endl;
	cout << "t4: " << t4.to_string() << endl;
	cout << "t5: " << t5.to_string() << endl;

	Time t6 = t1 + t2;
	cout << "t1 + t2: " << t6.to_string() << endl;
	t6 = t3 - t1;
	cout << "t3 - t1: " << t6.to_string() << endl;
	t6 = t3 + t1;
	cout << "t3 + t1: " << t6.to_string() << endl;
	t6 = t3 + t4;
	cout << "t3 + t4: " << t6.to_string() << endl;
	cout << "t1 > t2: ";
	if(t1 > t2){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "t1 < t2: ";
	if(t1 < t2){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "t4 == t5: ";
	if(t4 == t5){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "t4 != t5: ";
	if(t4 != t5){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}

	// Test DateTime Class
	cout << "\n***Test DateTime Class***" << endl;
	dateTime dt1(d1,t1);
	dateTime dt2(d2,t2);
	dateTime dt3(d3,t3);
	dateTime dt4(d4,t4);
	dateTime dt5(d5,t4);
	dateTime dt6(d4,t5);
	dateTime dt7(d8,t3);
	cout << "dt1: " << dt1.to_string() << endl;
	cout << "dt2: " << dt2.to_string() << endl;
	cout << "dt3: " << dt3.to_string() << endl;
	cout << "dt4: " << dt4.to_string() << endl;
	cout << "dt5: " << dt5.to_string() << endl;
	cout << "dt6: " << dt6.to_string() << endl;
	cout << "dt7: " << dt7.to_string() << endl;

	dateTime dtTest = dt1 + dt2;
	cout << "dt1 + dt2: " << dtTest.to_string() << endl;
	dtTest = dt3 - dt1;
	cout << "dt3 - dt1: " << dtTest.to_string() << endl;
	dtTest = dt3 + dt4;
	cout << "dt3 + dt4: " << dtTest.to_string() << endl;
	dtTest = dt3 + d4;
	cout << "dt3 + d4: " << dtTest.to_string() << endl;
	dtTest = dt3 + t1;
	cout << "dt3 + t1: " << dtTest.to_string() << endl;
	dtTest = dt3 + t4;
	cout << "dt3 + t4: " << dtTest.to_string() << endl;
	dtTest = dt7 + dt7;
	cout << "dt7 + dt7: " << dtTest.to_string() << endl;
	cout << "dt1 > dt2: ";
	if(dt1 > dt2){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "dt1 < dt2: ";
	if(dt1 < dt2){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "dt4 > dt5: ";
	if(dt4 > dt5){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "dt4 < dt5: ";
	if(dt4 < dt4){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "dt4 > dt6: ";
	if(dt4 > dt6){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "dt4 < dt6: ";
	if(dt4 < dt6){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "dt5 > dt6: ";
	if(dt5 > dt6){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "dt5 < dt6: ";
	if(dt5 < dt6){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "dt4 == dt5: ";
	if(dt4 == dt5){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	cout << "dt4 != dt5: ";
	if(dt4 != dt5){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}

	return 0;
}



//int main() {
//	// Test Date class.
//	cout << "***Test Date Class***" << endl;
//	date d1(2016,1,31);
//	date d2(0,0,31);
//	date d3(2017,9,1);
//	date d4(0,5,12);
//	date d5(0,5,11);
//	date d6(2000,3,1);
//	date d7(0,0,1);
//	date d8(1000,1,30);
//	cout << "d1: " << d1.to_string() << endl;
//	cout << "d2: " << d2.to_string() << endl;
//	cout << "d3: " << d3.to_string() << endl;
//	cout << "d4: " << d4.to_string() << endl;
//	cout << "d5: " << d5.to_string() << endl;
//	cout << "d6: " << d6.to_string() << endl;
//	cout << "d7: " << d7.to_string() << endl;
//	cout << "d8: " << d8.to_string() << endl;
//
//	date dTest = d1 + d2;
//	cout << "d1 + d2: " << dTest.to_string() << endl;
//	dTest = d3 - d1;
//	cout << "d3 - d1: " << dTest.to_string() << endl;
//	dTest = d3 + d4;
//	cout << "d3 + d4: " << dTest.to_string() << endl;
//	dTest = d6 - d7;
//	cout << "d6 - d7: " << dTest.to_string() << endl;
//	dTest = d8 + d8;
//	cout << "d8 + d8: " << dTest.to_string() << endl;
//	cout << "d1 > d2: ";
//	if(d1 > d2){
//		cout << "True" << endl;
//	}
//	else{
//		cout << "False" << endl;
//	}
//	cout << "d1 < d2: ";
//	if(d1 < d2){
//		cout << "True" << endl;
//	}
//	else{
//		cout << "False" << endl;
//	}
//	cout << "d4 == d5: ";
//	if(d4 == d5){
//		cout << "True" << endl;
//	}
//	else{
//		cout << "False" << endl;
//	}
//	cout << "d4 != d5: ";
//	if(d4 != d5){
//		cout << "True" << endl;
//	}
//	else{
//		cout << "False" << endl;
//	}
//
//	// Test Time class.
////	cout << "\n***Test Time Class***" << endl;
////	Time t1(10,15,30);
////	Time t2(0,0,45);
////	Time t3(14,45,8);
////	Time t4(0,46,9);
////	Time t5(0,46,8);
////	cout << "t1: " << t1.to_string() << endl;
////	cout << "t2: " << t2.to_string() << endl;
////	cout << "t3: " << t3.to_string() << endl;
////	cout << "t4: " << t4.to_string() << endl;
////	cout << "t5: " << t5.to_string() << endl;
////
////	Time t6 = t1 + t2;
////	cout << "t1 + t2: " << t6.to_string() << endl;
////	t6 = t3 - t1;
////	cout << "t3 - t1: " << t6.to_string() << endl;
////	t6 = t3 + t1;
////	cout << "t3 + t1: " << t6.to_string() << endl;
////	t6 = t3 + t4;
////	cout << "t3 + t4: " << t6.to_string() << endl;
////	cout << "t1 > t2: ";
////	if(t1 > t2){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "t1 < t2: ";
////	if(t1 < t2){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "t4 == t5: ";
////	if(t4 == t5){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "t4 != t5: ";
////	if(t4 != t5){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
//
//	// Test DateTime Class
////	cout << "\n***Test DateTime Class***" << endl;
////	DateTime dt1(d1,t1);
////	DateTime dt2(d2,t2);
////	DateTime dt3(d3,t3);
////	DateTime dt4(d4,t4);
////	DateTime dt5(d5,t4);
////	DateTime dt6(d4,t5);
////	DateTime dt7(d8,t3);
////	cout << "dt1: " << dt1.to_string() << endl;
////	cout << "dt2: " << dt2.to_string() << endl;
////	cout << "dt3: " << dt3.to_string() << endl;
////	cout << "dt4: " << dt4.to_string() << endl;
////	cout << "dt5: " << dt5.to_string() << endl;
////	cout << "dt6: " << dt6.to_string() << endl;
////	cout << "dt7: " << dt7.to_string() << endl;
////
////	DateTime dtTest = dt1 + dt2;
////	cout << "dt1 + dt2: " << dtTest.to_string() << endl;
////	dtTest = dt3 - dt1;
////	cout << "dt3 - dt1: " << dtTest.to_string() << endl;
////	dtTest = dt3 + dt4;
////	cout << "dt3 + dt4: " << dtTest.to_string() << endl;
////	dtTest = dt3 + d4;
////	cout << "dt3 + d4: " << dtTest.to_string() << endl;
////	dtTest = dt3 + t1;
////	cout << "dt3 + t1: " << dtTest.to_string() << endl;
////	dtTest = dt3 + t4;
////	cout << "dt3 + t4: " << dtTest.to_string() << endl;
////	dtTest = dt7 + dt7;
////	cout << "dt7 + dt7: " << dtTest.to_string() << endl;
////	cout << "dt1 > dt2: ";
////	if(dt1 > dt2){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "dt1 < dt2: ";
////	if(dt1 < dt2){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "dt4 > dt5: ";
////	if(dt4 > dt5){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "dt4 < dt5: ";
////	if(dt1 < dt2){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "dt4 > dt6: ";
////	if(dt4 > dt6){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "dt4 < dt6: ";
////	if(dt1 < dt2){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "dt5 > dt6: ";
////	if(dt5 > dt6){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "dt5 < dt6: ";
////	if(dt5 < dt6){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "dt4 == dt5: ";
////	if(dt4 == dt5){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////	cout << "dt4 != dt5: ";
////	if(dt4 != dt5){
////		cout << "True" << endl;
////	}
////	else{
////		cout << "False" << endl;
////	}
////
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//



