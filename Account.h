/***********************************************************
// OOP244 Workshop 8: Virtual Functions
// File Account.h
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
#ifndef SICT_ACCOUNT_H
#define SICT_ACCOUNT_H

#include"iAccount.h"

namespace sict {
	class Account : public iAccount{
		double m_curBal;
	public:
		Account();
		Account(double bal);
		bool credit(double add);
		bool debit(double sub);
	protected:
		double balance() const;
	};
}


#endif 
