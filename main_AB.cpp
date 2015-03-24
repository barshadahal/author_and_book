/*
Author: Barsha Dahal
Roll no: 0309"A"
Creating class: The program to use Author class and Book class
*/

#include<iostream>
#include <string>
#include <cstdlib>
#include "Book.h"
using namespace std;

int main()
{
    string m_name,  m_email, bk_name;
    Author bk_author;
    char m_gender;
    float bk_price;
    int bk_quantity;

    cout<< "Enter name of the author: ";
    getline(cin,m_name);
    cin.get();

    cout<< "Enter mail id of author: ";
    cin>> m_email;
    cin.get();
    cout<< "Enter gender of author: ";
    cin>> m_gender;
    cin.get();
    cout<< "Enter book name: ";
    getline(cin,bk_name);


    cout<< "Enter price of the book: ";
    cin>> bk_price;
    cin.get();

    cout<< "Enter quantity of book in stake: ";
    cin>> bk_quantity;

    Author a1(m_name, m_email, m_gender);
    Book b1(bk_name,a1, bk_price, bk_quantity);

    cout << a1.toString()<< endl;
    cout<< b1.toString()<< endl;
}
