#pragma once
#include <iostream>
#include<string>

namespace AirLinesApp
{
	class PassengerInfo
	{
	public:
		PassengerInfo() = default;
		PassengerInfo(const std::string& firstName,
			const std::string& lastName,int passportNumber, int flightNumber );


		void Display() const;

		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setEmailAddress(const std::string& EmailAddress);
		const std::string& getEmailAddress() const;

		void setAddress(const std::string& Address);
		const std::string& getAddress() const;

		int getPassportNumber() const;
		void setPassportNumber(int passportNumber);

		int getFlightNumber() const;
		void setFlightNumber(int flightNumber);




	private:
		std::string mFirstName;
		std::string mLastName;
		std::string mEmailAddress;
		std::string mAddress;
		int mPassportNumber;
		int mFlightNumber = -1;

	};
class Flight
{
public:
	Flight() = default;
	Flight(const std::string& DepartureCity, const std::string& DestinationCity, 
		const std::string& DepartureDate, const std::string& ArrivalDate, int flightNumber);


	

	const std::string& getDepartureCity()const;
	void setDepartureCity(const std::string& DepartureCity);

	const std::string& getDestinationCity() const;
	void setDestinationCity(const std:: string & setDestinationCity);

	const std::string& getDepartureDate() const;
	void setDepartureDate(const std::string& setDepartureDate);

	const std::string& getArrivalDate() const;
	void setArrivalDate(const std::string& setArrivalDate);

	int getFlightNumber() const;
	void setFlightNumber(int flightNumber);

	
	
	
	void DisplayFlightInfo() const;


private:
	int mFlighNumber = -1;
	std::string mDepartureDate;
	std::string mArrivalDate;
	std::string mDepartureCity;
	std::string mDestinationCity;
	
};
}



