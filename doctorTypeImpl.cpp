/*
 * ============================================================================
 *               Name: doctorTypeImpl.cpp
 *             Author: Ben Kirtley
 *       installation: James Madison University
 *       Date Written: Feb 10, 2014
 *        Description: Implementation file for doctorType
 *  ===========================================================================
 */

#include "personType.h"
#include "doctorType.h"
#include <iostream>
#include <string>

using namespace std;

/*
 *        purpose: Prints information for a doctor.
 *     parameters: Void
 *         return: Void
 *  preconditions: NA
 * postconditions: Prints doctor's information to standard out.
 *
 */
void
doctorType::print() const
{
  cout << "Physician name: " << personType::getFirstName()
       << " "  << personType::getLastName() << " "
       << speciality;
}

/*
 *        purpose: Sets the specialty of the doctor.
 *     parameters: spl - The doctors speciality.
 *         return: void
 *  preconditions: spl is a string.
 * postconditions: speciality = spl.
 *
 */
void
doctorType::setSpeciality(string spl)
{
  speciality = spl;
}


/*
 *        purpose: Returns the specialty of the doctor.
 *     parameters: spl - The doctors speciality.
 *         return: void
 *  preconditions: NA
 * postconditions: Speciality is returned to calling function.
 *
 */
string
doctorType::getSpeciality()
{
  return speciality;

}

/*
 *        purpose: Constructor for doctorType.
 *     parameters: first - Doctors first name.
 *                  last - Doctors last name.
 *                   spl - The doctors speciality.
 *         return: void
 *  preconditions: first, last, spl is of type string.
 * postconditions: firstName = first; lastName = last; speciality = spl;
 *
 */
doctorType::doctorType(string first, string last, string spl) : personType(first, last)
{
   speciality = spl;
}





