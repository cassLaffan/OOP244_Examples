#include "Lab_Two_Party_Example.h"

Party::Party(){
    hostName.assign("");
    location.assign("");
    date.assign("");
    startTime = -1.0;
    endTime = -1.0;
    maxGuests = -1;
    currentGuests = 0;
    guestList = nullptr;
}

Party::Party(std::string name, std::string loc, std::string day, float start, float end, int max = 50){
    hostName.assign(name);
    location.assign(loc);
    date.assign(day);
    startTime = start;
    endTime = end;
    maxGuests = max;
    currentGuests = 0;
    guestList = new std::string[maxGuests];
}

Party::~Party(){
    delete [] guestList;
}

std::string Party::getHostName(){
    return hostName;
}

void Party::setHostName(std::string name){
    hostName.assign(name);
}

std::string Party::getPartyLocation(){
    return location;
}

void Party::setPartyLocation(std::string loc){
    location.assign(loc);
}

std::string Party::getPartyDate(){
    return date;
}

void Party::setPartyDate(std::string day){
    date.assign(day);
}

float Party::getStartTime(){
    return startTime;
}

void Party::setStartTime(float time){
    startTime = time;
}

float Party::getEndTime(){
    return endTime;
}

void Party::setEndTime(float time){
    endTime = time;
}

int Party::getMaxGuests(){
    return maxGuests;
}

void Party::setMaxGuests(int max){
    if(maxGuests == -1){
        maxGuests = max;
        guestList = new std::string[maxGuests];
    }
}

int Party::getCurrentGuests(){
    return currentGuests;
}

std::string* Party::getGuestList(){
    return guestList;
}

bool Party::addGuestToGuestList(std::string name){
    bool isAdded = false;

    if(!(currentGuests == maxGuests)){
        guestList[currentGuests].assign(name);
        currentGuests++; // We want to be able to add at the next spot
        isAdded = true;
    }

    return isAdded;
}

bool Party::deleteGuestFromList(std::string name){
    bool isDeleted = false;

    for(int i = 0; i <= currentGuests; i++){
        if(guestList[i] == name && i != currentGuests){
            for(int j = i; j < currentGuests; j++){
                guestList[j].assign(guestList[j + 1]);
            }
            guestList[currentGuests].assign("");
            currentGuests--;
            isDeleted = true;
        }
        else if(guestList[i] == name && i == currentGuests){
            guestList[i].assign("");
            currentGuests--;
            isDeleted = true;
        }
    }

    return isDeleted;
}