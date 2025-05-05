/*
Amerike University
Author: Ali Angel
Work #: 26
Date: 29/04/25
Description: This program will declare and initialize 5 variables of different types
it will then declare a pointer for each variable after that we will print the stored 
value of our 5 variables through the pointers and we will also print
 the memory slots of all variables and pointers
*/

#include <iostream>
#include <conio.h>

void pressAnyKey();

int main(){

    int usrNumber = 4;
    std::string usrName = "Juanito";
    char usrLetter = 'D';
    float usrFloat = 1.5;
    double usrDouble = 23.2355;

    int *pUsrNumber = &usrNumber;
    std::string *pUsrName = &usrName;
    char *pUsrLetter = &usrLetter;
    float *pUsrFloat = &usrFloat;
    double *pUsrDouble = &usrDouble;

    std::cout<<"usrName memory slot: " << &pUsrName <<"\nusrName stored value: "<<*pUsrName;
    std::cout<<"\npointer pUsrName memory slot: " << pUsrName<<"\n";
    pressAnyKey();
    std::cout<<"usrNumber memory slot: "<<&pUsrNumber<<"\nusrNumber stored value: "<<*pUsrNumber;
    std::cout<<"\npointer pUsrNumber memory slot: " << pUsrNumber<<"\n";
    pressAnyKey();
    std::cout<<"usrLetter memory slot: "<<&pUsrLetter<<"\nusrLetter stored value: "<<*pUsrLetter;
    std::cout<<"\npointer pUsrLetter memory slot: "<<pUsrLetter<<"\n";
    pressAnyKey();
    std::cout<<"usrFloat memory slot: "<<&pUsrFloat<<"\nusrFloat stored value: "<<*pUsrFloat;
    std::cout<<"\npointer usrFloat memory slot: "<<pUsrFloat<<"\n";
    pressAnyKey();
    std::cout<<"usrDouble memory slot: "<<&pUsrDouble<<"\nusrDouble stored value: "<<*pUsrDouble;
    std::cout<<"\npointer pPUsrDouble memory slot: "<<pUsrDouble<<"\n";
}

void pressAnyKey()
{
    std::cout<<"PRESS ANY KEY TO CONTINUE";
    getch();
    system("cls");
}