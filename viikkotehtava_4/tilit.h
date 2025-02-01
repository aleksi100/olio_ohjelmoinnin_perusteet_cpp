#ifndef TILIT_H
#define TILIT_H
#include <string>
class Pankkitili
{
public:
    Pankkitili(std::string);
    virtual double getBalance();
    virtual bool deposit(double);
    virtual bool withdraw(double);

protected:
    std::string omistaja;
    double saldo = 0;
};
class Luottotili: public Pankkitili
{
public:
    Luottotili(std::string, double);
    bool deposit(double) override;
    bool withdraw(double) override;
    double getBalance() override;
protected:
    double luottoraja = 0;
};

#endif // TILIT_H
