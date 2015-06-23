//
//  Chip.cpp
//  Battle Network Sim
//
//  Created by Hayden Lueck on 2015-06-19.
//  Copyright (c) 2015 Hayden Lueck. All rights reserved.
//

#include "Chip.h"
#include <string>
#include <iostream>
#include <iomanip>

Chip::Chip()
{
    name = "N/A";
    damage = 0;
    ID = 0;
    chipClass = "N/A";

}

Chip::Chip(int chipID)
{
    //set defaults in case invalid ID was given
    name = "N/A";
    damage = 0;
    ID = 0;
    chipClass = "N/A";
    
    setChip(chipID);
}

void Chip::displayChip()
{
    std::cout << "Displaying chip info:" << std::endl;
    std::cout << "Chip name: " << name << std::endl
    << "Damage: ";
    if(damage == -1)
        std::cout << "???";
    else
        std::cout << damage;
    std::cout << std::endl
    << "ID: " << ID << std::endl
    << "Class: " << chipClass << std::endl;
}

void Chip::setRandom()
{
    setChip(rand()%306+1);
}

void Chip::setChip(int chipID)
{
    if(chipID <= 0 || chipID > 306)
    {
        std::cout << "error: invalid chip ID: " << chipID << std::endl;
        
        name = "N/A";
        damage = 0;
        ID = 0;
        chipClass = "N/A";

    }
    else if(chipID <= 200)
    {
        name = chipList[chipID - 1];
        damage = damageList[chipID - 1];
        ID = chipID;
        chipClass = "Standard";
    }
    else if(chipID <= 286)
    {
        name = chipList[chipID - 1];
        damage = damageList[chipID - 1];
        ID = chipID - 200;
        chipClass = "Mega";
    }
    else if (chipID <= 306)
    {
        name = chipList[chipID - 1];
        damage = damageList[chipID - 1];
        ID = chipID - 286;
        chipClass = "Giga";
    }
    else
    {
        std::cout << "This message should never appear." << std::endl;
    }
}

std::string Chip::getName(){return name;}

int Chip::getDamage(){return damage;}

int Chip::getID(){return ID;}

std::string Chip::getClass(){return chipClass;}

Chip returnChip(int i)
{
    Chip temp;
    temp.setChip(i);
    return temp;
}

std::istream& operator >>(std::istream& ins, Chip& c)
{
    ins >> c.ID;
    c.setChip(c.ID);
    return ins;
}