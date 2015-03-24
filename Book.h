/*
Author: Barsha Dahal
Roll no: 0309"A"
Creating class: An interface of Book class
*/

#include <string>
#include "Author.h"
using namespace std;

class Book
{
public:
    Book(string , Author , float  , int  );
    void setPrice(float m_price);
    void setQuantity (int m_quantity);
    string getName();
    Author getAuthor();
    float getPrice();
    int getQuantity();
    string toString();

private:
    string name;
    Author author;
    float price;
    int quantity;

};
