#include "readint.h"
#include <stdexcept>
#include<ios>
#include<limits>
#include<iostream>

using namespace std;

int read_int(const string &prompt, int low, int high)
{
  cin.exceptions(ios_base::failbit);
  int num = 0;

 
  while(true)
    {
      if( low > high || (low == 0 && high == 0) )
	{
	  throw invalid_argument( "low and high were not set up well" );	  
	}
     
      try
	{
	  cout<<prompt;
	  cin>>num;

	  if( num < low || num > high )
	    throw range_error("Out of the range");

	  return num;
	}
      catch(ios_base::failure& ex)
	{
	  cout<<"Bad numeric string--try again\n";
	  cin.clear();
	  cin.ignore(numeric_limits<int>::max(), '\n');
	}
      
    }
}
