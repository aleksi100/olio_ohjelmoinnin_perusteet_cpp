#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <string.h>
#include "tilit.h"

class Asiakas
{
public:
    Asiakas(std::string, double);
    std::string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double, Asiakas &);
private:
    std::string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
