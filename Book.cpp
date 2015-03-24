/*
Author: Barsha Dahal
Roll no: 0309"A"
Creating class: The implementation of Book class
*/


#include<iostream>
#include <string>
#include "Book.h"

using namespace std;

Book:: Book (string bk_name, Author bk_author, float bk_price, int bk_quantity)
{
    name = bk_name;
    author = bk_author;
    setPrice(bk_price);
    setQuantity(bk_quantity);
}

void Book:: setPrice(float bk_price)
{
   price = bk_price;
}
void Book:: setQuantity(int bk_quantity)
{
    quantity = bk_quantity;
}

string Book::getName()
{
    return name;
}
Author Book::getAuthor()
{
    return author;
}
float Book::getPrice()
{
    return price;
}
int Book::getQuantity()
{

    return quantity;
}

string Book::toString()
{
    return  getName() + " by " + author.toString() ;
}




