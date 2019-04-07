#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package
{
public:
   Package( const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double );

   void setSenderName( const string & );
   string getSenderName() const;
   void setSenderAddress( const string & );
   string getSenderAddress() const;
   void setSenderCity( const string & );
   string getSenderCity() const;
   void setSenderState( const string & );
   string getSenderState() const;
   void setSenderPostalcode( int );
   int getSenderPostalcode() const;
   void setRecipientName( const string & );
   string getRecipientName() const;
   void setRecipientAddress( const string & );
   string getRecipientAddress() const;
   void setRecipientCity( const string & );
   string getRecipientCity() const;
   void setRecipientState( const string & );
   string getRecipientState() const;
   void setRecipientPostalcode( int );
   int getRecipientPostalcode() const;
   void setWeight( double );
   double getWeight() const;
   void setCostPerOunce( double );
   double getCostPerOunce() const;

   double calculateCost() const;
private:

   string senderName;
   string senderAddress;
   string senderCity;
   string senderState;
   int senderPostalcode;
   string recipientName;
   string recipientAddress;
   string recipientCity;
   string recipientState;
   int recipientPostalcode;

   double weight;
   double costPerOunce;
};

#endif

