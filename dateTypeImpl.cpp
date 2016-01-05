/*
 * ============================================================================
 *               Name: dateTypeImpl.cpp
 *             Author: Ben Kirtley
 *       installation: James Madison University
 *       Date Written: Feb 10, 2014
 *        Description: Implementation for dataType objects.
 *  ===========================================================================
 */
#include "dateType.h"
#include <iostream>

using namespace std;

/*
 *        purpose: Sets the bill date.
 *     parameters: month - The bill month.
 *                   day - The bill day.
 *                  year - The bill year.
 *         return: void
 *  preconditions: NA
 * postconditions: dMonth = month; dDay = day; dYear = year
 *
 */
void
dateType::setDate(int month, int day, int year)
{
  dMonth = month;
    dDay = day;
   dYear = year;
}

/*
 *        purpose: Returns the day.
 *     parameters: NA
 *         return: dDay - The bill date
 *  preconditions: NA
 * postconditions: The value of dDay is returned.
 */
int
dateType::getDay() const
{
  return dDay;
}

/*
 *        purpose: Returns the month.
 *     parameters: NA
 *         return: dMonth - The bill date
 *  preconditions: NA
 * postconditions: The value of dMonth is returned.
 */
int
dateType::getMonth() const
{
  return dMonth;
}

/*
 *        purpose: Returns the year.
 *     parameters: NA
 *         return: dYear - The bill date
 *  preconditions: NA
 * postconditions: The value of dYear is returned.
 */
int
dateType::getYear() const
{
  return dYear;
}

/*
 *        purpose: Prints the date to standard out.
 *     parameters: NA
 *         return: void
 *  preconditions: NA
 * postconditions: Function to output the date in the form mm-dd-yyyy.
 */
void
dateType::printDate() const
{
  cout << getMonth() << "-" << getDay() << "-" << getYear();
}

/*
 *        purpose: Constructor for dateType objects.
 *     parameters: month - The month.
 *                 day   - The Day.
 *                 year  - the year.
 *         return: void
 *  preconditions: month is an int, day is an int, year is an int
 * postconditions: dMonth = month; dDay = day; dYear = year;
 *                 If no values are specified, the default
 *                 values are used to initialize the member
 *                 variables.
 */
dateType::dateType(int month, int day, int year)
{
  dMonth = month;
    dDay = day;
   dYear = year;
}
