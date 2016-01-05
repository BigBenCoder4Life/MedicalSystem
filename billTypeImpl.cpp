/*
 * ============================================================================
 *               Name: billTypeImpl.cpp
 *             Author: Ben Kirtley
 *       installation: James Madison University
 *       Date Written: Feb 10, 2014
 *        Description: Implementation file for billType objects.
 *  ===========================================================================
 */

#include "billType.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

/*
 *        purpose: Prints the bill in a formatted fashion.
 *     parameters: void
 *         return: void
 *  preconditions: NA
 * postconditions: Prints the formatted bill to standard out.
 *
 */
void
billType::printBill()
{
 int length;
 length = width(getPharmacyCharges(), getRoomRent(), getDoctorFee());
 cout << fixed << right << showpoint << setprecision(2) << setfill(' ');
 cout << "Pharmacy Charges: $" << setw(length)  << getPharmacyCharges() << endl;
 cout << "Room Charges:     $" << setw(length)  << getRoomRent() << endl;
 cout << "Doctor's Fees:    $" << setw(length)  << getDoctorFee() << endl;
 cout << "-------------------------------" << endl;
 cout << "Total Charges:    $" << setw(length)  <<billingAmount() << endl;
 cout << endl;
}

/*
 *        purpose: Sets the amount for charges.
 *     parameters:        id - The patient id number.
 *                 phCharges - Pharamacy's charges.
 *                     rRent - Room usage fee.
 *                    docFee - Doctor's set fee.
 *         return: void
 *  preconditions: id is a string, phCharges is a double, rRent is a double
 *                 docFee is a double
 * postconditions: Id = id; pharmacyCharges = phCharges; roomRent = rRent;
 *                 doctorFee = docFee;
 *
 */
void
billType::setInfo(string id, double phCharges, double rRent, double docFee)
{
  ID = id;
  pharmacyCharges = phCharges;
  roomRent = rRent;
  doctorFee = docFee;
}

/*
 *        purpose: Sets the patient's ID.
 *     parameters: id - patient's ID
 *         return: void
 *  preconditions: id is a string
 * postconditions: id = ID;
 *
 */
void
billType::setID(string id)
{
  ID = id;
}

/*
 *        purpose: Gets the patient's ID.
 *     parameters: NA
 *         return: id - the patient's ID number.
 *  preconditions: NA
 * postconditions: ID field is returned to calling function.
 *
 */
string
billType::getID()
{
  return ID;
}

/*
 *        purpose: Sets the pharmacy charges.
 *     parameters: void
 *         return: void
 *  preconditions: charges is of type double.
 * postconditions: pharmacyCharges = charges;
 *
 */
void
billType::setPharmacyCharges(double charges)
{
  pharmacyCharges = charges;
}

/*
 *        purpose: Gets the pharmacy charges.
 *     parameters: void
 *         return: pharmacyCharges - The current charges from the pharmacy.
 *  preconditions: NA
 * postconditions: pharmacyCharges is returned to calling function;
 *
 */
double
billType::getPharmacyCharges()
{
  return pharmacyCharges;
}

/*
 *        purpose: Updates the pharmacy charges.
 *     parameters: charges - The pharmacy charges.
 *         return: void
 *  preconditions: charges is of type double.
 * postconditions: pharmacyCharges = charges;
 *
 */
void
billType::updatePharmacyCharges(double charges)
{
  pharmacyCharges = charges;
}

/*
 *        purpose: Sets the room rate.
 *     parameters: charges - The room rent for usage.
 *         return: void
 *  preconditions: charges is of type double.
 * postconditions: roomRent = charges;
 *
 */
void
billType::setRoomRent(double charges)
{
  roomRent = charges;
}

/*
 *        purpose: Returns the room rent.
 *     parameters: Void
 *         return: rRent - The rooms rent.
 *  preconditions: NA
 * postconditions: Returns the rRent to the calling function.
 *
 */
double
billType::getRoomRent()
{
  return roomRent;
}

/*
 *        purpose: Updates the room rent.
 *     parameters: charges - The room rent.
 *         return: void
 *  preconditions: charges is of type double.
 * postconditions: roomRent = charges;
 *
 */
void
billType::updateRoomRent(double charges)
{
  roomRent = charges;
}

/*
 *        purpose: Sets the doctors fees.
 *     parameters: charges - The doctor fee.
 *         return: void
 *  preconditions: charges is of type double.
 * postconditions: charges = doctorFee;
 *
 */
void
billType::setDoctorFee(double charges)
{
  doctorFee = charges;
}

/*
 *        purpose: Returns the doctors fees.
 *     parameters: void
 *         return: doctorFee - The Doctors fees.
 *  preconditions: NA
 * postconditions: Returns doctorFee to calling function.
 *
 */
double
billType::getDoctorFee()
{
  return doctorFee;
}

/*
 *        purpose: Updates the doctor's fees.
 *     parameters: charges- The doctors fees.
 *         return: void
 *  preconditions: charges is of type double.
 * postconditions: charges = doctorFee;
 *
 */
void
billType::updateDoctorFee(double charges)
{
  doctorFee = charges;
}

/*
 *        purpose: Calculates total bill with arithmetic.
 *     parameters: void
 *         return: totalBill - The total of all hospital charges.
 *  preconditions: NA
 * postconditions: Prints properly formatted total bill to standard out.
 *
 */
double
billType::billingAmount()
{
  double totalBill;  //Holds the total sum of all bills.

  return totalBill = getPharmacyCharges() + getRoomRent() + getDoctorFee();
}

/*
 *        purpose: Constructor for biilType objects.
 *     parameters: void
 *         return: void
 *  preconditions: NA
 * postconditions: ID = id; pharmacyCharges = phCharges; roomRent = rRent;
 *                 doctorFee = docFee;
 *
 */
billType::billType(string id, double phCharges, double rRent, double docFee)
{
  ID = id;
  pharmacyCharges = phCharges;
  roomRent = rRent;
  doctorFee = docFee;
}

/*
 *        purpose: To get the largest number for accurate formatting.
 *     parameters: pharmacyCharges - The pharmacy's fee.
 *                 doctorFee       - The doctor's fee.
 *                 roomRent        - The room's fee.
 *         return: width - For formatting of arithmetic positions.
 *  preconditions: NA
 * postconditions: width is equal to largest number for the three fees.
 *
 */
int
billType::width(double pharmacyCharges, double roomRent, double doctorFee)
{
  double largest; //Holds the largest number.
  double fees[3] = {pharmacyCharges, roomRent, doctorFee};
  string str;    //Holder for length call.
  largest = fees[0]; //Holds the fees.

  for(unsigned int i = 0; i < 3; i++)
    {
      if(largest < fees[i])
        {
          largest = fees[i];
        }
    }
  stringstream buffer;
  buffer << largest;
  buffer >> str;
  largest = str.length() + 2;

  return largest;
}
