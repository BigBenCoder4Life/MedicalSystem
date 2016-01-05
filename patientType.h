
#ifndef H_patientType
#define H_patientType

#include <string>
#include "doctorType.h"
#include "personType.h"
#include "dateType.h"
 
using namespace std;

class patientType: public personType
{
public:
    void print();

    void setInfo(string id = "", string fName = "", string lName = "",
                int bDay = 1, int bMth = 1, int bYear = 1900,
                string docFrName = "", string docLaName = "", string docSpl = "",
                int admDay = 1, int admMth = 1, int admYear = 1900,
                int disChDay = 1, int disChMth = 1, int disChYear = 1900);

    void setID(string id);
    string getID();

    void setBirthDate(int bDay = 1, int bMth = 1, int bYear = 1900);
    int getBirthDay();
    int getBirthMonth();
    int getBirthYear();

    void setDoctorName(string fName = "", string lName = "");
    void setDoctorSpl(string spl = "");
    string getDoctorFName();
    string getDoctorLName();

    string getDoctorSpl();

    void setAdmDate(int admDay = 1, int admMth = 1, int admYear = 1900);
    int getAdmDay();
    int getAdmMonth();
    int getAdmYear();

    void setDisDate(int disDay = 1, int disMth = 1, int disYear = 1900);
    int getDisDay();
    int getDisMonth();
    int getDisYear();

    patientType(string id = "", string fName = "", string lName = "",
                int bDay = 1, int bMth = 1, int bYear = 1900,
                string docFrName = "", string docLaName = "", string docSpl = "",
                int admDay = 1, int admMth = 1, int admYear = 1900,
                int disChDay = 1, int disChMth = 1, int disChYear = 1900);
   
 private:
    string ID;
    dateType dateOfBirth;
    doctorType attendingPhysicain;
    dateType admitDate;
    dateType dischargeDate; 
    personType patient;
};

#endif
