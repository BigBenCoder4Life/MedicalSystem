
#ifndef H_doctorType
#define H_doctorType

#include <string>
#include "personType.h"
 
using namespace std;

class doctorType: public personType
{
public:
    void print() const;
    void setSpeciality(string spl);
    string getSpeciality();
 
    doctorType(string first = "", string last = "", string spl = "");

 private:
    string speciality; 
};

#endif
