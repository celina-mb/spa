#ifndef MASSAGE_H
#define MASSAGE_H

#include <string>
#include "Treatment.h"

class Massage : public Treatment{
    private:
    int apptTime;
    std::string clientStatus;

    public:
    Massage(double _duration, int _apptTime);
    
    int getApptTime();
    std::string getClientStatus();

    void setClientStatus(std::string);
    void setApptTime(int);
    void setApptTime(int, std::string);
    
    void calculatePrice() override;
    void showInfo() override;
};

#endif