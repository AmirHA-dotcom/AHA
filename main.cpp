#include <iostream>
using namespace std;

class chemistry
{
private:
    int books = 98;
public:
    void name()
    {
        cout << "chem books\n";
    }
    friend void orgainic(chemistry);
    friend class inorganic;
};

class inorganic
{
public:
    void printer(chemistry l)
    {
        cout << l.books << "\tinorganic printed!\n";
    }
};

void orgainic(chemistry h)
{
    cout << h.books << endl;
}

int  main ()
{
    chemistry k;
    orgainic(k);

    inorganic l;
    l.printer(k);

}