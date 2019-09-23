/***********************************************************
// OOP244 Workshop 7: Virtual Functions
// File Account.cpp
// Version 1.0
// Date July. 17, 2019
// Author Nilan Patel
// Student Number: <038 908 117>
// Section SEE
// Description
//
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
//
///////////////////////////////////////////////////////////
***********************************************************/
#include<iostream>
#include"Account.h"
using namespace std;
namespace sict {
	Account::Account() {
		this->m_curBal = 0.0;
	}
	Account::Account(double bal) {
		if (bal <= 0) {
			this->m_curBal = 0.0;
		}
		else {
			this->m_curBal = bal;
		}
	}
	bool Account::credit(double add) {
		bool valid;
		if (add > 0) {
			this->m_curBal += add;
			valid = true;
		}
		else {
			valid = false;
		}
		return valid;
	}
	bool Account::debit(double sub) {
		bool valid;
		if (sub > 0) {
			this->m_curBal -= sub;
			valid = true;
		}
		else {
			valid = false;
		}
		return valid;
	}
	double Account::balance() const {
		return this->m_curBal;
	}
}