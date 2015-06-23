//
//  Folder.cpp
//  Battle Network Sim
//
//  Folder rules:
//      -Must contain 30 chips at all times
//      -Max of 5 Mega class chips
//      -Max of 1 Giga class chip
//
//  Created by Hayden Lueck on 2015-06-21.
//  Copyright (c) 2015 Hayden Lueck. All rights reserved.
//

#include <iostream>
#include "Folder.h"
#include "Chip.h"

Folder::Folder()
{
    name = "DefaultFolder";
    
    //set default folder chips from Battle Network 3
    chipList[0] = chipList[1] = chipList [2] = chipList[3] = returnChip(1); //Cannon
    chipList[4] = chipList[5] = chipList[6] = returnChip(11); //ShotGun
    chipList[7] = chipList[8] = chipList[9] = returnChip(12); //V-Gun
    chipList[10] = returnChip(13); //SideGun
    chipList[11] = chipList[12] = chipList[13] = returnChip(4); //AirShot1
    chipList[14] = chipList[15] = chipList[16] = returnChip(21); //MiniBomb
    chipList[17] = chipList[18] = chipList[19] = returnChip(31); //Sword
    chipList[20] = returnChip(32); //WideSwrd
    chipList[21] = chipList[22] = returnChip(134); //PanlOut1
    chipList[23] = returnChip(137); //AreaGrab
    chipList[24] = chipList[25] = chipList[26] = chipList[27] = returnChip(147); //Recov10
    chipList[28] = chipList[29] = returnChip(195); //Atk+10
}

Folder::Folder(std::string nm)
{
    name = nm;
    
    //set default folder chips from Battle Network 3
    chipList[0] = chipList[1] = chipList [2] = chipList[3] = returnChip(1); //Cannon
    chipList[4] = chipList[5] = chipList[6] = returnChip(11); //ShotGun
    chipList[7] = chipList[8] = chipList[9] = returnChip(12); //V-Gun
    chipList[10] = returnChip(13); //SideGun
    chipList[11] = chipList[12] = chipList[13] = returnChip(4); //AirShot1
    chipList[14] = chipList[15] = chipList[16] = returnChip(21); //MiniBomb
    chipList[17] = chipList[18] = chipList[19] = returnChip(31); //Sword
    chipList[20] = returnChip(32); //WideSwrd
    chipList[21] = chipList[22] = returnChip(134); //PanlOut1
    chipList[23] = returnChip(137); //AreaGrab
    chipList[24] = chipList[25] = chipList[26] = chipList[27] = returnChip(147); //Recov10
    chipList[28] = chipList[29] = returnChip(195); //Atk+10
}

void Folder::displayFolder()
{
    std::cout << "Contents of folder, " << name << ":" << std::endl;
    for(int i = 0; i < 30; i++)
        std::cout << i+1 << ": " << chipList[i].getName() << std::endl;
}

void Folder::rename()
{
    std::cout << "Enter folder name: ";
    std::getline(std::cin, name);
    
    std::cout << "Folder name changed to " << name << "." << std::endl;
}

std::string Folder::getName(){return name;}

Chip Folder::getChip(int c)
{
    Chip temp;
    
    if(c < 1 || c > 30)
        std::cout << "Invalid folder index: " << c << std::endl;
    else
        temp = chipList[c - 1];
    
    return temp;
}

void Folder::setChip(int i, Chip c)
{
    if(i < 1 || i > 30)
        std::cout << "Error, invalid index: " << i << std::endl;
    else
        chipList[i - 1] = c;
}

void Folder::setName(std::string nm)
{
    name = nm;
}

std::istream& operator >>(std::istream& ins, Folder& f)
{
    std::getline(ins, f.name);
    return ins;
}
