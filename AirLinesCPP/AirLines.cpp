#include "pch.h"
#include  <iostream>
#include "AirLines.h"
#include <string>

using namespace std;

namespace AirLinesApp
{
	PassengerInfo::PassengerInfo(const std::string& firstName,
		const std::string& lastName, int flightNumber, int passportNumber) :mFirstName(firstName), mLastName(lastName),
		mPassportNumber(passportNumber), mFlightNumber(flightNumber) {}

	void PassengerInfo::setFirstName(const std::string& firstName)
	{
		mFirstName = firstName;
	}
	const string& PassengerInfo::getFirstName() const
	{
		return mFirstName;
	}
	void PassengerInfo::setLastName(const std::string& lastName)
	{
		mLastName = lastName;
	}
	const string& PassengerInfo::getLastName() const
	{
		return mLastName;
	}
	void PassengerInfo::setEmailAddress(const std::string& EmailAddress)
	{
		mEmailAddress = EmailAddress;
	}
	const string& PassengerInfo::getEmailAddress() const
	{
		return mEmailAddress;
	}
	void PassengerInfo::setAddress(const std::string& Address)
	{
		mAddress = Address;
	}
	const string& PassengerInfo::getAddress() const
	{
		return mAddress;
	}

	void PassengerInfo::setPassportNumber(int passportNumber)
	{
		mPassportNumber = passportNumber;

	}

	int PassengerInfo::getPassportNumber() const
	{

		return mPassportNumber;
	}

	void PassengerInfo::setFlightNumber(int flightNumber)
	{
	
		mFlightNumber = flightNumber;

	}

	int PassengerInfo::getFlightNumber() const
	{
		return mFlightNumber;
	
	}
	void PassengerInfo::Display() const
	{
		cout << "================================FESEHA AIRLINE RESRVATION SYSTEM====================================" << endl;
		cout << "===================================================================================================== " << endl;
		cout << "\t\t\t\t  Name: " << getFirstName() << ", " << getLastName() << ", " << endl;
		cout << "=====================================================================================================" << endl;
		cout << "\t\t\t\t  FlightNumber:" << getFlightNumber() << endl;
		cout << "=====================================================================================================" << endl;
		cout << "\t\t\t\t  PassportNumber: " << getPassportNumber() << endl;
		cout << "=====================================================================================================" << endl;
		cout << "Have A NICE FLIGHT!!" << endl;
		cout << "======================================================================================================" << endl;
	};


	Flight::Flight( const std::string& DepartureCity, const std::string& DestinationCity,
		const std::string& DepartureDate, const std::string& ArrivalDate, int FlightNumber)
		: mDepartureCity(DepartureCity), mDestinationCity(DestinationCity), mFlighNumber(FlightNumber),
		mDepartureDate(DepartureDate), mArrivalDate(ArrivalDate)
	{

	}
	

	void Flight::setDepartureDate(const std::string& DepartureDate)
	{
		DepartureDate;
	}

	const std::string& Flight::getDepartureDate() const
	{
		 return mDepartureDate;
	}

	void Flight::setArrivalDate(const std::string& ArrivalDate)
	{
		mArrivalDate;
	}	

	const std::string& Flight::getArrivalDate() const
	{
		return mArrivalDate;
	}

	void Flight::setDestinationCity(const string& DestinationCity)
	{
		mDestinationCity = DestinationCity;
	}

	const std::string& Flight::getDestinationCity() const
	{
		return mDestinationCity;
	}

	void Flight::setDepartureCity(const string& DepartureCity)
	{
		mDepartureCity = DepartureCity;

	}

	const std::string& Flight::getDepartureCity() const
	{

		return mDepartureCity;
	}
	
	void Flight::setFlightNumber(int flightNumber)
	{

		mFlighNumber= flightNumber;

	}

	int Flight::getFlightNumber() const
	{
		return mFlighNumber;

	}

	

	
	void Flight::DisplayFlightInfo() const
	{

	cout << " ----------------------------------------FlightInfo------------------------------------------------------------------------------------------------- " << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "FlightNumber: " << getFlightNumber() << ", "  <<endl;
	cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Departure Date: " << getDepartureDate()  << ", " << "Arrival Date: " << getArrivalDate() << ", "<< endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "DepartureCity: " << getDepartureCity() << ", "<< "DestinationCity: " << getDestinationCity() << ", " << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

	};
}

