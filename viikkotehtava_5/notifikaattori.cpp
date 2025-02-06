#include "notifikaattori.h"
#include <iostream>

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja* uusi_seuraaja)
{
    if(seuraajat == nullptr){
        seuraajat = uusi_seuraaja;
    }
    else{
        uusi_seuraaja->next = seuraajat;
        seuraajat = uusi_seuraaja;
    }
    std::cout << "Notifikaattori lisaa seuraajan " << uusi_seuraaja->getNimi() << std::endl;

}

void Notifikaattori::poista(Seuraaja *s)
{
    Seuraaja *o = seuraajat;
    while(o != nullptr){
        if(o->next == s){
            std::cout << "Notifikaattori poistaa seuraajan " << s->getNimi() << std::endl;
            o->next = s->next;
            return;
        }
        o = o->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *o = seuraajat;
    while(o != nullptr){
        std::cout << "Jasen: " << o->getNimi() << std::endl;
        o = o->next;
    }
}

void Notifikaattori::postita(std::string viesti)
{
    Seuraaja *o = seuraajat;
    while(o != nullptr){
        o->paivitys(viesti);
        o = o->next;
    }



}
