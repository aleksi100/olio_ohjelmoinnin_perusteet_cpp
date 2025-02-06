#include <iostream>
#include "notifikaattori.h"
#include "seuraaja.h"

using namespace std;

int main()
{
    Seuraaja A = Seuraaja("A");
    Seuraaja B = Seuraaja("B");
    Seuraaja C = Seuraaja("C");

    Notifikaattori handler = Notifikaattori();
    handler.lisaa(&A);
    handler.lisaa(&B);
    handler.postita("viesti 1");
    std::cout << "\n\n";
    handler.poista(&A);
    handler.postita("viesti 1");
    return 0;
}
