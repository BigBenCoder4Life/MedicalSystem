/*
 * ============================================================================
 *               Name: mainProg.cpp
 *             Author: Ben Kirtley
 *       installation: James Madison University
 *       Date Written: Feb 10, 2014
 *        Description: This program simulates a hospital pay system.
 *  ===========================================================================
 */

#include "personType.h"
#include "doctorType.h"
#include "patientType.h"
#include "dateType.h"
#include "billType.h"
#include "iostream"
#include <string>
#include "ctype.h"
#include <sstream>

using namespace std;

//Prototypes:void
void
inputValidationID(string &str);

void
inputValidationNames(string &str);

/*
 *        purpose: This is main.
 *     parameters: Void
 *         return: Integer for program exit.
 *  preconditions: NA
 * postconditions: NA
 *
 */
int
main()
{

  patientType patient;   //Patient object.
  billType bill;         //Patient's bill.
  string ID;             //User defined ID number.
  string fName;          //User defined first name.
  string lName;          //User defined last name.
  string docFName;       //User defined doctor's first name.
  string docLName;       //User defined doctor's last name.
  string docSpl;         //User defined doctor's speciality.

//Ask for user input and set appropriate fields.
  cout << "Enter patient's ID: ";
  cin >> ID;
  inputValidationID(ID);
  cout << endl;
  cin.ignore(10, '\n');
  cout << "Enter patient's first name: ";
  cin >> fName;
  inputValidationNames(fName);
  cout << endl;
  cin.ignore(10, '\n');
  cout << "Enter patient's last name: ";
  cin >> lName;
  inputValidationNames(lName);
  cout << endl;
  cin.ignore(10, '\n');
  cout << "Enter doctor's first name: ";
  cin >> docFName;
  inputValidationNames(docFName);
  cout << endl;
  cin.ignore(10, '\n');
  cout << "Enter doctor's last name: ";
  cin >> docLName;
  inputValidationNames(docLName);
  cout << endl;
  cin.ignore(10, '\n');
  cout << "Enter doctor's speciality: ";
  cin >> docSpl;
  inputValidationNames(docSpl);
  cout << endl;

//Set appropriate fields.
  patient.setDoctorName(docFName, docLName);
  patient.setID(ID);
  patient.setName(fName, lName);
  patient.setDoctorSpl(docSpl);
  patient.setAdmDate(4, 15, 2009);
  patient.setDisDate(4, 21, 2009);
  bill.setPharmacyCharges(245.50);
  bill.setRoomRent(2500);
  bill.setDoctorFee(3500.38);

//Display information to user.
  cout << endl;
  patient.print();
  cout << endl;
  bill.printBill();

//Exit the program.
  return 0;
}

/*
 *        purpose: Checks user input for validation.
 *     parameters: str - The string to check.
 *         return: str - A string with alphabet characters.
 *  preconditions: str is of type string.
 * postconditions: str is a string.
 *
 */
void
inputValidationNames(string &str)
{
  bool badInput = true;
  unsigned int counter = 0;

  while (badInput)
    {

      for (unsigned int i = 0; i < str.length(); i++)
        {
          counter++;

          if (!isalpha(str[i]))
            {
              cout << "Bad input please try again \n"
                  << "Please enter only letters A-Z or a-z " << endl;

              cin.clear();
              str = "";
              cin.ignore(100,'\n');
              cin >> str;

              counter = 0;
              i = 0;
            }
          else if (counter == str.length())
            {
              badInput = false;
            }

        }
    }
}

/*
 *        purpose: Checks user input for validation.
 *     parameters: str - The string to check.
 *         return: str - A string with alphabet characters.
 *  preconditions: str is of type string.
 * postconditions: str is a string.
 *
 */
void
inputValidationID(string &str)
{
  int temp;
  string string;

  for (unsigned int i = 0; i < str.length() - 1; i++)
    {
      //Store the string.
      string = str[i];

      //Parse the number & store it.
      stringstream buffer(string);
      buffer >> temp;
      buffer.clear();

      if (temp > 9 || temp < 0 || (temp == 0 && string.compare("0") != 0))
        {
          cout << "Input is invalid.\nPlease enter positive integers "
              << "0-9 for patient ID number: ";

          cin.clear();
          str = "";
          cin.ignore(100,'\n');
          cin >> str;

          //Reset for loop.
          i = -1;
        }
      cin.clear();

    }
}

