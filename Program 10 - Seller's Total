/***************************************************************
CSCI 240         Program 10     Fall 2017
Programmer: Afifah Arif
Section: CSCI 240-0002
Date Due: 12/8/17
Purpose: This program implements and uses the methods for a class called Seller that represents information about a salesperson.
***************************************************************/

#include <iomanip> //libraries
#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

class Seller
{
	public:
		Seller();
		Seller( const char [], const char [], const char [], double );

		void print();

		void setFirstName( const char [] );
		void setLastName( const char [] );
		void setID( const char [] );
		void setSalesTotal( double );

		double getSalesTotal();

	private:
		char firstName[20];
		char lastName[30];
		char ID[7];
		double salesTotal;	
};

int main()
{
	Seller sellerArray[30];
	
	methods:
		char* Seller::getID()
		{
			return sellerID;
		}	
}

Seller::Seller()
{
	setFirstName("None"); 
	setLastName("None");
	setID("ZZZ000");
	setSalesTotal(0);
}

Seller::Seller( const char fName[], const char lName[], const char ID[], double sTotal)
{
	setFirstName(fName);
	setLastName(lName);
	setID(ID);
	setSalesTotal(sTotal);
}

void print()
{
	cout<<fixed<<setprecision(2);
	cout<<lastName<<","<<firstName<<"     "<<ID<<"     $"<<salesTotal<<endl;
}

void setFirstName( const char newFirstName[] )
{
	if( strlen( newFirstName ) > 0)
	{
		strcpy ( firstName, newFirstName );
	}
	else
	{
		strcpy( firstName, "None" );
	}
}

void setLastName( const char newLastName[] )
{
	if( strlen( newLastName ) > 0)
	{
		strcpy ( lastName, newLastName );
	}
	else
	{
		strcpy( lastName, "None" );
	}
}

void Seller::setID( const char newID[] )
{
	int length=strlen( newID );
	
	if( length > 0 && length<7 )
	{
		strcpy( ID, newID );
	}
	else
	{
		strcpy( ID, "ZZZ000" );
	}
}	

void Seller::setSalesTotal()
{
	if(newSalesTotal>=0)
		salesTotal=newSalesTotal;
	else
		salesTotal = 0;
}

double Seller::getSalesTotal()
{
	return salesTotal;
}
