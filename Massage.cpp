#include "Massage.h"
#include <iostream>

Massage::Massage(double _duration, int _apptTime): Treatment("Massage", _duration,(_duration<=60?1200:1400)), apptTime(_apptTime), clientStatus("New"){

}

int Massage::getApptTime(){
    return apptTime;
}

std::string Massage::getClientStatus() {
    return clientStatus;
}

void Massage::setClientStatus(std::string status) {
    clientStatus = status;
}

void Massage::setApptTime(int time) {
    apptTime = time;
}

void Massage::setApptTime(int time, std::string status) {
    apptTime = time;
    clientStatus = status;
}

void Massage::calculatePrice() {
    if (duration > 60) {
        basePrice += 200;
    }

    if (clientStatus == "Returning" || clientStatus == "returning") {
        basePrice *= 0.9;
    }
}

void Massage::showInfo(){
    std::cout << "Service: " << serviceName << "\n";
    std::cout << "Duration: " << duration << " minutes\n";
    std::cout << "Base Price: $" << basePrice << "\n";
    std::cout << "Time: " << apptTime << ":00\n";

    if (duration > 60) {
        std::cout << "Note: Duration exceeds 60 minutes. Surcharge applied: $200\n";
    }

    if (clientStatus == "Returning" || clientStatus == "returning") {
        std::cout << "Client Type: Returning Client\n";
        std::cout << "Note: Returning client discount applied: 10%\n";
    }

    std::cout << "Final Price: $" << basePrice << "\n";
    std::cout << "Booking Confirmed\n";
    std::cout << "========================================\n";
}
