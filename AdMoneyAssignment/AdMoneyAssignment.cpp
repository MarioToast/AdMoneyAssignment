#include <iostream>
#include <vector>
#include <string>

struct ads {
    double AdsShown;
    double PercentageClicked;
    double MoneyPerAd;
};

void printInformation(ads currentamounts) {
    std::cout << currentamounts.AdsShown * currentamounts.PercentageClicked * currentamounts.MoneyPerAd;
}

int main()
{
    ads currentamounts{ 400, 0.25, 0.04};
    printInformation(currentamounts);
    return 0;
}