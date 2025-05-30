#ifndef TREATMENT_H
#define TREATMENT_H

#include <string>

class Treatment{
    protected:
    std::string serviceName;
    double duration;
    double basePrice;

    public:
    Treatment(std::string, double, double);

    //getters
    std::string getServiceName();
    double getDuration();
    double getBasePrice();

    //setters
    void setServiceName(std::string);
    void setDuration(double);
    void setBasePrice(double);

    //pure virtual functions
    virtual void calculatePrice() = 0;
    virtual void showInfo()=0;
};

#endif