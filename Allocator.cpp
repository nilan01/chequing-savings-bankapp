/***********************************************************
// OOP244 Workshop 8: Virtual Functions
// File Allocator.cpp
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
#include "SavingsAccount.h"
#include "ChequingAccount.h"
namespace sict{
	const double interestRate = 0.05;
	const double transaction = 0.50;
	const double monthly = 2.00;

	iAccount* CreateAccount(const char* accType, double bal){
		iAccount* ret = nullptr;
		if (accType[0] == 'S') {
			ret = new SavingsAccount(bal, interestRate);
		}
		else if(accType[0] == 'C') {
			ret = new ChequingAccount(bal, transaction, monthly);
		}
		else {
			ret = nullptr;
		}
			return ret;
	}
}