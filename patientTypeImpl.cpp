/*
 * ============================================================================
 *               Name: patientTypeImpl.cpp
 *             Author: Ben Kirtley
 *       installation: James Madison University
 *       Date Written: Feb 10, 2014
 *        Description: Implementation for patientType objects.
 *  ===========================================================================
 */

#include "personType.h"
#include "patientType.h"
#include "dateType.h"
#include "doctorType.h"
#include <string>
#include <iostream>

using namespace std;

/*
 *        purpose: Prints the patients information.
 *     parameters: void
 *         return: void
 *  preconditions: NA
 * postconditions: Prints all the patients information to standard out.
 *
 */
void
patientType::print()    //Change to const function.
{
  cin.ignore();
  cout << "Patient: " << patientType::getFirstName() << " "
       << patientType::getLastName() << endl;
  cout << "Attending Physician: " << attendingPhysicain.getFirstName() << " "
       << attendingPhysicain.getLastName() << " "
       << attendingPhysicain.getSpeciality() << endl;
  cout << "Admit Date: " << getAdmDay() << "-" << getAdmMonth() << "-"
       << getAdmYear() << endl;
  cout << "Discharge Date: " << getDisDay() << "-" << getDisMonth() << "-"
       << getDisYear() << endl;
}

/*
 *        purpose: Set the patient's ID.
 *     parameters: id - The users ID number.
 *         return: void
 *  preconditions: id is of type string
 * postconditions: id = ID;
 *
 */
void
patientType::setID(string id)
{
  ID = id;
}

/*
 *        purpose: Returns the patients ID number.
 *     parameters: void
 *         return: ID - The patients ID number.
 *  preconditions: NA
 * postconditions: Returns the patients ID field to the calling function.
 *
 */
string
patientType::getID()
{
  return ID;
}

/*
 *        purpose: Sets the patients birth date.
 *     parameters: bDay  - The patient's birth day.
 *                 bMth  - The patient's birth month.
 *                 bYear - The patient's birth year.
 *         return: void
 *  preconditions: NA
 * postconditions: dMonth = bDay; dDay = bDay; dYear = bYear;
 *
 */
void
patientType::setBirthDate(int bDay, int bMth, int bYear)
{
  dateOfBirth.setDate(bMth, bDay, bYear);
}

/*
 *        purpose: Returns the patients birth day.
 *     parameters: void
 *         return: dDay - The paitient's birth day.
 *  preconditions: NA
 * postconditions: The bDay is returned to the calling function.
 *
 */
int
patientType::getBirthDay()
{
  return dateOfBirth.getDay();
}

/*
 *        purpose: Returns the patients birth month.
 *     parameters: void
 *         return: dMonth - The paitient's birth month.
 *  preconditions: NA
 * postconditions: The bMonth is returned to the calling function.
 *
 */
int
patientType::getBirthMonth()
{
  return dateOfBirth.getMonth();
}

/*
 *        purpose: Returns the patients birth year.
 *     parameters: void
 *         return: dYear - The paitient's birth year.
 *  preconditions: NA
 * postconditions: The bYear is returned to the calling function.
 *
 */
int
patientType::getBirthYear()
{
  return dateOfBirth.getYear();
}

/*
 *        purpose: Sets the doctors name.
 *     parameters: fName - Doctor's first name.
 *                 lName - Doctor's last name.
 *         return: void
 *  preconditions: NA
 * postconditions: firstName = fName; lastName = lName;
 *
 */
void
patientType::setDoctorName(string fName, string lName)
{
  attendingPhysicain.setName(fName, lName);
}

/*
 *        purpose: Sets the doctors speciality.
 *     parameters: spl - The doctor's speciality.
 *         return: void
 *  preconditions: spl is of type string.
 * postconditions: speciality = spl;
 *
 */
void
patientType::setDoctorSpl(string spl)
{
  attendingPhysicain.setSpeciality(spl);
}

/*
 *        purpose: Returns the first name.
 *     parameters: Void
 *         return: firstName - The doctor's first name.
 *  preconditions: NA
 * postcondition: The firstName is returned to the calling function.
 */
string
patientType::getDoctorFName()
{
  return attendingPhysicain.getFirstName();
}

/*
 *        purpose: Returns the last name.
 *     parameters: Void
 *         return: lastName - The doctor's last name.
 *  preconditions: NA
 * postcondition: The lastName is returned to the calling function.
 */
string
patientType::getDoctorLName()
{
  return attendingPhysicain.getLastName();
}

/*
 *        purpose:Returns the doctors speciality.
 *     parameters: void
 *         return: spl - The doctor's speciality.
 *  preconditions: NA
 * postconditions: speciality = spl;
 *
 */
string
patientType::getDoctorSpl()
{
  return attendingPhysicain.getSpeciality();
}

/*
 *        purpose: Sets the admission date.
 *     parameters: admDay  - The admission day.
 *                 admMth  - The admission month.
 *                 admYear - The admission year.
 *         return: void
 *  preconditions: admDAy, admMth, admYear is of type int.
 * postconditions: dMonth = admMth; dDay = admDay; dYear = admYear
 */
void
patientType::setAdmDate(int admDay, int admMth, int admYear)
{
  admitDate.setDate(admMth, admDay, admYear);
}

/*
 *        purpose: Returns the admittance day.
 *     parameters: void
 *         return: admDay  - The admission day.
 *  preconditions: NA
 * postconditions: The admDay is returned to the calling function.
 */
int
patientType::getAdmDay()
{
  return admitDate.getDay();
}

/*
 *        purpose: Returns the admittance month.
 *     parameters: void
 *         return: admMonth  - The admission month.
 *  preconditions: NA
 * postconditions: The admMonth is returned to the calling function.
 */
int
patientType::getAdmMonth()
{
  return admitDate.getMonth();
}

/*
 *        purpose: Returns the admittance year.
 *     parameters: void
 *         return: admYear  - The admission year.
 *  preconditions: NA
 * postconditions: The admYear is returned to the calling function.
 */
int
patientType::getAdmYear()
{
  return admitDate.getYear();
}

/*
 *        purpose: Sets the discharged date.
 *     parameters: disDay  - Dismissal day.
 *                 disMth  - Dismissal month.
 *                 disYear - Dismissal year.
 *         return: void
 *  preconditions: disDay, disMth, disYear is of type int.
 * postconditions: dDay = disDay, dMonth = disMth; dYear = disYear;
 */
void
patientType::setDisDate(int disDay, int disMth, int disYear)
{
  dischargeDate.setDate(disMth, disDay, disYear);
}

/*
 *        purpose: Returns the discharged day.
 *     parameters: void
 *         return: dDay - The discharge day.
 *  preconditions: NA
 * postconditions: The dDay is returned to the calling function.
 */
int
patientType::getDisDay()
{
  return dischargeDate.getDay();
}

/*
 *        purpose: Returns the discharged month.
 *     parameters: void
 *         return: dmonth - The discharge month.
 *  preconditions: NA
 * postconditions: Returns dmonth to the calling function.
 */
int
patientType::getDisMonth()
{
  return dischargeDate.getMonth();
}

/*
 *        purpose: Returns the discharged year.
 *     parameters: void
 *         return: dYear - The discharge year.
 *  preconditions: NA
 * postconditions: Returns dYear to the calling function.
 */
int
patientType::getDisYear()
{
  return dischargeDate.getYear();
}

/*
 *       purpose: Sets the users information.
 *    parameters:id         - The users id number.
 *               fName      - The patient's first name.
 *               lName      - The patient's last name.
 *               bDay       - The patient's birth day.
 *               bMth       - The patient's birth month.
 *               bYear      - The patient's birth year.
 *               docFrName  - Doctor's first name whom gave services.
 *               docLaName  - Doctor's last name whom gave services.
 *               docSpl     - The doctor's speciality.
 *               admDay     - The day of admittance.
 *               admMonth   - The month of admittance.
 *               admYear    - The year of admittance.
 *               disChDay   - The day of discharge.
 *               disChmonth - The month of discharge.
 *               disChYear  - The year of discharge.
 *        return: void
 * preconditions: Too long to list.
 *postconditions: Too long to list.
 *
 */
void
patientType::setInfo(string id, string fName, string lName, int bDay, int bMth,
    int bYear, string docFrName, string docLaName, string docSpl, int admDay,
    int admMth, int admYear, int disChDay, int disChMth, int disChYear)
{
  ID = id;
  patient.setName(fName, lName);
  dateOfBirth.setDate(bDay, bMth, bYear);
  attendingPhysicain.setName(docFrName, docLaName);
  attendingPhysicain.setSpeciality(docSpl);
  admitDate.setDate(admDay, admMth, admYear);
  dischargeDate.setDate(disChDay, disChMth, disChYear);
}

/*
 *       purpose: Sets the users information.
 *    parameters:id         - The users id number.
 *               fName      - The patient's first name.
 *               lName      - The patient's last name.
 *               bDay       - The patient's birth day.
 *               bMth       - The patient's birth month.
 *               bYear      - The patient's birth year.
 *               docFrName  - Doctor's first name whom gave services.
 *               docLaName  - Doctor's last name whom gave services.
 *               docSpl     - The doctor's speciality.
 *               admDay     - The day of admittance.
 *               admMonth   - The month of admittance.
 *               admYear    - The year of admittance.
 *               disChDay   - The day of discharge.
 *               disChmonth - The month of discharge.
 *               disChYear  - The year of discharge.
 *        return: void
 * preconditions: Too long to list.
 *postconditions: Too long to list.
 *
 */
patientType::patientType(string id, string fName, string lName, int bDay,
    int bMth, int bYear, string docFrName, string docLaName, string docSpl,
    int admDay, int admMth, int admYear, int disChDay, int disChMth,
    int disChYear)
{
  ID = id;
  patient = personType(fName, lName);
  attendingPhysicain = doctorType(docFrName, docLaName, docSpl);
  dateOfBirth = dateType(bDay, bMth, bYear);
  admitDate = dateType(admDay, admMth, admYear);
  dischargeDate = dateType(disChDay, disChMth, disChYear);
}
