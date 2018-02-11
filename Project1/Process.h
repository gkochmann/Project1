/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Process.h
 * Author: grant
 *
 * Created on February 10, 2018, 11:48 PM
 */

#ifndef PROCESS_H
#define PROCESS_H

#include <cstdlib>
#include <string>

using namespace std;

class Process{
public:
    string getName(){return name;}
    void setName(string n){name = n;}
    
    int getArrivalTime(){return arrivalTime;}
    void setArrivalTime(int val){arrivalTime = val;}
    
    int getTotalTime(){return totalTime;}
    void setTotalTime(int val){totalTime = val;}
    
    int getBlockInterval(){return blockInterval;}
    void setBlockInterval(int val){blockInterval = val;}
private:
    string name;
    int arrivalTime, totalTime, blockInterval;
};

#endif /* PROCESS_H */

