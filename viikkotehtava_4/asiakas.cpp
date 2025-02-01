#include "asiakas.h"
#include <iostream>

Asiakas::Asiakas(std::string nimi, double luottoraja)
    :kayttotili(nimi), luottotili(nimi, luottoraja){
    this->nimi = nimi;
    std::cout << "Asiakkuus luotu " << nimi << std::endl;
    std::cout << "Pankkitili luotu kayttajalle " << nimi << std::endl;
    std::cout << "Luottotili luotu kayttajalle " << nimi << std::endl;
}

std::string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    std::cout << "kayttotilin saldo: " << kayttotili.getBalance() << std::endl;
    std::cout << "luottotilin saldo: " << luottotili.getBalance() << std::endl;
}

bool Asiakas::talletus(double summa)
{
    if(kayttotili.deposit(summa)){
        std::cout << "Pankkitili: talletus " << summa << " tehty.\n";
        return true;
    }
        return false;
}

bool Asiakas::nosto(double summa)
{
    if(kayttotili.withdraw(summa)){
        std::cout << "Pankkitili: nosto " << summa << " tehty.\n";
        return true;
    }
    return false;
}

bool Asiakas::luotonMaksu(double summa)
{
    if(luottotili.deposit(summa)){
        std::cout << "Luottotili: maksu " << summa << " tehty.\n";
        return true;
    }
    return false;
}

bool Asiakas::luotonNosto(double summa)
{
    if(luottotili.withdraw(summa)){
        std::cout << "Luottotili: nosto " << summa << " tehty.\n";
        return true;
    }
    return false;
}
bool Asiakas::tiliSiirto(double summa, Asiakas &kohde){
    if(kayttotili.withdraw(summa)){
        kohde.kayttotili.deposit(summa);
        std::cout << "Tilisiirto " << summa << " " << this->getNimi() << " -> " << kohde.getNimi() << std::endl;
        return true;
    }
    return false;

}
