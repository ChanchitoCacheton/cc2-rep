
#pragma once

#define INVERSO_H
#include <iostream>
using namespace std;

class inverso
{
    public:
        int numero, modulo;
        int contador;
        bool invers;

        inverso(int numero, int modulo){
        this -> numero = numero;
        this -> modulo = modulo;
    	}


        int contador2(){
            int res,numeroA,moduloA;
            contador=0;
            numeroA=numero;
            moduloA=modulo;
            if (numero>modulo)
            	numeroA=numero%modulo;
            for (;res>1;contador++)
            {
                res=moduloA-(moduloA/numeroA)*numeroA;
                moduloA=numeroA;
                numeroA=res;
            }

            if(res==1){
            	this->contador=contador-1;
            }
            else
            {
                invers= false;
            }

            return res;

        }
        

        int inversoModular()
        {

            int res,numeroA,moduloA;
            contador=0;
            invers=true;
            numeroA=numero;
            moduloA=modulo;
            int c[contador];
            if (numero>modulo) numeroA=numero%modulo;
            for (int i=0;res!=1;i++)
            {
                res=moduloA-(moduloA/numeroA)*numeroA;
                c[i]=moduloA/numeroA;

                moduloA=numeroA;
                numeroA=res;
            }
            int p[contador+2];
            p[0]=0;
            p[1]=1;
            int temp;
            for (int i=2;i<=contador+2;i++)
                 {
                    temp=(p[i-2]-(p[i-1]*c[i-2]))%modulo;
                    if (temp<0) temp=modulo+temp;
                    p[i]=temp;
                 }

            return p[contador+2];
        }



};


