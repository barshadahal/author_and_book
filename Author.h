/*
Author: Barsha Dahal
Roll no: 0309"A"
Creating class: An interface of an Author class
*/

#include <string>
using namespace std;

class Author
{
public:
    Author( string, string, char );
    Author();
    void setEmail(string );
    string getName();
    string getEmail();
    char getGender();
    string toString();

private:
    string name;
    string email;
    char gender;

};





