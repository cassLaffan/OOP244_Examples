#ifndef PARTY_H
#define PARTY_H
/*
* Here we are going to create a Party class! The party will have a date,
* time, location, host and a dynamic guest list.
*/
#include "iostream"

class Party{
    std::string hostName;
    std::string location;
    std::string date;
    float startTime;
    float endTime;
    int maxGuests;
    int currentGuests;
    std::string* guestList;
public:
    Party();
    Party(std::string, std::string, std::string, float, float, int);

    ~Party(); // destructor

    std::string getHostName();
    void setHostName(std::string);

    std::string getPartyLocation();
    void setPartyLocation(std::string);

    std::string getPartyDate();
    void setPartyDate(std::string);
    
    float getStartTime();
    void setStartTime(float);

    float getEndTime();
    void setEndTime(float);

    int getMaxGuests();
    void setMaxGuests(int); // should only be used once

    int getCurrentGuests();

    std::string* getGuestList();
    bool addGuestToGuestList(std::string);
    bool deleteGuestFromList(std::string);
};

#endif