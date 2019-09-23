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
#include<iostream>
#include<iomanip>
#include"ChequingAccount.h"
using namespace std;
namespace sict {
	ChequingAccount::ChequingAccount(double initial, double fee, double monthEndFee) : Account(initial) {
		if (fee > 0) {
			this->m_transFee = fee;
		}
		else {
			this->m_transFee = 0.0;
		}
		if (monthEndFee > 0) {
			this->m_monthEndFee = monthEndFee;
		}
		else {
			this->m_monthEndFee = 0.0;
		}
	}
	bool ChequingAccount::credit(double bal) {
		bool valid = true;
		if (Account::credit(bal) == valid) {
			valid = Account::debit(m_transFee);
		}
		else {
			valid = false;
		}
		return valid;
	}
	bool ChequingAccount::debit(double bal) {
		bool valid = true;
		if (Account::debit(bal) == valid) {
			valid = Account::debit(m_transFee);
		}
		else {
			valid = false;
		}
		return valid;
	}
	void ChequingAccount::monthEnd() {
		Account::debit(m_monthEndFee);
	}
	void ChequingAccount::display(std::ostream& ostr) const{
		ostr << "Account Type : Chequing" << std::endl
			<< std::fixed << std::setprecision(2) <<
			"Balance : $" << balance() << std::endl <<
			"Per Transaction Fee: " << m_transFee <<
			std::endl << "Monthly Fee: " << m_monthEndFee << std::endl;
	}
}
