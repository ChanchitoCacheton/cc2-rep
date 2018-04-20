//input : op1,op2 ,signo

//metodos: set, operation

//operaciones: suma,resta,multiplicacion,inversa modular

#include "Calculadora.h"
#include "inverso.h"
#include <iostream>

using namespace std;

int Modulo(int m,int n,int cont=0){

	if(m>n){
		int aux=n;
		n=m;
		m=aux;
	}
	if (n%m==0)
	{
		if (m==1)
		{
			return cont+1;
		}

		return m;
	}

	return Modulo(m,n%m,cont+1);
}

int main(){

	int n1,n2,mod;
	int opcion;

	Calculadora A;
	

	cout<<"--C A L C U L A D O R A--"<<endl;

	cout<<"menu/"<<endl;
	cout<<"__________"<<endl;
	cout<<"1. suma"<<endl;
	cout<<"2. resta"<<endl;
	cout<<"3. multiplicacion"<<endl;
	cout<<"4. modulo"<<endl;
	cout<<"5. inverso modular"<<endl;

	cout<<endl;

	cout<<"opcion: ";
	cin>>opcion;
	cout<<endl;

	switch(opcion){

		case 1: 
			cout<<"numero 1: "<<endl;
			cin>>n1;
			A.setnum1(n1);

			cout<<"numero 2: "<<endl;
			cin>>n2;
			A.setnum2(n2);

			cout<<"modulo : "<<endl;
			cin>>mod;
			A.setmod(mod);
			A.Suma();
		break;

		case 2:
			cout<<"numero 1: "<<endl;
			cin>>n1;
			A.setnum1(n1);

			cout<<"numero 2: "<<endl;
			cin>>n2;
			A.setnum2(n2);

			cout<<"modulo : "<<endl;
			cin>>mod;
			A.setmod(mod);
			A.Resta();
		break;
			
		case 3: 
			cout<<"numero 1: "<<endl;
			cin>>n1;
			A.setnum1(n1);

			cout<<"numero 2: "<<endl;
			cin>>n2;
			A.setnum2(n2);

			cout<<"modulo : "<<endl;
			cin>>mod;
			A.setmod(mod);
			A.Multiplicacion();
		break;

		case 4:
			cout<<"numero 1: "<<endl;
			cin>>n1;
			

			cout<<"numero 2: "<<endl;
			cin>>n2;
			

			cout<<"el modulo es: "<<Modulo(n1,n2,0)<<endl;
			break;
		case 5:
			cout<<"numero 1: "<<endl;
			cin>>n1;
			

			cout<<"numero 2: "<<endl;
			cin>>n2;
			
			inverso B(n1,n2);
			

			cout<<"el inverso multiplicativo es: "<<B.inversoModular()<<endl;

		break;

	}


	return 0;
}