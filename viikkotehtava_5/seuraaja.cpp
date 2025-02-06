#include "seuraaja.h"
#include <iostream>

Seuraaja::Seuraaja(std::string nimi) {
    this->nimi = nimi;
}

std::string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(std::string viesti)
{
    std::cout << "Seuraaja " << nimi << " sai viestin " << viesti << std::endl;

}
