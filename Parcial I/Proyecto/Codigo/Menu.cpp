/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un escolastico con listas y archivos txt.

	FECHA DE CREACION:        20-11-2021
	FECHA DE MODIFICACION:    07-12-2021*/
#include "Menu.h"
#include <cstring>
#include <stdio.h>
#include <cctype>
#include <cstdlib>
/**
 * @brief 
 * 
 * @param x 
 * @param y 
 */
void Menu::gotoxy(int x,int y){
		HANDLE hcon;
		hcon=GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X=x;
		dwPos.Y=y;
		SetConsoleCursorPosition(hcon,dwPos);
}
/**
 * @brief 
 * 
 * @param titulo 
 * @param opcion 
 * @param numOpt 
 * @return int 
 */
int Menu::genMenu(string titulo, char **opcion, int numOpt){
		int select=1,tecla;
		bool bandera=true;
		do{
		system("cls");
		for(int i=35;i<87;i++){
			gotoxy(i,9);cout<<"*";
		}
		for(int i=35;i<87;i++){
			gotoxy(i,20);cout<<"*";
		}
		for(int i=10;i<20;i++){
			gotoxy(35,i);cout<<"*";
		}
		for(int i=10;i<20;i++){
			gotoxy(86,i);cout<<"*";
		}
		gotoxy(50,10); cout<<titulo;
		gotoxy(40,11 + select); cout<<"=>";
		for(int i=0;i<numOpt;i++){
			gotoxy(45,12 + i); cout<< (i+1) << "." <<*(opcion+i);
		}
		do{
			tecla=getch();
		}while(tecla!=72&&tecla!=80&&tecla!=13);
		switch(tecla){
			case 72:
				select--;
				if(select<1){
					select=numOpt;
				}
				break;
			case 80:
				select++;
				if(select>numOpt){
					select=1;
				}
				break;
			case 13:
				bandera=false;
				break;
		}
	}while(bandera);
	return select;
}
/**
 * @brief 
 * 
 * @param sel 
 */
void Menu::llamar_menu(int sel){
	Lista list;
	ListaM listm;
	ListaR listr;
	ListadoNotas lpN;
	ListaNotas listN;
	OperacionesPersona opePersona;
	OperacionesFecha opeFecha;
    ListadoPersonas lp;
	ListadoMaterias lm;
	ListadoRegistro lr;
	Profesor pf;
	Registro reg;
	Notas notas;
	Fecha *fechas;
	Fecha fecha;
	Nodo *cedulaBusq;
	NodoM *NRCbusq;
	Nodo *cedulaRe;
	NodoNotas *cedulaBus;
	Validar v;
    string telefono,cedula,nrc,nrc2,nrc3,nrc4,nrc5,nrc6,not1,not2,not3;
	int dia,mes,anio,num,opcion;
	float nota1,nota2,nota3,prom;
	bool repite=true;
	char** opc_sino=(char**)calloc(2, sizeof(char*));
	*(opc_sino+0)="SI";
	*(opc_sino+1)="NO";
	switch(sel){
		case 1:
			do{
				system("CLS");
				list=lp.leerArchivo();
                Persona persona;
                cout<<"\n\n";
                persona.set_Pnombre(v.validarLetras("Primer Nombre: ", 15,true));
                cout<<endl;
				persona.set_Snombre(v.validarLetras("Segundo Nombre: ", 15,true));
                cout<<endl;
                persona.set_apellido(v.validarLetras("Apellido: ", 20,true));
                cout<<endl;
				do{
					cout<<"FECHA DE NACIMIENTO"<<endl;
				cout<<"Ingrese anio: "; fflush(stdout); 
				int anio=stoi(v.validarNumeros("",10));
				cout<<endl;
				fecha.set_anio(anio);
				cout<<"Ingrese el mes: "; fflush(stdout);
				int mes=stoi(v.validarNumeros("",10));
				cout<<endl;
				fecha.set_mes(mes);
				cout<<"Ingrese el dia: "; fflush(stdout);
				int dia=stoi(v.validarNumeros("",10));
				cout<<endl;
				fecha.set_dia(dia);
				persona.set_edad(2021-anio); 
				}while(opeFecha.validarFecha(fecha)==false);
				do{
					persona.set_CI(v.validarCedula());
				}while(list.buscarBool(persona.get_CI()));
				cout<<endl;
                opePersona.generarCorreo(persona);
                cout<<endl;
                cout<<"Ingrese su Numero Telefonico: "<<endl;
                string telefono=v.validarNumeros("",10);
                persona.set_telefono(telefono);
				cout<<endl;
                cout<<"Ingrese el ID del Estudiante: "<<endl;
                string ID=v.validarNumeros("",5);
                persona.set_ID(ID);
                lp.agregarArchivo(persona);
				opcion = genMenu("¿Desea ingresar otra persona?", opc_sino, 2);
			}while(opcion != 2);
			getch();
			break;
		case 2:
			do{
				system("CLS");
				list=lp.leerArchivo();
				cout<<"Ingrese el numero de cedula: "<<endl;
				cedula=v.validarCedula();
                cout<<endl;
				}while(list.buscarBool(cedula)==false);
				cedulaBusq=list.buscarNodo(cedula);	
				cout<<endl;
				cout<<"  CI		Nombre		Apellido		Edad		Correo"<<endl;
				cout<<cedulaBusq->getPersona().get_CI();
				cout<<"	  "<<cedulaBusq->getPersona().get_Pnombre();
				cout<<"		  "<<cedulaBusq->getPersona().get_apellido();
				cout<<"			   "<<cedulaBusq->getPersona().get_edad();
				cout<<"	 "<<cedulaBusq->getPersona().get_correo();
				cout<<endl;
				cout<<"REGISTRO DE LAS 6 MATERIAS"<<endl;
					do{
					listm=lm.leerArchivo();
					cout<<endl<<"INGRESE EL NRC DE LA PRIMERA MATERIA A REGISTRARSE -> ";
					nrc=v.validarNumeros("",10);
					cout<<endl;
					}while(listm.buscarBool(nrc)==false);
					NRCbusq=listm.buscarNodo(nrc);
					cout<<endl;
					cout<<"  Nombre Materia		Nombre Docente		Apellido Docente	"<<endl;
					cout<<" "<<NRCbusq->getMateria().get_Nombre();
					cout<<"                         "<<NRCbusq->getMateria().get_profe().get_Pnombre();
					cout<<"                       "<<NRCbusq->getMateria().get_profe().get_apellido();
					reg.set_CI(cedula);
					reg.set_Materia1(nrc);
					do{
					listm=lm.leerArchivo();
					cout<<endl<<"INGRESE EL NRC DE LA SEGUNDA MATERIA A REGISTRARSE -> ";
					nrc2=v.validarNumeros("",10);	
					cout<<endl;
					}while(listm.buscarBool(nrc2)==false);
					NRCbusq=listm.buscarNodo(nrc2);
					cout<<endl;
					cout<<"  Nombre Materia		Nombre Docente		Apellido Docente	"<<endl;
					cout<<" "<<NRCbusq->getMateria().get_Nombre();
					cout<<"                         "<<NRCbusq->getMateria().get_profe().get_Pnombre();
					cout<<"                       "<<NRCbusq->getMateria().get_profe().get_apellido();
					reg.set_Materia2(nrc2);
					do{
					listm=lm.leerArchivo();
					cout<<endl<<"INGRESE EL NRC DE LA TERCERA MATERIA A REGISTRARSE -> ";
					nrc3=v.validarNumeros("",10);	
					cout<<endl;
					}while(listm.buscarBool(nrc3)==false);
					NRCbusq=listm.buscarNodo(nrc3);
					cout<<endl;
					cout<<"  Nombre Materia		Nombre Docente		Apellido Docente	"<<endl;
					cout<<" "<<NRCbusq->getMateria().get_Nombre();
					cout<<"                         "<<NRCbusq->getMateria().get_profe().get_Pnombre();
					cout<<"                       "<<NRCbusq->getMateria().get_profe().get_apellido();
					reg.set_Materia3(nrc3);
					do{
					listm=lm.leerArchivo();
					cout<<endl<<"INGRESE EL NRC DE LA CUARTA MATERIA A REGISTRARSE -> ";
					nrc4=v.validarNumeros("",10);	
					cout<<endl;
					}while(listm.buscarBool(nrc4)==false);
					NRCbusq=listm.buscarNodo(nrc4);
					cout<<endl;
					cout<<"  Nombre Materia		Nombre Docente		Apellido Docente	"<<endl;
					cout<<" "<<NRCbusq->getMateria().get_Nombre();
					cout<<"                         "<<NRCbusq->getMateria().get_profe().get_Pnombre();
					cout<<"                       "<<NRCbusq->getMateria().get_profe().get_apellido();
					reg.set_Materia4(nrc4);
					do{
					listm=lm.leerArchivo();
					cout<<endl<<"INGRESE EL NRC DE LA QUINTA MATERIA A REGISTRARSE -> ";
					nrc5=v.validarNumeros("",10);	
					cout<<endl;
					}while(listm.buscarBool(nrc5)==false);
					NRCbusq=listm.buscarNodo(nrc5);
					cout<<endl;
					cout<<"  Nombre Materia		Nombre Docente		Apellido Docente	"<<endl;
					cout<<" "<<NRCbusq->getMateria().get_Nombre();
					cout<<"                         "<<NRCbusq->getMateria().get_profe().get_Pnombre();
					cout<<"                       "<<NRCbusq->getMateria().get_profe().get_apellido();
					reg.set_Materia5(nrc5);
					do{
					listm=lm.leerArchivo();
					cout<<endl<<"INGRESE EL NRC DE LA SEXTA MATERIA A REGISTRARSE -> ";
					nrc6=v.validarNumeros("",10);	
					cout<<endl;
					}while(listm.buscarBool(nrc6)==false);
					NRCbusq=listm.buscarNodo(nrc6);
					cout<<endl;
					cout<<"  Nombre Materia		Nombre Docente		Apellido Docente	"<<endl;
					cout<<" "<<NRCbusq->getMateria().get_Nombre();
					cout<<"                         "<<NRCbusq->getMateria().get_profe().get_Pnombre();
					cout<<"                       "<<NRCbusq->getMateria().get_profe().get_apellido();
					reg.set_Materia6(nrc6);
					lr.agregarArchivo(reg);
					getch();
					break;
		case 3:
				do{
				system("CLS");
				listr=lr.leerArchivo();
				list=lp.leerArchivo();
				listm=lm.leerArchivo();
				cout<<"Ingrese el numero de cedula: "<<endl;
				cedula=v.validarCedula();
                cout<<endl;
				}while(listr.buscarBool(cedula)==false);
				cedulaRe=listr.buscarNodo(cedula);
				cedulaBusq=list.buscarNodo(cedula);
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia1());
				cout<<endl;
				cout<<endl<<"  CI		Nombre		Apellido		Edad		Correo"<<endl;
				cout<<cedulaBusq->getPersona().get_CI();
				cout<<"	  "<<cedulaBusq->getPersona().get_Pnombre();
				cout<<"		  "<<cedulaBusq->getPersona().get_apellido();
				cout<<"			   "<<cedulaBusq->getPersona().get_edad();
				cout<<"	 "<<cedulaBusq->getPersona().get_correo();
				cout<<endl;
				do{
				listN=lpN.leerArchivo();
				int j=0;
				float n1[3],n2[3],n3[3],n4[3],n5[3],n6[3];
				cout<<"MATERIA 1"<<endl;
				cout<<"  CI Estudiante		 NRC1           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia1();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				for (j= 0; j < 3; j++)
				{
					fflush(stdin);
					repite=true;
					do {
						
						cout<<"Ingrese la Nota del parcial "<<j+1<<" :";
						getline(cin,not1);
						if (v.validarFloat(not1)&& std::stof(not1)>0 && std::stof(not1)<=20) {
						repite = false;
						} else {
						cout << "No has ingresado un valor correcto para la nota. Intentalo nuevamente" << endl;
						}
					} while (repite);
					    n1[j]=std::stof(not1);
						not1.clear();
				}
				cout<<"MATERIA 2"<<endl;
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia2());
				cout<<"  CI Estudiante		 NRC2           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia2();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				for ( j= 0; j < 3; j++)
				{
					fflush(stdin);
					repite=true;
					do {
						
						cout<<"Ingrese la Nota del parcial "<<j+1<<" :";
						getline(cin,not1);
						if (v.validarFloat(not1)&& std::stof(not1)>0 && std::stof(not1)<=20) {
						repite = false;
						} else {
						cout << "No has ingresado un valor correcto para la nota. Intentalo nuevamente" << endl;
						}
					} while (repite);
					n2[j]=std::stof(not1);
					not1.clear();
				}
				cout<<"MATERIA 3"<<endl;
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia3());
				cout<<"  CI Estudiante		 NRC3           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia3();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				for ( j= 0; j < 3; j++)
				{
					fflush(stdin);
					repite=true;
					do {
						
						cout<<"Ingrese la Nota del parcial "<<j+1<<" :";
						getline(cin,not1);
						if (v.validarFloat(not1)&& std::stof(not1)>0 && std::stof(not1)<=20) {
						repite = false;
						} else {
						cout << "No has ingresado un valor correcto para la nota. Intentalo nuevamente" << endl;
						}
					} while (repite);
						n3[j]=std::stof(not1);
						not1.clear();
				}
				cout<<"MATERIA 4"<<endl;
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia4());
				cout<<"  CI Estudiante		 NRC4           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia4();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				for ( j= 0; j < 3; j++)
				{
					fflush(stdin);
					repite=true;
					do {
						
						cout<<"Ingrese la Nota del parcial "<<j+1<<" :";
						getline(cin,not1);
						if (v.validarFloat(not1)&& std::stof(not1)>0 && std::stof(not1)<=20) {
						repite = false;
						} else {
						cout << "No has ingresado un valor correcto para la nota. Intentalo nuevamente" << endl;
						}
					} while (repite);
					n4[j]=std::stof(not1);
					not1.clear();
				}
				cout<<"MATERIA 5"<<endl;
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia5());
				cout<<"  CI Estudiante		 NRC5           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia5();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				for ( j= 0; j < 3; j++)
				{
					fflush(stdin);
					repite=true;
					do {
						
						cout<<"Ingrese la Nota del parcial "<<j+1<<" :";
						getline(cin,not1);
						if (v.validarFloat(not1)&& std::stof(not1)>0 && std::stof(not1)<=20) {
						repite = false;
						} else {
						cout << "No has ingresado un valor correcto para la nota. Intentalo nuevamente" << endl;
						}
					} while (repite);
					n5[j]=std::stof(not1);
					not1.clear();
				}
				cout<<"MATERIA 6"<<endl;
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia6());
				cout<<"  CI Estudiante		 NRC6           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia6();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				for ( j= 0; j < 3; j++)
				{
					fflush(stdin);
					repite=true;
					do {
						
						cout<<"Ingrese la Nota del parcial "<<j+1<<" :";
						getline(cin,not1);
						if (v.validarFloat(not1)&& std::stof(not1)>0 && std::stof(not1)<=20) {
						repite = false;
						} else {
						cout << "No has ingresado un valor correcto para la nota. Intentalo nuevamente" << endl;
						}
					} while (repite);
					n6[j]=std::stof(not1);
					not1.clear();
				}				
				notas.set_materia1(n1[0],n1[1],n1[2]);
				notas.set_materia2(n2[0],n2[1],n2[2]);
				notas.set_materia3(n3[0],n3[1],n3[2]);
				notas.set_materia4(n4[0],n4[1],n4[2]);
				notas.set_materia5(n5[0],n5[1],n5[2]);
				notas.set_materia6(n6[0],n6[1],n6[2]);
				notas.set_CI(cedula);
				lpN.agregarArchivo(notas);
				getch();
				opcion = genMenu("Ã‚Â¿Desea ingresar otra persona?", opc_sino, 2);
				}while(opcion != 2);
				getch();
			break;
		case 4:
			system("CLS");
			cout<<"| LISTADO ESTUDIANTES |"<<endl;
			list=lp.leerArchivo();
			list.mostrar();
			getch();
			break;
		case 5:
			system("CLS");
			cout<<"Estudiantes y sus notas";
			do{
				system("CLS");
				listr=lr.leerArchivo();
				list=lp.leerArchivo();
				listm=lm.leerArchivo();
				listN=lpN.leerArchivo();
				cout<<"Ingrese el numero de cedula: "<<endl;
				cedula=v.validarCedula();
                cout<<endl;
				}while(listN.buscarBool(cedula)==false);
				cedulaBus=listN.buscarNodo(cedula);
				cedulaRe=listr.buscarNodo(cedula);
				cedulaBusq=list.buscarNodo(cedula);
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia1());
				cout<<endl<<"  CI		Nombre		Apellido		Edad		Correo"<<endl;
				cout<<cedulaBusq->getPersona().get_CI();
				cout<<"	  "<<cedulaBusq->getPersona().get_Pnombre();
				cout<<"		  "<<cedulaBusq->getPersona().get_apellido();
				cout<<"			   "<<cedulaBusq->getPersona().get_edad();
				cout<<"	 "<<cedulaBusq->getPersona().get_correo();
				cout<<endl;
				cout<<"  CI Estudiante		 NRC1           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia1();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				cout<<"Nota 1"<<endl;
				cout<<cedulaBus->getNotas().get_materia1()[0];
				cout<<endl<<"Nota 2"<<endl;
				cout<<cedulaBus->getNotas().get_materia1()[1];
				cout<<endl<<"Nota 3"<<endl;
				cout<<cedulaBus->getNotas().get_materia1()[2];
				cout<<endl<<"Promedio"<<endl;
				prom=(cedulaBus->getNotas().get_materia1()[0]+cedulaBus->getNotas().get_materia1()[1]+cedulaBus->getNotas().get_materia1()[2])/3;
				cout<<prom;
				if(prom>=14){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
				cout<<"\n APROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
				cout<<"\n REPROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}
				cout<<endl;
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia2());
				cout<<"  CI Estudiante		 NRC2           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia2();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				cout<<"Nota 1"<<endl;
				cout<<cedulaBus->getNotas().get_materia2()[0];
				cout<<endl<<"Nota 2"<<endl;
				cout<<cedulaBus->getNotas().get_materia2()[1];
				cout<<endl<<"Nota 3"<<endl;
				cout<<cedulaBus->getNotas().get_materia2()[2];
				cout<<endl<<"Promedio"<<endl;
				prom=(cedulaBus->getNotas().get_materia2()[0]+cedulaBus->getNotas().get_materia2()[1]+cedulaBus->getNotas().get_materia2()[2])/3;
				cout<<prom;
				if(prom>=14){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
				cout<<"\n APROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
				cout<<"\n REPROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}
				cout<<endl;
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia3());
				cout<<"  CI Estudiante		 NRC3           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia3();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				cout<<"Nota 1"<<endl;
				cout<<cedulaBus->getNotas().get_materia3()[0];
				cout<<endl<<"Nota 2"<<endl;
				cout<<cedulaBus->getNotas().get_materia3()[1];
				cout<<endl<<"Nota 3"<<endl;
				cout<<cedulaBus->getNotas().get_materia3()[2];
				cout<<endl<<"Promedio"<<endl;
				prom=(cedulaBus->getNotas().get_materia3()[0]+cedulaBus->getNotas().get_materia3()[1]+cedulaBus->getNotas().get_materia3()[2])/3;
				cout<<prom;
				if(prom>=14){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
				cout<<"\n APROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
				cout<<"\n REPROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}
				cout<<endl;
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia4());
				cout<<"  CI Estudiante		 NRC4           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia4();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				cout<<"Nota 1"<<endl;
				cout<<cedulaBus->getNotas().get_materia4()[0];
				cout<<endl<<"Nota 2"<<endl;
				cout<<cedulaBus->getNotas().get_materia4()[1];
				cout<<endl<<"Nota 3"<<endl;
				cout<<cedulaBus->getNotas().get_materia4()[2];
				cout<<endl<<"Promedio"<<endl;
				prom=(cedulaBus->getNotas().get_materia4()[0]+cedulaBus->getNotas().get_materia4()[1]+cedulaBus->getNotas().get_materia4()[2])/3;
				cout<<prom;
				if(prom>=14){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
				cout<<"\n APROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
				cout<<"\n REPROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}
				cout<<endl;
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia5());
				cout<<"  CI Estudiante		 NRC5           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia5();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				cout<<"Nota 1"<<endl;
				cout<<cedulaBus->getNotas().get_materia5()[0];
				cout<<endl<<"Nota 2"<<endl;
				cout<<cedulaBus->getNotas().get_materia5()[1];
				cout<<endl<<"Nota 3"<<endl;
				cout<<cedulaBus->getNotas().get_materia5()[2];
				cout<<endl<<"Promedio"<<endl;
				prom=(cedulaBus->getNotas().get_materia5()[0]+cedulaBus->getNotas().get_materia5()[1]+cedulaBus->getNotas().get_materia5()[2])/3;
				cout<<prom;
				if(prom>=14){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
				cout<<"\n APROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
				cout<<"\n REPROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}
				cout<<endl;
				NRCbusq=listm.buscarNodo(cedulaRe->getRegistro().get_Materia6());
				cout<<"  CI Estudiante		 NRC6           Nombre Materia              Docente "<<endl;
				cout<<cedulaRe->getRegistro().get_CI();
				cout<<"	          "<<cedulaRe->getRegistro().get_Materia6();
				cout<<"	           "<<NRCbusq->getMateria().get_Nombre();
				cout<<"	              "<<NRCbusq->getMateria().get_profe().get_Pnombre()<<" "<<NRCbusq->getMateria().get_profe().get_apellido();
				cout<<endl;
				cout<<"Nota 1"<<endl;
				cout<<cedulaBus->getNotas().get_materia6()[0];
				cout<<endl<<"Nota 2"<<endl;
				cout<<cedulaBus->getNotas().get_materia6()[1];
				cout<<endl<<"Nota 3"<<endl;
				cout<<cedulaBus->getNotas().get_materia6()[2];
				cout<<endl<<"Promedio"<<endl;
				prom=(cedulaBus->getNotas().get_materia6()[0]+cedulaBus->getNotas().get_materia6()[1]+cedulaBus->getNotas().get_materia6()[2])/3;
				cout<<prom;
				if(prom>=14){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
				cout<<"\n APROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
				cout<<"\n REPROBADO";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				}
				cout<<endl;
				getch();
			break;
		case 6:
			system("CLS");
			cout<<"| LISTADO DOCENTES Y MATERIAS ASIGNADAS |"<<endl;
			listm=lm.leerArchivo();
			listm.mostrar();
			getch();
			break;
		case 7:
			system("CLS");
			do{
				system("CLS");
				listm=lm.leerArchivo();
                Materia materia;
                cout<<"\n\n";
				int nrc;
				nrc=listm.generarNRC();
				 string num_str1(std::to_string(nrc));
				cout<<"NRC asignado: "<<num_str1;
                materia.set_NRC(num_str1);
                cout<<endl;
				materia.set_Nombre(v.validarLetras("Nombre de la materia: ", 20,true));
                cout<<endl;
				pf.set_Pnombre(v.validarLetras("Nombre docente: ", 20,true));
                cout<<endl;
				pf.set_apellido(v.validarLetras("Apellido docente: ", 20,true));
                cout<<endl;
				cout<<"Ingrese la cedula: "<<endl;
				do{
					pf.set_CI(v.validarCedula());
				}while(listm.buscarBool1(pf.get_CI()));
                cout<<endl;
				materia.set_profe(pf);
                lm.agregarArchivo(materia);
				opcion = genMenu("Â¿Desea ingresar otra persona?", opc_sino, 2);
				}while(opcion != 2);
				getch();
			break;
		case 8:
			getch();
			system(0);
	}
}
