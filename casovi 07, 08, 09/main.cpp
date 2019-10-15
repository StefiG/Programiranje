#include "stek.hpp"

using namespace std;

int main(void)
{
    int broj, izbor;

    do
    {
        do
        {
            cout << endl << "1 - Upis u stek" << endl;
            cout << "2 - Citanje podatka iz steka" << endl << endl;
            cout << "Vas izbor je:\n>> ";
            cin >> izbor;
        } while(izbor != 1 && izbor != 2);

        if(izbor == 1) {
            cout << endl << "Unesite jedan ceo broj\n>> ";
            cin >> broj;
            upisiPodatakUStek(broj);
        }
        else {
            cout << procitajPodatakIzSteka();
            cout << endl << "Da li jos zelis da radis sa stekom (1 - Da, 0 - Ne)\n>> ";
            cin >> izbor;
        }

        } while(izbor == 1);

    return 0;
}
