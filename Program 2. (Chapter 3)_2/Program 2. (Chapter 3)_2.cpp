#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    ifstream inFile;
    ofstream outFile;

    double currentSalary, salaryIncrease;
    string lasName, firstName;

    inFile.open("C:/Users/sb0s/source/repos/SalaryData.txt");
    outFile.open("C:/Users/sb0s/source/repos/SalaryOut.txt");
    outFile << setprecision(2) << showpoint << fixed;
    outFile << "firstName lastName updatedSalary" << endl;
    inFile >> lasName >> firstName >> currentSalary >> salaryIncrease;
    outFile << firstName << "\t" << lasName << "\t" << currentSalary + (currentSalary * (salaryIncrease / 100)) << endl;
    inFile >> lasName >> firstName >> currentSalary >> salaryIncrease;
    outFile << firstName << "\t" << lasName << "\t" << currentSalary + (currentSalary * (salaryIncrease / 100)) << endl;
    inFile >> lasName >> firstName >> currentSalary >> salaryIncrease;
    outFile << firstName << "\t" << lasName << "\t" << currentSalary + (currentSalary * (salaryIncrease / 100)) << endl;
    inFile >> lasName >> firstName >> currentSalary >> salaryIncrease;

    inFile.close();
    outFile.close();

    return 0;

}
