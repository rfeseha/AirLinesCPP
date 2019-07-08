  #pragma once
#include <iostream>
#include <vector>
#include "AirLines.h"

namespace AirLinesApp
{

	const int kFirstPassportNumber = 20180000;

	class Database
	{
	public:
		PassengerInfo& addPassenger(const std::string& firstName,
			const std::string& lastName, int passportNumber, int flightNumber);
		PassengerInfo& getPassengerInfo(const std::string& firstName, const std::string& lastName);
		PassengerInfo& getPassengerInfo(int passportNumber, int flightNumber);
		





		Flight& addFlight(const std::string& DepartureCity, const std::string& DestinationCity,
				const std::string& DepartureDate, const std::string& ArrivalDate,int flightNumber);
		Flight& getFlight(const std::string& DepartureCity, const std::string& DestinationCity,
			const std::string& DepartureDate, const std::string& ArrivalDate, int flightNumber);
		Flight& getFlight(int flightNumber);




		void DisplayInfo() const;
		void DisplayFlightInfo() const;
		void DisplayTicketInfo() const;
		



	private:
		std::vector<PassengerInfo> mPassengersInfo;
		std::vector<Flight> mFlights;
		int mNextPassportNumber = kFirstPassportNumber;


			
	};


}