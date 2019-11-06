#include <iostream>
#include "red.h"
using namespace std;

int main()
{
    int broj, izbor;
    cout << endl<<"Program demonstrira rad sa redom!" << endl<<endl;
    do{
        do{
            cout<<endl<<"1. Upisivanje podatka u red"<<endl;
            cout<<"2. Citanje podatka iz reda\n"<<endl;
            cout<<"Vas izbor je: ";
            cin>>izbor;
        }while(izbor!=1&&izbor!=2);
        if(izbor==1){
            cout<<endl<<"Unesite jedan ceo broj: ";
            cin>>broj;
            uPUR(broj);
        }
        else
            cout<<pPIR();

        cout<<endl<<endl;
        cout<<"Da li zelite jos da radite sa redom? (1-Da, 0-Ne)\n" << endl;
        cin>>izbor;
    }while(izbor==1);
    return 0;
}
