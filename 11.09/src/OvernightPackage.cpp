#include "OvernightPackage.h"

 OvernightPackage::OvernightPackage( const string &sName,
   const string &sAddress, const string &sCity, const string &sState,
   int sPostalcode, const string &rName, const string &rAddress,
   const string &rCity, const string &rState, int rPostalcode,
   double w, double cost, double fee )
   : Package( sName, sAddress, sCity, sState, sPostalcode,
      rName, rAddress, rCity, rState, rPostalcode, w, cost )
{
   setOvernightFeePerOunce( fee );
}

void OvernightPackage::setOvernightFeePerOunce( double overnightFee )
{
   overnightFeePerOunce = ( overnightFee < 0.0 ) ? 0.0 : overnightFee;
}

double OvernightPackage::getOvernightFeePerOunce() const
{
   return overnightFeePerOunce;
}

double OvernightPackage::calculateCost() const
{
   return getWeight() * ( getCostPerOunce() + getOvernightFeePerOunce() );
}

