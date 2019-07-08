#pragma once
#include "pch.h"
#include <iostream>
#include"Database.h"

using namespace std;
using namespace AirLinesApp;

int  displayMenu();
void DisplayInfo(Database& db);
void ReserveSeat(Database& db);
void FlightSchedule(Database& db);
void FlightDetails(Database& db);
void DisplayTicketInfo(Database& db);

int main()
{

	Database AirLinesDb;

	while (true)
	{
		int select = displayMenu();
		switch (select)
		{
		case 0:
			return 0;
		case 1:
			DisplayInfo(AirLinesDb);
			break;
		case 2:
			ReserveSeat(AirLinesDb);
			break;
		case 3:
			 FlightSchedule(AirLinesDb);
			break;
		case 4:
			FlightDetails(AirLinesDb);
			break;
		case 5:
			DisplayTicketInfo(AirLinesDb);
			break;
		default:
			cerr << "Invalid. Please Try Again" << endl;

		}

	}
	return 0;
}


void DisplayInfo(Database& db)
{
	string firstName;
	string lastName;
	int passportNumber;
	int flightNumber;

	cout << endl;
	cout << "First Name? ";
	cin  >> firstName;
	cout << "Last Name? "; 
	cin  >> lastName;
	cout << "PassportNumber? ";
	cin  >> passportNumber;
	cout << "FlightNumber? ";
	cin  >> flightNumber;
	cout << endl;

	db.addPassenger(firstName, lastName, passportNumber, flightNumber);
}	
void ReserveSeat(Database& db)
{
	cout << "Please choose from the following to Reserve Your Seat" << endl;
	cout << endl;
	cout << "1. EconomySEAT" << endl;
	cout << "2. BusniesSEAT" << endl;
	cout << "3. PremiumSEAT" << endl;

	cout << "Please Enter Your Choice: ";
	cout << endl;


	int book;
	cin >> book;

	switch (book)
	{
	case 1:
		cout << "EconomySEAT" << endl;
		break;
	case 2:
		cout << "BusinessSEAT" << endl;
		break;
	case 3:
		cout << "PremiumSEAT" << endl;
		break;
	default:
		cout << "Invalid" << endl;
	}
}
void FlightSchedule(Database& db)
{
		
		string DepartureDate;
		string ArrivalDate;
		string DepartureCity;
		string DestinationCity;

	
		cout << endl;
		cout << "----------------------------------------Flight Scheudle--------------------------------------------------------------------------------- " << endl;
		cout << "Departure Date (mm/dd/yyyy)? " << endl;
		cin  >>  DepartureDate;
		cout <<  "Arrival Date (mm/dd/yyyy) ? " << endl;
		cin  >>  ArrivalDate;
		cout <<  endl;
		cout << "------------------------------------------------------------------------------------------------------------------------------------------------ " << endl;
    }

	void FlightDetails(Database& db)
	{
		string DepartureDate;
		string ArrivalDate;
		string DepartureCity;
		string DestinationCity;
		int flightNumber;

		cout << endl;
		cout << "-----------------------------------------------------------------Flight Details---------------------------------------------------------" << endl;
		cout << "Departure Date? " << endl;
		cin  >>  DepartureDate;
		cout << "Arrival Time? " << endl;
		cin  >>  ArrivalDate;
		cout << "DepartureCity? " << endl;
		cin  >>  DepartureCity;
		cout << "DestinationCity? " << endl;
		cin  >>  DestinationCity;
		cout << "FlightNumber?" << endl;
		cin >> flightNumber;
		cout << "---------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		db.addFlight(DepartureDate, ArrivalDate, DepartureCity, DestinationCity, flightNumber);
	}

void DisplayTicketInfo(Database& db)
{
	int passportNumber;
	int flightNumber;

	cout << "PassportNumber? " << endl;
	cin  >> passportNumber;
	cout << "FlightNumber? " << endl;
	cin >> flightNumber;

	try
	{
		PassengerInfo& pas = db.getPassengerInfo(passportNumber, flightNumber);
		pas.Display();
		cout << "Passport Number: " << passportNumber << " and " << endl;
		cout << "Flight Number : " << flightNumber << " " << endl;

	}

	catch (const std::logic_error& exception)
	{
		cerr << "Search Is Done : " << exception.what() << endl;
	}
}

int displayMenu()
{
	int select;

	cout << endl;
	cout << "====================================WELCOME To FESHEHA  AIRLINES RESERVATION SYSTEM:================================================= " << endl;
	cout << endl;
	cout << "1. DisplayPassengerInfo " << endl;
	cout << "2. ReserveSeat" << endl;
	cout << "3. FlightSchedule  " << endl;
	cout << "4. FlightDetails " << endl;
	cout << "5. DisplayTicketInfo " << endl;
	cout << "0. Quit " << endl;
	cout << endl;


	cin >> select;

	return select;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
