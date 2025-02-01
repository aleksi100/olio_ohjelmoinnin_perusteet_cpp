#include "tilit.h"

Pankkitili::Pankkitili(std::string nimi) {
    omistaja = nimi;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double summa)
{
    if(summa <= 0){
        return false;
    }
    saldo += summa;
    return true;
}

bool Pankkitili::withdraw(double summa)
{
    if(summa <= 0 || saldo - summa < 0){
        return false;
    }
    saldo -= summa;
    return true;
}

Luottotili::Luottotili(std::string nimi, double raja): Pankkitili(nimi)
{
    luottoraja = raja;
}

bool Luottotili::deposit(double summa)
{
    if(saldo+summa > 0){
        return false;
    }
    saldo += summa;
    return true;

}

bool Luottotili::withdraw(double summa)
{
    if(saldo - summa < 0 - luottoraja){
        return false;
    }
    saldo -= summa;
    return true;
}
double Luottotili::getBalance(){
    return luottoraja + saldo;
}
