#include <bits/stdc++.h>

using namespace std;

class Cricketer
{
public:
    int jersey_no;
    char country[100];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    Cricketer *kholi = new Cricketer;
    dhoni->jersey_no = 200;
    char country_name[100] = "India";
    strcpy(dhoni->country, country_name);

    // kholi = dhoni;
    // kholi->country = dhoni->country;
    strcpy(kholi->country, dhoni->country);
    kholi->jersey_no = dhoni->jersey_no;
    delete dhoni;

    cout << kholi->country << " " << kholi->jersey_no << endl;

    return 0;
}