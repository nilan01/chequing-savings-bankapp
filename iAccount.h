/***********************************************************
// OOP244 Workshop 7: Virtual Functions
// File iAccount.h
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
#ifndef SICT_IACCOUNT_H
#define SICT_IACCOUNT_H

#include <iostream>

namespace sict {
	class iAccount {
	public:
		virtual bool credit(double) = 0;
		virtual bool debit(double) = 0;
		virtual void monthEnd() = 0;
		virtual void display(std::ostream&) const = 0;
		virtual ~iAccount() = default;
	};

	iAccount* CreateAccount(const char*, double);
}

#endif