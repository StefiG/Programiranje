#include <iostream>
#include "red.h"
using namespace std;
 const int MAX=50;
 int rP[MAX];
 int vR=0;

 bool rJPu(void)
 {
     return (vR==MAX)?true:false;
 }
 bool rJPr(void)
 {
     return (vR==0)?true:false;
 }
 void uPUR(int broj)
 {
     if(vR==MAX)
     {
         cout<<endl<<"Red je pun."<<endl;
         cout<<"Ne mozete upisati podatak."<<endl;
     }
     else{
            for(int i=vR;i<0;i--)
            rP[i]=rP[i-1];
        rP[0]=broj;
        vR++;
     }
 }
 int pPIR(void)
 {
     if(vR==0)
     {
         cout<<endl<<"Red je prazan."<<endl;
         cout<<"Nema sta da procita."<<endl;
         return INT_MIN;
     }
     else
     {
         vR--;
         return rP[vR];
     }
 }
