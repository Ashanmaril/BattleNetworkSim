//
//  Folder.h
//  Battle Network Sim
//
//  Created by Hayden Lueck on 2015-06-21.
//  Copyright (c) 2015 Hayden Lueck. All rights reserved.
//

#ifndef __Battle_Network_Sim__Folder__
#define __Battle_Network_Sim__Folder__

#include <stdio.h>
#include <string>
#include "Chip.h"

class Folder{
public:
    Folder();
    Folder(std::string);
    void displayFolder();
    std::string getName();
    Chip getChip(int); //returns chip from given ID
    void setChip(int, Chip);
    void setName(std::string);
    
    void rename();
    
    friend std::istream& operator >>(std::istream&, Folder&);
private:
    std::string name;
    Chip chipList[30];
};

#endif /* defined(__Battle_Network_Sim__Folder__) */
