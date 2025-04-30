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
    int **pPUsrNumber = &pUsrNumber;
    std::string *pUsrName = &usrName;
    std::string **pPUsrName = &pUsrName;
    char *pUsrLetter = &usrLetter;
    char **pPUsrLetter = &pUsrLetter;
    float *pUsrFloat = &usrFloat;
    float **pPUsrFloat = &pUsrFloat;
    double *pUsrDouble = &usrDouble;
    double **pPUsrDouble = &pUsrDouble;


    std::cout<<"usrName memory slot: " << &pUsrName <<"\nusrName stored value: "<<*pUsrName;
    std::cout<<"\npointer pUsrName memory slot: " << &pPUsrName<<"\n";
    pressAnyKey();
    std::cout<<"usrNumber memory slot: "<<&pUsrNumber<<"\nusrNumber stored value: "<<*pUsrNumber;
    std::cout<<"\npointer pUsrNumber memory slot: " << &pPUsrNumber<<"\n";
    pressAnyKey();
    std::cout<<"usrLetter memory slot: "<<&pUsrLetter<<"\nusrLetter stored value: "<<*pUsrLetter;
    std::cout<<"\npointer pUsrLetter memory slot: "<<&pPUsrLetter<<"\n";
    pressAnyKey();
    std::cout<<"usrFloat memory slot: "<<&pUsrFloat<<"\nusrFloat stored value: "<<*pUsrFloat;
    std::cout<<"\npointer usrFloat memory slot: "<<&pPUsrFloat<<"\n";
    pressAnyKey();
    std::cout<<"usrDouble memory slot: "<<&pUsrDouble<<"\nusrDouble stored value: "<<*pUsrDouble;
    std::cout<<"\npointer pPUsrDouble memory slot: "<<&pPUsrDouble<<"\n";

}

void pressAnyKey()
{
    std::cout<<"PRESS ANY KEY TO CONTINUE";
    getch();
    system("cls");
}