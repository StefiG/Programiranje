#include "stek.hpp"

const int MAX = 50;
int stekPodataka[MAX];
int vrhSteka = 0;

bool stekJePun(void)
{
    return (vrhSteka == MAX) ? true : false;
}

bool stekJePrazan(void)
{
    return (vrhSteka == 0) ? true : false;
}

void upisiPodatakUStek(int broj)
{
    if(vrhSteka == MAX)
    {
        cout << endl << "Stek je pun!" << endl;
    }
    else
    {
        stekPodataka[vrhSteka] = broj;
        vrhSteka++;
    }
}

int procitajPodatakIzSteka(void)
{
    if(vrhSteka == 0)
    {
        cout << endl << "Stek je prazan!" << endl;
        return INT_MIN;
    }
    else
    {
        vrhSteka--;
        return stekPodataka[vrhSteka];
    }
}
