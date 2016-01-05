/*
 * ============================================================================
 *               Name: personTypeImpl.cpp
 *             Author: Ben Kirtley
 *       installation: James Madison University
 *       Date Written: Feb 10, 2014
 *        Description: Implementation for personType objects.
 *  ===========================================================================
 */

#include "personType.h"
#include <iostream>
#include <string>

using namespace std;

/*
 *        purpose: Prints the first and last name.
 *     parameters: Void
 *         return: Void
 *  preconditions: NA
 * postconditions: Prints firstName and lastName to standard out.
 *
 */
void
personType::print() const
{
  cout << firstName << " " << lastName;
}

/*
 *        purpose: Sets the first and last name.
 *     parameters: first - The first name.
 *                  last - The last name.
 *         return: void
 *  preconditions: First and Last are strings.
 * postcondition: firstName = first; lastName = last
 */
void
personType::setName(string first, string last)
{

  firstName = first;
  lastName = last;

}

/*
 *        purpose: Returns the first name.
 *     parameters: Void
 *         return: firstName - The first name.
 *  preconditions: NA
 * postcondition: The firstName is returned to the calling function.
 */
string
personType::getFirstName() const
  {
    return firstName;
  }

/*
 *        purpose: Returns the last name.
 *     parameters: Void
 *         return: lastName - The persons last name.
 *  preconditions: NA
 * postcondition: The value lastName is returned to the calling function.
 */
string
personType::getLastName() const
  {
    return lastName;
  }

/*
 *        purpose: Constructor for personType.
 *     parameters: first - The first name.
 *                  last - The last name.
 *         return: NA
 *  preconditions: First and last are strings.
 * postcondition: firstName = first; lastName = last;
 */
personType::personType(string first, string last)
{
  firstName = first;
  lastName = last;
}



