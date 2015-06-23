//
//  Navi.cpp
//  Battle Network Sim
//
//  Created by Hayden Lueck on 2015-06-19.
//  Copyright (c) 2015 Hayden Lueck. All rights reserved.
//

#include "Navi.h"
#include <iostream>
#include <string>
#include <fstream>

Navi::Navi()
{
    name = "Normal Navi";
    HP = 100;
    maxHP = 100;
    zenny = 0;
    style = "none";
    storedStyle = "none";
    Chip temp;
    favoriteChip = temp;
        
    std::cout << "Navi created." << std::endl;
    displayInfo();
    
}

Navi::Navi(std::string nm)
{
    name = nm;
    HP = 100;
    maxHP = 100;
    zenny = 0;
    style = "none";
    storedStyle = "none";
    Chip temp;
    favoriteChip = temp;
    
    std::cout << "Navi created." << std::endl;
    displayInfo();
    
}

void Navi::displayInfo()
{
    std::cout << "Displaying Navi info..." << std::endl <<
    "Navi name: " << name << std::endl <<
    "HP: " << HP << "/" << maxHP << std::endl <<
    "Zenny: " << zenny << std::endl <<
    "Style: " << style << std::endl <<
    "Fav chip: " << favoriteChip.getName() << std::endl <<
    "Folder: " << folder.getName() << std::endl;
}

void Navi::saveNavi()
{
    std::ofstream outFile;
    outFile.open("save.txt");
    
    if(!outFile)
        std::cout << "Error: save.txt not found." << std::endl;
    else
    {
        outFile <<
        name << std::endl <<
        HP << std::endl <<
        maxHP << std::endl <<
        zenny << std::endl <<
        style << std::endl <<
        storedStyle << std::endl <<
        favoriteChip.getID() << std::endl <<
        folder.getName() << std::endl;
        
        for(int i = 1; i <= 30; i++)
            outFile << folder.getChip(i).getID() << std::endl;
        
        outFile.close();
        
        std::cout << "Navi, " << name << " saved." << std::endl;
        
    }
}

void Navi::loadNavi()
{
    std::ifstream inFile;
    inFile.open("save.txt");
    
    if(!inFile)
        std::cout << "Error: save.txt not found." << std::endl;
    else
    {
        std::getline(inFile, name);
        inFile >>
        HP >>
        maxHP >>
        zenny;
        inFile.ignore();
        std::getline(inFile, style);
        std::getline(inFile, storedStyle);
        inFile >> favoriteChip;
        inFile.ignore();
        
        std::string temp;
        std::getline(inFile, temp);
        folder.setName(temp);
        
        inFile.ignore();
        
        int chipID;
        for(int i = 1; i < 30; i ++)
        {
            inFile >> chipID;
            folder.setChip(i, returnChip(chipID));
        }
        
        inFile.close();
        std::cout << "Navi, " << name << " loaded." << std::endl;
    }
}

void Navi::styleChange()
{
    std::string newStyle;
    do{
        newStyle = styleElements[rand()%4] + " " + styleTypes[rand()%6];
    }while(newStyle == style || newStyle == storedStyle);
    
    std::cout << name << " is changing!" << std::endl
    << name << " is now " << newStyle << " style!" << std::endl;
    
    char cancel;
    
    do{
        std::cout << "Keep new style? (Y/N): ";
        std::cin >> cancel;
    }while(cancel != 'y' && cancel != 'Y' && cancel != 'n' && cancel != 'N');
    
    std::cin.ignore(); //clear stream of \n
    
    if(cancel == 'n' || cancel == 'N')
    {
        //cancel style change
    }
    else
    {
        style = newStyle;
    }
    
}

void Navi::toggleStyle()
{
    std::cout << "Toggling style..." << std::endl;
    
    if(style == "none")
    {
        if(storedStyle == "none")
            std::cout << "No style to toggle." << std::endl;
        else
        {
            style = storedStyle;
            storedStyle = "none";
            std::cout << "Style set to " << style << "." << std::endl;
        }
    }
    else
    {
        storedStyle = style;
        style = "none";
        std::cout << "Style removed." << std::endl;
    }
}

void Navi::setFavChip(Chip c)
{
    favoriteChip = c;
    std::cout << name << "'s favorite chip set to " << c.getName() << "!" << std::endl;
}

void Navi::addZenny(int z)
{
    zenny += z;
    std::cout << name << " got " << z << " zenny!" << std::endl;
}

void Navi::renameNavi()
{
    char selection;
    
    do{
        std::cout << "Are you sure you want to rename your Navi? (Y/N): ";
        std::cin >> selection;
    }while(selection != 'y' && selection != 'Y' && selection != 'n' && selection != 'N');
    
    std::cin.ignore(); //clear stream of \n
    
    if(selection == 'n' || selection == 'N')
    {
        std::cout << "Navi rename cancelled." << std::endl;
    }
    else
    {
        std::cout << "Input navi name: ";
        std::getline(std::cin, name);
        
        std::cout << "Navi name changed to " << name << "!" << std::endl;
    }
    
}

void Navi::renameFolder()
{
    char selection;
    
    do{
        std::cout << "Are you sure you want to rename your folder? (Y/N): ";
        std::cin >> selection;
    }while(selection != 'y' && selection != 'Y' && selection != 'n' && selection != 'N');
    
    std::cin.ignore(); //clear stream of \n
    
    if(selection == 'n' || selection == 'N')
    {
        std::cout << "Folder rename cancelled." << std::endl;
    }
    else
    {
        folder.rename();
    }
    
}

std::string Navi::getName(){return name;}
int Navi::getHP(){return HP;}
int Navi::getMaxHP(){return maxHP;};
int Navi::getZenny(){return zenny;}
std::string Navi::getStyle(){return style;}
Chip Navi::getFavChip(){return favoriteChip;}
Folder Navi::getFolder(){return folder;}