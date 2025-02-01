#include "chef.h"
#include <iostream>

Chef::Chef(string name) {
    cout << "Chef " << name << " konstruktori" << endl;
    chefName = name;
}

Chef::~Chef()
{
    cout << "Chef " << chefName << " dekonstruktori" << endl;
}

int Chef::makeSalad(int items)
{
    int annostenMaara = (int) items/5;
    cout << "Chef " << chefName << " with " << items
         << " items can make " << annostenMaara << " salads" << endl;
    return annostenMaara;
}

int Chef::makeSoup(int items)
{
    int annostenMaara = (int) items/3;
    cout << "Chef " << chefName << " with " << items
         << " items can make " << annostenMaara << " soups" << endl;
    return annostenMaara;
}

string Chef::getName()
{
    return chefName;
}

italianChef::italianChef(string name): Chef(name){
    cout << "italianChef " << name << " konstruktori" << endl;
}
italianChef::~italianChef(){
    cout << "italianChef " << chefName << " dekonstruktori" << endl;
}
int italianChef::makepizza(int flour, int water){
    int annostenMaara = (int) min(flour/5, water/5);
    cout << "italianChef " << chefName << " can make "
         << annostenMaara << " pizzaa with " << flour
         << " flour and " << water << " water" << endl;
    return annostenMaara;

}
bool italianChef::askSecret(string salasana, int flour, int water){
    if(salasana.compare(password) == 0){
        cout << "Salasana oikein" << endl;
        makepizza(flour, water);
        return true;
    }
    else{
        cout << "Wrong password" << endl;
        return false;
    }
}
