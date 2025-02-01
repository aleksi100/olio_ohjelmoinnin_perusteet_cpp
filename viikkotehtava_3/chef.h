#ifndef CHEF_H
#define CHEF_H
#include <string>

using namespace std;

class Chef
{
public:
    Chef(string);
    ~Chef();
    int makeSalad(int);
    int makeSoup(int);
    string getName();

protected:
    string chefName;
};

class italianChef: public Chef{
private:
    string password = "pizza";
    int flour;
    int water;
    int makepizza(int, int);

public:
    italianChef(string);
    ~italianChef();
    bool askSecret(string, int, int);
};
#endif // CHEF_H
