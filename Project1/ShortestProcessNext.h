/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ShortestProcessNext.h
 * Author: grant
 *
 * Created on February 10, 2018, 10:48 PM
 */

#ifndef SHORTESTPROCESSNEXT_H
#define SHORTESTPROCESSNEXT_H

#include <queue>
#include "Process.h"

class ShortestProcessNext{
public:
    ShortestProcessNext();
    void RunNextProcess();
private:
    std::priority_queue<Process> processes;
};


#endif /* SHORTESTPROCESSNEXT_H */

