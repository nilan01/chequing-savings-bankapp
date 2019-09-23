/***********************************************************
// OOP244 Workshop 7: Virtual Functions
// File SavingsAccount.cpp
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
#include<iomanip>
#include"SavingsAccount.h"
using namespace std;
namespace sict {
	SavingsAccount::SavingsAccount(double bal, double intRate) : Account(bal){
		if (intRate >= 0) {
			this->m_intRate = intRate;
		}
		else {
			this->m_intRate = 0.0;
		}
	}
	void SavingsAccount::monthEnd() {
		credit(balance() * m_intRate);
	}
	void SavingsAccount::display(ostream& ostr) const{
		ostr << "Account Type : Savings" << endl << fixed << setprecision(2) << 
			"Balance : $" << balance() << std::endl << "Interest Rate(%) : " << m_intRate * 100 << endl;
	}
}