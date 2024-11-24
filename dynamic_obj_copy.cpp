// dynamic object copy

#include <bits/stdc++.h>

using namespace std;

class Cricketer
{

public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{

    Cricketer *dhoni = new Cricketer("India", 333);
    Cricketer *kholi = new Cricketer("India", 200);

    // kholi = dhoni;  // it's not work because change the memory location , point same location both on
    // it will work but big code 
    // kholi->country = dhoni->country;
    // kholi->jersey = dhoni->jersey;

    // we can use this 
    *kholi = *dhoni;
    delete dhoni;

    cout << kholi->country << " " << kholi->jersey << endl;

    return 0;
}