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
#include "OperacionesFecha.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
/**
 * @brief Construct a new Operaciones Fecha:: Operaciones Fecha object
 * 
 * @param _fecha 
 */
OperacionesFecha::OperacionesFecha(Fecha _fecha){
    this->fecha=_fecha;
}
/**
 * @brief 
 * 
 * @param fechaV 
 * @return true 
 * @return false 
 */
bool OperacionesFecha::validarFecha(Fecha fechaV){
    bool aux;
    if(fechaV.get_anio()>=1900 &&fechaV.get_anio()<=2100){
        if(isBisiesto(fechaV.get_anio())){
            if(fechaV.get_mes()>=1 && fechaV.get_mes()<=12){
                if(fechaV.get_mes()==4 || fechaV.get_mes()==6 || fechaV.get_mes()==9 || fechaV.get_mes()==11){
                    if(fechaV.get_dia()>=1 && fechaV.get_dia()<=30){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }else if(fechaV.get_mes() == 2){
                    if(fechaV.get_dia()>=1 && fechaV.get_dia()<=29){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }else{
                    if(fechaV.get_dia()>=1 && fechaV.get_dia()<=31){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }
            }else{
                aux = false;
            }
        }
        else{
            if(fechaV.get_mes()>=1 &&fechaV.get_mes()<=12){
                if(fechaV.get_mes()==4 || fechaV.get_mes()==6 || fechaV.get_mes()==9 || fechaV.get_mes()==11){
                    if(fechaV.get_dia()>=1 && fechaV.get_dia()<=30){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }else if(fechaV.get_mes() == 2){
                    if(fechaV.get_dia()>=1 &&fechaV.get_dia()<=28){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }else{
                    if(fechaV.get_dia()>=1 && fechaV.get_dia()<=31){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }
            }else{
                aux = false;
            }
        }
    }else{
        aux = false;
    }
    return aux;
}
/**
 * @brief 
 * 
 * @param _year 
 * @return true 
 * @return false 
 */
bool OperacionesFecha::isBisiesto(int _year){
   return (_year % 4 == 0 && _year % 100 != 0 || _year % 400 == 0) ? true : false;
}
/**
 * @brief 
 * 
 * @param fec 
 * @param cuota 
 * @return Fecha* 
 */
Fecha *OperacionesFecha::generarFecha(Fecha fec, int cuota){
    Fecha *fechas=new Fecha[cuota];
    int dia,mes,anio;
    dia=fec.get_dia();
    mes=fec.get_mes();
    anio=fec.get_anio();
    for(int i=0;i<cuota;i++){
        if(mes>=12){
            anio=anio+1;
            mes=1;
            Fecha fechita(fec.get_dia(),mes,anio);
            if(validarFecha(fechita)){
                if(validarZeller(fechita)==0||validarZeller(fechita)==6){
                fechita=validarDiaLaboral(fechita);
                *(fechas+i)=fechita;
                }else{
                *(fechas+i)=fechita;
            }
            }
    }
    else{
        mes=mes+1;
            Fecha fechita(fec.get_dia(),mes,anio);
            if(validarFecha(fechita)){
                if(validarZeller(fechita)==0||validarZeller(fechita)==6){
                fechita=validarDiaLaboral(fechita);
                *(fechas+i)=fechita;
                }else{
                *(fechas+i)=fechita;
            }
            }
    }
    }
    return fechas;
}
/**
 * @brief 
 * 
 * @param fechaLab 
 * @return Fecha 
 */
Fecha OperacionesFecha::validarDiaLaboral(Fecha fechaLab){
    int dia=fechaLab.get_dia();
    int mes=fechaLab.get_mes();
    int anio=fechaLab.get_anio();
     if(validarZeller(fechaLab)==0){
         fechaLab.set_dia(dia+1);
        if(validarFecha(fechaLab)){
            dia=dia+1;
        }
        else{
            if(fechaLab.get_mes()+1>12){
                anio=anio+1;
                mes=1;
                dia=1;
            }else{
                mes=mes+1;
                dia = 1;
            }
        }
    }
    else if(validarZeller(fechaLab)==6){
        fechaLab.set_dia(dia+2);
         if(validarFecha(fechaLab)){
            dia=dia+2;
        }
        else{
            if(fechaLab.get_mes()+1>12){
                anio=anio+1;
                mes=1;
                dia=1;
            }else{
                mes=mes+1;
                dia = 1;
            }
        }
    }
    Fecha fecha1(dia,mes,anio);
    return fecha1;
}
/**
 * @brief 
 * 
 * @param fechaFer 
 * @return Fecha 
 */
Fecha OperacionesFecha::validarFeriado(Fecha fechaFer){
    int dia=fechaFer.get_dia();
    int mes=fechaFer.get_mes();
    int anio=fechaFer.get_anio();
    Fecha *feriado=new Fecha[9];
    *(feriado+0) = Fecha(1,1,1);
    *(feriado+1) = Fecha(1,5,1);
    *(feriado+2) = Fecha(24,5,1);
    *(feriado+3) = Fecha(9,8,1);
    *(feriado+4) = Fecha(9,10,1);
    *(feriado+5) = Fecha(2,11,1);
    *(feriado+6) = Fecha(3,11,1);
    *(feriado+7) = Fecha(6,12,1);
    *(feriado+8) = Fecha(25,12,1);
    for(int i=0;i<10;i++){
        if((feriado+i)->get_dia()==fechaFer.get_dia() && (feriado+i)->get_mes()==fechaFer.get_mes()){
                fechaFer.set_dia(dia+1);
            if(validarFecha(fechaFer)){
                dia=dia+1;
            }
            else{
                 if(fechaFer.get_mes()+1>12){
                    anio=anio+1;
                    mes=1;
                    dia=1;
                }else{
                    mes=mes+1;
                    dia = 1;
                }
            } 
        }
    } 
    Fecha fecha1(dia,mes,anio);
    return fecha1;
}
/**
 * @brief 
 * 
 * @param fechaZ 
 * @return int 
 */
int OperacionesFecha::validarZeller(Fecha fechaZ){
    int a_aux=(14-fechaZ.get_mes())/12;
    int y_aux=fechaZ.get_anio()-a_aux;
    int m_aux=fechaZ.get_mes()+12*a_aux-2;
    int res;
    res = (fechaZ.get_dia() + y_aux + y_aux/4 - y_aux/100 + y_aux/400 + (31*m_aux)/12) % 7;
    return res;
}