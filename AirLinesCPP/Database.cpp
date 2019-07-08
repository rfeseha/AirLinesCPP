#include"pch.h"
#include "Database.h"
#include <iostream>
#include <stdexcept>

using namespace std;

namespace AirLinesApp
{

	PassengerInfo& Database::addPassenger(const std::string& firstName,
		const std::string& lastName, int passportNumber, int flightNumber)    {
		PassengerInfo PassengerInfo(firstName, lastName, passportNumber, flightNumber);
		mPassengersInfo.push_back(PassengerInfo);
		return mPassengersInfo[mPassengersInfo.size() -1];
		
	}


    PassengerInfo& Database::getPassengerInfo(const std::string& firstName, const std::string& lastName)
	{


		for (auto& PassengerInfo : mPassengersInfo)
	    {
			if (PassengerInfo.getFirstName() == firstName &&
				PassengerInfo.getLastName() == lastName)
				
			{

				return PassengerInfo;
			}
		}

		throw logic_error("No passenger found.");
	}
	PassengerInfo& Database::getPassengerInfo(int passportNumber, int flightNumber)

	{

		for (auto& passenger : mPassengersInfo) {

			if (passenger.getPassportNumber() == passportNumber && passenger.getFlightNumber() == flightNumber)
			{

				return passenger;

			}

		}

		throw logic_error("No passenger Found");

	}


    Flight& Database::addFlight(const std::string& DepartureCity, const std::string& DestinationCity,
		const std::string& DepartureDate, const std::string& ArrivalDate, int flightNumber)
	{

	           Flight Flight( DepartureCity, DestinationCity, DepartureDate, ArrivalDate, flightNumber);
			   mFlights.push_back(Flight);
			   return mFlights[mFlights.size() - 1];
	}

    Flight& Database::getFlight( const std::string& DepartureCity, const std::string& DestinationCity,
		const std::string& DepartureDate, const std::string& ArrivalDate, int flightNumber)
	{
		for (auto& Flight : mFlights)
		{ 
			if (
				Flight.getDepartureCity() == DepartureCity &&
				Flight.getDestinationCity() == DestinationCity &&
				Flight.getDepartureDate() == DepartureDate &&
				Flight.getArrivalDate() == ArrivalDate &&
				Flight.getFlightNumber() == flightNumber)
			{

				return Flight; 
			}

		}

		throw logic_error("Flight is Not Found");
	}

	
	Flight& Database::getFlight(int FlightNumber) 
	{



		for (auto& Flight : mFlights) {

			if (Flight.getFlightNumber() == FlightNumber) {

				return Flight;

			}

		}

		throw logic_error("No Flight Found");

	}


    void Database::DisplayInfo() const
	{

		for (const auto& PassengerInfo: mPassengersInfo )
		{

			PassengerInfo.Display();

		}
	}
    void Database::DisplayFlightInfo() const
{
		for (const auto& Flight: mFlights)
		{

			Flight.DisplayFlightInfo();
		}
}
	
	
}

