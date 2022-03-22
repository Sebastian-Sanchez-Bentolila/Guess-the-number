/* @Author: Sebastian Sanchez Bentolila
https://github.com/Sebastian-Sanchez-Bentolila */

//Modules
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

//Game Function
int juego(){
    system("cls");
	int numero, dato, contador = 1, completado = 0, verificado = 0;
	char u = char(233); //To show u with accent {ù}

	srand(time(NULL)); //Generate a random number
	dato= 1+ rand() %(100);

	do{
	    if(verificado == 0){
            cout<<"DIGITE UN N"<<u<<"MERO: "; cin>>numero; cout<<endl;//User number
            verificado = 1;
	    }


		if (numero>dato){
			cout<<"\nES UN N"<<u<<"MERO MENOR\n";
		}
		if (numero<dato){
			cout<<"\nES UN N"<<u<<"MERO MAYOR\n";
		}
		contador ++;

		cout<<"DIGITE OTRO N"<<u<<"MERO: "; cin>>numero; cout<<endl;//User number
	}while (numero != dato);


	cout<<"FELICIDADES, ADIVINASTE EL N"<<u<<"MERO :)\n"<<endl;
	cout<<"NUMERO DE INTENTO FUE: "<<contador<<endl;

    completado=1;
	return completado;
}

//Principal function
int main(){
    bool flag = true;
    int completado = 0;
    char seguir_jugando, signo_pregunta = char(168), e = char(138);

    while (flag){
        completado = juego();

        if(completado == 1){
            cout<<endl<<signo_pregunta<<"Quer"<<e<<"s seguir jugando {y: yes, n: no}?: ";
            cin>>seguir_jugando;
            cout<<endl;

            if(seguir_jugando == 'n'){
                flag = false;
                system("Pause");
            }
        }
    }
}
