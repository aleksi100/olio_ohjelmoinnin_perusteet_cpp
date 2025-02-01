#include <iostream>
#include <cstdlib>


using namespace std;

int game(int maximium)
{
    srand(007);

    // Lisätään randomiin yksi jotta saadaan alue 1 - maximium
    int luku = (rand()%maximium)+1;
    int arvaus = -1;
    int arvauksia = 0;

    while(arvaus != luku){
        arvauksia++;
        cout << "Arvaa luku: ";
        cin >> arvaus;
        if(arvaus > luku){
            cout << endl << "Arvaamasi luku on liian suuri." << endl;
        }
        if(arvaus < luku){
            cout << endl << "Arvaamasi luku on liian pieni." << endl;
        }
    }


    return arvauksia;
}

int main(void){
    int arvauksia = game(20);
    cout << endl << "Arvasit oikein." << endl;
    cout << "Yrityksia oli yhteensa " << arvauksia << endl;

}
