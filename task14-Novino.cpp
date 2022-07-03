/******************************************************************************
Task14
Programmed by: Jolly Novino
Date Accomplished: July 3,2022

//This program involves number and loop

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

string digitName(int digit);
string oddEvenName(int digit);


int main()
{
    fstream iFile;
    iFile.open("jono.txt", ios::in);
    if (!iFile)
    {
        cout << "File not created!";
        return 0;
    }
    
    int num;
    int firstNumber = 0;
    int secondNumber = 0;

    while (!iFile.eof()) {
        iFile >> num;
        

        if (num <= 9 && num > 0) {
            firstNumber = num;
        }
        else {
            secondNumber = num;
        }
    }


    for (int i = firstNumber; i <= secondNumber; i++) {
       

        if (i <= 9 && i > 0) {
            cout << digitName(i) << endl;
           
        }
        else {
            cout << oddEvenName(i) << endl;
        }

       
    }
    
    iFile.close();

    return 0;
}



string digitName(int digit)
{
    if (digit == 1) return "one";
    if (digit == 2) return "two";
    if (digit == 3) return "three";
    if (digit == 4) return "four";
    if (digit == 5) return "five";
    if (digit == 6) return "six";
    if (digit == 7) return "seven";
    if (digit == 8) return "eight";
    if (digit == 9) return "nine";

    return "";
}

string oddEvenName(int num)
{
    if (num % 2 == 0) {
        return "even";
    }

    return "odd";
}

