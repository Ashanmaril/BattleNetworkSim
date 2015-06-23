//
//  Navi.h
//  Battle Network Sim
//
//  Created by Hayden Lueck on 2015-06-19.
//  Copyright (c) 2015 Hayden Lueck. All rights reserved.
//

#ifndef __Battle_Network_Sim__Navi__
#define __Battle_Network_Sim__Navi__

#include <stdio.h>
#include <string>
#include "Chip.h"
#include "Folder.h"

class Navi{
public:
    Navi();
    Navi(std::string); //constructor with Navi name given
    void displayInfo();
    void saveNavi();
    void loadNavi();
    void styleChange();
    void toggleStyle();
    void setFavChip(Chip);
    void addZenny(int);
    void renameNavi();
    void renameFolder();
    std::string getName();
    int getHP();
    int getMaxHP();
    int getZenny();
    std::string getStyle();
    Chip getFavChip();
    Folder getFolder();
private:
    std::string name;
    int HP;
    int maxHP;
    int zenny;
    std::string style;
    std::string storedStyle;
    Chip favoriteChip;
    Folder folder;
    
    std::string styleElements[4]{
        "Heat",
        "Aqua",
        "Electric",
        "Wood"
    };
    
    std::string styleTypes[6]{
        "Guts",
        "Custom",
        "Team",
        "Shield",
        "Bug",
        "Shadow"
    };
    
};

#endif /* defined(__Battle_Network_Sim__Navi__) */
