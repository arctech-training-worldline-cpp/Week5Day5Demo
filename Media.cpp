#include <iostream>
using namespace std;

class Media
{
    //title char[50] and price float
    //parameterized constructor 
    //virtual void display();
};

class Book : public Media{
    //pages int
    //parameterized constructor
    //override display
};

class Tape : public Media{
    //time float
    //parameterized constructor
    //override display
};

int main()
{
    //accept one entry of book details
    //create object of book - bookObj with all the details accepted from user

    //accept one entry of tape details
    //create object of tape with all the details entered. tapeObj
    Media *lst[2];
    //lst[0] = address of the bookObj
    //lst[1] = address of the tapeObj

    //display details
}

