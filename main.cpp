#include "Massage.h"
#include "Treatment.h"

int main() {
    // Example 1: New Client, 75 min
    Massage m1(75, 15); // 3:00 PM
    m1.calculatePrice();
    m1.showInfo();

    // Example 2: Returning Client, 60 min
    Massage m2(60, 16); // 4:00 PM
    m2.setClientStatus("Returning");
    m2.calculatePrice();
    m2.showInfo();

    return 0;
}