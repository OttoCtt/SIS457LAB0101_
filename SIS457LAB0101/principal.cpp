#include<iostream>
#include<ctype.h>

using namespace std;

int main() {
	char r;
	cout << "Hola mundo!" << endl;
	do {
		cout << "Hola me llamo Otto soy estudiante de la carrera de Ingenieria de Sistemas estoy cursando aunque con muchas fallas por mi parte aqui sigo dandole todo ahora mas que nunca." << endl;
		cout << "Tengo 22 años de edad soy un amante de la tecnologia o quiza solo me gusta estar sentado frente a la pantalla de todas formas siempre me ha intereado saber como funcionan las cosas tecnologicas desde pequeño solia desarmar juguetes o aparatos que ya no servian, muchas veces logre arreglarlas y muchas mas arruinarlas." << endl;
		cout << "He concluido mis estudios de primaria y secundaria en el colegio Loyola de Fe y Alegria que esta en la zona Jaime Mendoza tambien tengo un tiluto de tecnico medio en Diseño Grafico como algo complementario del colegio, estoy intentando sacar Tecnico superior en el tecba pero ahora que veo mi tiempo hay mas probabilidades que lo haga despues" << endl;
		cout << "Mi banda favorita hasta ahora es algo tipo ruso rock alternativo se llama Molchat Doma pero la que siempre fue es la banda de los Red Hot Chilli Peppers, gran nombre y banda. " << endl;
		cout << "Me gusta Breaking Bad una gran serie que trata de un tipo con cancer que trata de reunir la mayor cantidad de dinero para su familia antes de morir y su amigo drogadicto." << endl;
		cout << "Volver a leer? Y/N" << endl;
		do {
			cin >> r;
			r = tolower(r);
		} while (!('y' == r || 'n' == r));
	} while ('y' == r);
	system("pause");
	return 0;
}