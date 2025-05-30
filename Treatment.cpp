#include "Treatment.h"

Treatment::Treatment(std::string _service, double _duration, double _basePrice) : serviceName(_service), duration(_duration), basePrice(_basePrice){}

std::string Treatment:: getServiceName(){
    return serviceName;
}

double Treatment::getDuration(){
    return duration;
}

double Treatment::getBasePrice(){
    return basePrice;
}

void Treatment::setServiceName(std::string name){
    serviceName = name;
}

void Treatment::setDuration(double d){
    duration = d;
}
void Treatment::setBasePrice(double base){
    basePrice = base;
}