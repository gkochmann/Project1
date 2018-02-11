/* 
 * File:   main.cpp
 * Author: Max Evans and Grant Kochmann
 *
 * Created on February 10, 2018, 10:44 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include "Process.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    if (argc != 2) {
        cerr << "Argument not specified." << endl;
        exit(1);
    }
    
    fstream inFile;
    string fileName = argv[1];
    cout << "argv[1]: " << argv[1] << endl;
    inFile.open(fileName);
    if (inFile.fail()) { // Exit program if it can't open file
        cerr << "ERROR: Cannot open text file: " << fileName << endl;
        exit(2);
    }
    
    //std::priority_queue<Process> processes = new priority_queue<Process>();
    string tempLine;
    string name;
    int arrivalTime, totalTime, blockInterval;
    while (getline(inFile, tempLine)) { // Go through line by line
        Process p;
        cout << tempLine << endl;
        std::istringstream iss(tempLine);
        iss >> name;
        iss >> std::dec >> arrivalTime;
        iss >> std::dec >> totalTime;
        iss >> std::dec >> blockInterval;
        
    }
    return 0;
}

