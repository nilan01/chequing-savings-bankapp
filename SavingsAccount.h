/***********************************************************
// OOP244 Workshop 8: Virtual Functions
// File SavingsAccount.h
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
#ifndef SICT_SAVINGSACCOUNT_H
#define SICT_SAVINGSACCOUNT_H

#include "Account.h"

namespace sict {
	class SavingsAccount : public Account {
		double m_intRate;
	public:
		SavingsAccount(double bal, double intRate);
		void monthEnd();
		void display(std::ostream&) const;
	};
}

#endif