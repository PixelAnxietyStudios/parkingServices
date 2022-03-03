#include <iostream>
#include <string>
#include "Car.h"
#include "Invoice.h"
#include "LowEmission.h"
#include "Moped.h"
#include "Motorcycle.h"
#include "Professor.h"
#include "Student.h"
#include "Vendor.h"
#include "Visitor.h"
using namespace std;

int userValidation(int);   // validating menu choice selection

int main()
{
    int personType,         // used for person selection
        vehicleType;        // used for vehicle selection
    double discount {0.0};  // used to keep track of discounts applied based on choices
    string info;            // used for string information
    char side;              // used for side information
    int temp;               // used for integer information
    double miles;           // used for miles per gallon

    // getting input for person selection
    cout << "Who are you?\n";
    cout << "1) Student\n";
    cout << "2) Professor\n";
    cout << "3) Visitor\n";
    cout << "4) Vendor\n";
    cout << "Please choose one of these options that applies to you (1-4): ";
    cin >> personType;
    personType = userValidation(personType);
    getchar();  // eats a \n character to allow proper input
    cout << endl;

    switch(personType)
    {
        // student info gathering
        case 1:
        {
            Student student;
            // getting name
            cout << "Enter your first and last name: ";
            getline(cin, info);
            student.setName(info);

            // getting email
            cout << "Enter your email address: ";
            getline(cin, info);
            student.setEmail(info);

            // getting address
            cout << "Enter your address: ";
            getline(cin, info);
            student.setAddress(info);

            // getting driver license
            cout << "Enter your drivers license number: ";
            getline(cin, info);
            student.setDriverLicense(info);

            // getting campus location
            cout << "Are you living on campus or off campus ('y' or 'n'): ";
            cin >> side;
            student.setCampusLocation(side);
            break;
        }

        // professor info gathering
        case 2:
        {
            Professor professor;
            // getting name
            cout << "Enter your first and last name: ";
            getline(cin, info);
            professor.setName(info);

            // getting email
            cout << "Enter your email address: ";
            getline(cin, info);
            professor.setEmail(info);

            // getting address
            cout << "Enter your address: ";
            getline(cin, info);
            professor.setAddress(info);

            // getting ssn
            cout << "Enter your SSN: ";
            getline(cin, info);
            professor.setSSN(info);

            // getting department
            cout << "Enter the department you work in: ";
            getline(cin, info);
            professor.setDepartment(info);

            discount += 0.20;   // 20% discount for being a professor
            break;
        }

        // visitor info gathering
        case 3:
        {
            Visitor visitor;
            // getting name
            cout << "Enter your first and last name: ";
            getline(cin, info);
            visitor.setName(info);

            // getting email
            cout << "Enter your email address: ";
            getline(cin, info);
            visitor.setEmail(info);

            // getting address
            cout << "Enter your address: ";
            getline(cin, info);
            visitor.setAddress(info);

            // getting side of campus
            cout << "Enter the side of campus you are parking in ('w' or 'e'): ";
            side = tolower(getchar());
            visitor.setSide(side);
            getchar();  // eats \n

            // getting alumni status
            cout << "Are you an alumni ('y' or 'n')? ";
            side = tolower(getchar());
            visitor.setAlumni(side);
            break;
        }

        // vendor info gathering
        case 4:
        {
            Vendor vendor;
            // getting name
            cout << "Enter your first and last name: ";
            getline(cin, info);
            vendor.setName(info);

            // getting email
            cout << "Enter your email address: ";
            getline(cin, info);
            vendor.setEmail(info);

            // getting address
            cout << "Enter your address: ";
            getline(cin, info);
            vendor.setAddress(info);

            // getting company name
            cout << "Enter your company's name: ";
            getline(cin, info);
            vendor.setCompanyName(info);

            // getting product
            cout << "Enter what you are trying to sell: ";
            getline(cin, info);
            vendor.setProduct(info);
            break;
        }

    }
    
    // getting input for vehicle selection
    cout << "\nWhat type of vehicle do you drive?\n";
    cout << "1) Car\n";
    cout << "2) Low Emission Vehicle\n";
    cout << "3) Moped\n";
    cout << "4) Motorcycle\n";
    cout << "Please choose one of these options that applies to you (1-4): ";
    cin >> vehicleType;
    vehicleType = userValidation(vehicleType);
    getchar();  // eats a \n character to allow proper input
    cout << endl;

    switch(vehicleType)
    {
        // car info gathering
        case 1:
        {
            Car car;
            // getting make of vehicle
            cout << "Enter the make of your vehicle: ";
            getline(cin, info);
            car.setMake(info);

            // getting model of vehicle
            cout << "Enter the model of your vehicle: ";
            getline(cin, info);
            car.setModel(info);

            // getting year of vehicle
            cout << "Enter the year of your vehicle: ";
            cin >> temp;
            car.setYear(temp);
            getchar();  // eats a \n

            // getting license plate
            cout << "Enter your license plate: ";
            getline(cin, info);
            car.setLicensePlate(info);

            // getting color
            cout << "Enter the color of your vehicle: ";
            getline(cin, info);
            car.setColor(info);

            // getting disability status
            cout << "Is this a disabled vehicle ('y' or 'n'): ";
            side = tolower(getchar());
            car.setDisabled(side);

            if (car.getDisabled())
                { discount += 0.5; }    // 50% discount if a disabled vehicle
            break;
        }

        // low emission vehicle info gathering
        case 2:
        {
            LowEmission low;
            // getting make of vehicle
            cout << "Enter the make of your vehicle: ";
            getline(cin, info);
            low.setMake(info);

            // getting model of vehicle
            cout << "Enter the model of your vehicle: ";
            getline(cin, info);
            low.setModel(info);

            // getting year of vehicle
            cout << "Enter the year of your vehicle: ";
            cin >> temp;
            low.setYear(temp);
            getchar();   // eats \n

            // getting electric car status
            cout << "Is this an electric car ('y' or 'n'): ";
            side = tolower(getchar());
            low.setElectric(side);

            // getting miles per fuel type
            cout << "Enter the number of miles per gallon (or equivalent): ";
            cin >> miles;
            low.setMiles(miles);

            discount += 0.1;     // 10% discount for low emission vehicle 
            break;
        }

        // moped info gathering
        case 3:
        {
            Moped moped;
            // getting make of vehicle
            cout << "Enter the make of your vehicle: ";
            getline(cin, info);
            moped.setMake(info);

            // getting model of vehicle
            cout << "Enter the model of your vehicle: ";
            getline(cin, info);
            moped.setModel(info);

            // getting year of vehicle
            cout << "Enter the year of your vehicle: ";
            cin >> temp;
            moped.setYear(temp);
            getchar();  // eats a \n

            // getting CC of moped
            cout << "Enter the CC of your vehicle: ";
            getline(cin, info);
            moped.setCc(info);
            // getchar();   // eats \n

            // getting legality of moped
            cout << "Is your moped street legal ('y' or 'n'): ";
            side = tolower(getchar());
            moped.setLegal(side);
            break;
        }

        // motorcycle info gathering
        case 4:
        {
            Motorcycle motor;
            // getting make of vehicle
            cout << "Enter the make of your vehicle: ";
            getline(cin, info);
            motor.setMake(info);

            // getting model of vehicle
            cout << "Enter the model of your vehicle: ";
            getline(cin, info);
            motor.setModel(info);

            // getting year of vehicle
            cout << "Enter the year of your vehicle: ";
            cin >> temp;
            motor.setYear(temp);

            // getting MPG
            cout << "Enter the MPG of your motorcycle: ";
            cin >> miles;
            motor.setMPG(miles);

            // getting number of wheels
            cout << "Enter the number of wheels your motorcycle has: ";
            cin >> temp;
            motor.setTires(temp);
            break;
        }
    }
    


    return 0;
}


int userValidation(int d)
{
    while (d != 1 && d != 2 && d != 3 && d != 4)
    {
        cout << "Please enter a number 1-4: ";
        cin >> d;
    }

    return d;
}