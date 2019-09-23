/***********************************************************
// OOP244 Workshop 8: Virtual Functions
// File ChequingAccount.h
// Version 1.0
// Date July. 22, 2019
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

#ifndef SICT_CHEQUINGACCOUNT_H
#define SICT_CHEQUINGACCOUNT_H

#include "Account.h"

namespace sict {
	class ChequingAccount : public Account{
		double m_transFee;
		double m_monthEndFee;
	public:
		 ChequingAccount(double initial, double fee, double monthEndFee);
		 bool credit(double bal);
		 bool debit(double bal);
		 void monthEnd();
		 void display(std::ostream& ostr) const;
	};

}

#endif // !SICT_CHEQUINGACCOUNT_H
