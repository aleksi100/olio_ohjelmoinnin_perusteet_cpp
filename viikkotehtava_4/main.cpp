#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas seppo("Seppo", 2000);
    Asiakas jukka("Jukka", 4000);

    seppo.talletus(1000);
    jukka.luotonNosto(230);
    seppo.tiliSiirto(500, jukka);
    std::cout << "Sepon saldo:\n";
    seppo.showSaldo();
    std::cout << "Jukan saldo:\n";
    jukka.showSaldo();



    return 0;
}
