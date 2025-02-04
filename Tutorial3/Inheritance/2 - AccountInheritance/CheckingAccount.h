// CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h" 

class CheckingAccount : public Account
{
public:
   CheckingAccount( double, double );

   void credit( double ); // redefined credit function
   bool debit( double ); // redefined debit function
private:
   double transactionFee; // fee charged per transaction

   // utility function to charge fee
   void chargeFee();
}; 

#endif
