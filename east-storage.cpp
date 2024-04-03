/*
Write a program east-storage.cpp that asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day.
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <climits>
#include <string>

int main()
{
    std::ifstream fin("Current_Reservoir_Levels_20240403.tsv"); //used a different tsv file for this classwork

    if (fin.fail())
    {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }

    std::string junk;   // new string variable
    getline(fin, junk); // read one line from the file

    double AUGEVol, AUGEastLog, AUGWvol, AUGWestLog;
    std::string date,inputDate;
    std::cout << "Enter a date (MM/DD/YYYY) : ";
    std::cin >> inputDate;

    while (fin >> date >> AUGEVol >> AUGEastLog >> AUGWvol >> AUGWestLog)
    {
        fin.ignore(INT_MAX, '\n');

        std::cout << date << " " << AUGEVol << std::endl;

        if(date == inputDate) {
            getline(fin, date);
            std::cout << "East basin storage: " << AUGEVol << " billion gallons";
        }
    }

    fin.close();
    return 0;
}