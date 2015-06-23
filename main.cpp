//
//  main.cpp
//  Battle Network Sim
//
//  Most mechanics based off of Mega Man Battle Network 3 Blue version
//
//  features to be added:
//      -Creating/naming Navi
//      -Creating/naming chip folder, implementing folder rules
//      -Favorite chip
//      -Zennies
//      -Backpack to hold chips
//      -Folder/pack sorting, swapping chips
//      -Chip trader, buying chips, etc.
//      -Navi styles
//      -Saving/loading
//      -Battles eventually?
//
//  Created by Hayden Lueck on 2015-06-19.
//  Copyright (c) 2015 Hayden Lueck. All rights reserved.
//

#include <iostream>
#include "Navi.h"
#include "Folder.h"

int main() {
    srand(int(time(0))); //seed RNG
    std::string str;
    
    do{
        std::cout << "Enter \"start\" to create your navi, or \"exit\" to quit." << std::endl;
        std::getline(std::cin, str);
    }while(str != "start" && str != "exit");
    
    if(str == "exit")
    {
        std::cout << "Exiting..." << std::endl;
        return 0;
    }
    
    std::cout << std::endl;
    Navi navi;
    
    while(str != "exit")
    {
        std::cout << std::endl << "Enter command (help for command list): ";
        
        std::getline(std::cin, str);
        
        if(str == "help")
        {
            std::cout << "List of commands:" << std::endl
            << "displayinfo - display navi info!" << std::endl
            << "buychip - buy a chip!" << std::endl
            << "slotin - slot in your favorite chip!" << std::endl
            << "rename - give your navi a new name!" << std::endl
            << "stylechange - get a new style!" << std::endl
            << "togglestyle - turn style on and off!" << std::endl
            << "renamefldr - rename chip folder!" << std::endl
            << "displayfldr - show the contents of your chip folder!" << std::endl
            << "save - save your current navi/settings!" << std::endl
            << "load - load navi info!" << std::endl
            << "exit - quits out of Battle Network Sim!" << std::endl;
        }
        else if(str == "displayinfo")
            navi.displayInfo();
        else if(str == "buychip")
        {
            Chip chip;
            chip.setRandom();
            std::cout << navi.getName() << " got "
                << chip.getName() << "!" << std::endl;
            navi.setFavChip(chip);
        }
        else if(str == "slotin")
        {
            if(navi.getFavChip().getID() == 0)
            {
                std::cout << "No favorite chip set!" << std::endl
                << "Buy a chip to use this command!" << std::endl;
            }
            else{
                std::cout << navi.getName() << " uses " << navi.getFavChip().getName() << "!" << std::endl;
                navi.getFavChip().displayChip();
            }
        }
        else if(str == "rename")
            navi.renameNavi();
        else if(str == "stylechange")
            navi.styleChange();
        else if (str == "togglestyle")
            navi.toggleStyle();
        else if(str == "renamefldr")
            navi.renameFolder();
        else if(str == "displayfldr")
            navi.getFolder().displayFolder();
        else if(str == "save")
            navi.saveNavi();
        else if(str == "load")
            navi.loadNavi();
        else if (str == "exit")
        {
            //exit
        }
        else
            std::cout << "Command not recognized." << std::endl;
        
    }
    
    std::cout << "Exiting..." << std::endl;
    
    return 0;
}
