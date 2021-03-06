//
//  Chip.h
//  Battle Network Sim
//
//  Created by Hayden Lueck on 2015-06-19.
//  Copyright (c) 2015 Hayden Lueck. All rights reserved.
//

#ifndef __Battle_Network_Sim__Chip__
#define __Battle_Network_Sim__Chip__

#include <stdio.h>
#include <string>
#include <iostream>

class Chip{
public:
    Chip();
    Chip(int); //constructor with ID given
    void setChip(int);
    void displayChip();
    void setRandom();
    std::string getName();
    int getDamage();
    int getID();
    std::string getElement();
    std::string getClass();
    
    friend std::istream& operator >>(std::istream&, Chip&);
private:
    std::string name;
    int damage;
    int ID;
    std::string chipClass;
    

    
    //chip list taken from
    //http://megaman.wikia.com/wiki/List_of_Mega_Man_Battle_Network_3_Battle_Chips
    std::string chipList[306] = {
        "Cannon",
        "HiCannon",
        "M-Cannon",
        "AirShot1",
        "AirShot2",
        "AirShot3",
        "LavaCan1",
        "LavaCan2",
        "LavaCan3",
        "Volcano",
        "ShotGun",
        "V-Gun",
        "SideGun",
        "Spreader",
        "Bubbler",
        "Bub-V",
        "BublSide",
        "HeatShot",
        "Heat-V",
        "HeatSide",
        "MiniBomb",
        "SnglBomb",
        "DublBomb",
        "TrplBomb",
        "CannBall",
        "IceBall",
        "LavaBall",
        "BlkBomb1",
        "BlkBomb2",
        "BlkBomb3",
        "Sword",
        "WideSwrd",
        "LongSwrd",
        "FireSwrd",
        "AquaSwrd",
        "ElecSwrd",
        "BambSwrd",
        "CustSwrd",
        "VarSwrd",
        "AirSwrd",
        "StepSwrd",
        "StepCros",
        "Slasher",
        "ShockWav",
        "SonicWav",
        "DynaWave",
        "BigWave",
        "GutPunch",
        "GutStrgt",
        "GutImpct",
        "DashAtk",
        "Burner",
        "Condor",
        "Burning",
        "ZapRing1",
        "ZapRing2",
        "ZapRing3",
        "IceWave1",
        "IceWave2",
        "IceWave3",
        "Yo-Yo1",
        "Yo-Yo2",
        "Yo-Yo3",
        "AirStrm1",
        "AirStrm2",
        "AirStrm3",
        "Arrow1",
        "Arrow2",
        "Arrow3",
        "Ratton1",
        "Ratton2",
        "Ratton3",
        "FireRatn",
        "Wave",
        "RedWave",
        "MudWave",
        "Tornado",
        "Spice1",
        "Spice2",
        "Spice3",
        "Shake1",
        "Shake2",
        "Shake3",
        "NoBeam1",
        "NoBeam2",
        "NoBeam3",
        "Hammer",
        "Geyser",
        "Rope1",
        "Rope2",
        "Rope3",
        "Boomer1",
        "Boomer2",
        "Boomer3",
        "PoisMask",
        "PoisFace",
        "RockArm1",
        "RockArm2",
        "RockArm3",
        "CrsShld1",
        "CrsShld2",
        "CrsShld3",
        "Magnum1",
        "Magnum2",
        "Magnum3",
        "Plasma1",
        "Plasma2",
        "Plasma3",
        "RndmMetr",
        "HoleMetr",
        "ShotMetr",
        "Needler1",
        "Needler2",
        "Needler3",
        "Totem1",
        "Totem2",
        "Totem3",
        "Sensor1",
        "Sensor2",
        "Sensor3",
        "MetaGel1",
        "MetaGel2",
        "MetaGel3",
        "Pawn",
        "Knight",
        "Rook",
        "Team1",
        "Team2",
        "TimeBomb",
        "Mine",
        "Lance",
        "Snake",
        "Guard",
        "PanlOut1",
        "PanlOut3",
        "PanlGrab",
        "AreaGrab",
        "GrabBack",
        "GrabRvng",
        "RockCube",
        "Prism",
        "Wind",
        "Fan",
        "Fanfare",
        "Discord",
        "Timpani",
        "Recov10",
        "Recov30",
        "Recov50",
        "Recov80",
        "Recov120",
        "Recov150",
        "Recov200",
        "Recov300",
        "Repair",
        "SloGauge",
        "FstGauge",
        "Panic",
        "Geddon1",
        "Geddon2",
        "Geddon3",
        "CopyDmg",
        "Invis",
        "Shadow",
        "Mole1",
        "Mole2",
        "Mole3",
        "AirShoes",
        "Barrier",
        "Barr100",
        "Barr200",
        "Aura",
        "NrthWind",
        "Mettaur",
        "Bunny",
        "Spikey",
        "Swordy",
        "Jelly",
        "Mushy",
        "Momogra",
        "KillrEye",
        "Scuttlst",
        "Hole",
        "HolyPanl",
        "LavaStge",
        "IceStage",
        "GrassStg",
        "SandStge",
        "MetlStge",
        "Snctuary",
        "AntiDmg",
        "AntiSwrd",
        "AntiNavi",
        "AntiRecv",
        "Atk+10",
        "Fire+30",
        "Aqua+30",
        "Elec+30",
        "Wood+30",
        "Navi+20",
        "Muramasa",
        "HeroSwrd",
        "ZeusHamr",
        "StandOut",
        "Salamndr",
        "WatrLine",
        "Fountain",
        "Lightning",
        "Bolt",
        "GaiaSwrd",
        "GaitaBlad",
        "Meteors",
        "Guardian",
        "Anubis",
        "GodStone",
        "OldWood",
        "Jealousy",
        "Poltrgst",
        "LifeAura",
        "FullCust",
        "Atk+30",
        "Navi+40",
        "Roll",
        "Roll V2",
        "Roll V3",
        "GutsMan",
        "GutsMan V2",
        "GutsMan V3",
        "GutsMan V4",
        "ProtoMan",
        "ProtoMn V2",
        "ProtoMn V3",
        "ProtoMn V4",
        "FlashMan",
        "FlashMn V2",
        "FlashMn V3",
        "FlashMn V4",
        "BeastMan",
        "BeastMn V2",
        "BeastMn V3",
        "BeastMn V4",
        "BubblMan",
        "BubblMn V2",
        "BubblMn V3",
        "BubblMn V4",
        "DesrtMan",
        "DesrtMn V2",
        "DesrtMn V3",
        "DesrtMn V4",
        "PlantMan",
        "PlantMn V2",
        "PlantMn V3",
        "PlantMn V4",
        "FlamMan",
        "FlamMan V2",
        "FlamMan V3",
        "FlamMan V4",
        "DrillMan",
        "DrillMn V2",
        "DrillMn V3",
        "DrillMn V4",
        "MetalMan",
        "MetalMn V2",
        "MetalMn V3",
        "MetalMn V4",
        "KingMan",
        "KingMan V2",
        "KingMan V3",
        "KingMan V4",
        "MistMan",
        "MistMan V2",
        "MistMan V3",
        "MistMan V4",
        "BowlMan",
        "BowlMan V2",
        "BowlMan V3",
        "BowlMan V4",
        "DarkMan",
        "DarkMan V2",
        "DarkMan V3",
        "DarkMan V4",
        "JapanMan",
        "JapanMn V2",
        "JapanMn V3",
        "JapanMn V4",
        "Punk",
        "FoldrBak",
        "Bass",
        "DarkAura",
        "DeltaRay",
        "AlphArmΩ",
        "GutsManV5",
        "ProtoMnV5",
        "FlashMnV5",
        "BeastMnV5",
        "BubblMnV5",
        "DesrtMnV5",
        "PlantMnV5",
        "FlamManV5",
        "DrillMnV5",
        "MetalMnV5",
        "KingManV5",
        "MistManV5",
        "BowlManV5",
        "DarkManV5",
        "JapanManV5"
    };
    
    int damageList[306] = {
        40,
        60,
        80,
        20,
        30,
        40,
        90,
        120,
        150,
        150,
        30,
        30,
        30,
        30,
        60,
        60,
        60,
        40,
        40,
        40,
        50,
        50,
        50,
        50,
        160,
        120,
        140,
        120,
        170,
        220,
        80,
        80,
        80,
        130,
        150,
        130,
        140,
        -1,
        160,
        100,
        130,
        130,
        240,
        60,
        80,
        100,
        190,
        80,
        100,
        160,
        90,
        130,
        180,
        150,
        20,
        40,
        60,
        80,
        100,
        140,
        40,
        50,
        60,
        50,
        60,
        70,
        100,
        130,
        160,
        80,
        100,
        120,
        230,
        80,
        90,
        100,
        20,
        80,
        110,
        140,
        90,
        110,
        140,
        200,
        260,
        300,
        100,
        200,
        50,
        70,
        90,
        60,
        80,
        100,
        0,
        0,
        100,
        150,
        200,
        160,
        210,
        260,
        120,
        150,
        180,
        30,
        60,
        90,
        100,
        100,
        100,
        30,
        40,
        50,
        100,
        140,
        180,
        100,
        130,
        130,
        90,
        130,
        170,
        90,
        150,
        0,
        10,
        0,
        150,
        300,
        130,
        40,
        0,
        0,
        0,
        0,
        0,
        40,
        80,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        100,
        100,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        -1,
        180,
        250,
        220,
        300,
        180,
        240,
        160,
        210,
        100,
        100,
        40,
        0,
        0,
        150,
        100,
        100,
        0,
        0,
        0,
        0,
        0,
        20,
        30,
        40,
        50,
        70,
        90,
        100,
        160,
        180,
        200,
        220,
        50,
        70,
        90,
        120,
        40,
        50,
        60,
        70,
        20,
        20,
        20,
        20,
        120,
        140,
        160,
        180,
        20,
        30,
        40,
        50,
        120,
        150,
        180,
        210,
        70,
        90,
        110,
        130,
        100,
        130,
        160,
        190,
        140,
        170,
        200,
        240,
        90,
        110,
        130,
        150,
        100,
        120,
        140,
        160,
        30,
        30,
        30,
        30,
        40,
        45,
        50,
        55,
        180,
        0,
        550,
        0,
        220,
        500,
        120,
        240,
        150,
        80,
        20,
        210,
        60,
        240,
        150,
        250,
        280,
        170,
        180,
        30,
        60
    };
};

Chip returnChip(int); //used for returning chip from given ID

#endif /* defined(__Battle_Network_Sim__Chip__) */
