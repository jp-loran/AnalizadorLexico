/*En este archivo se definen las funciones relacionadas a la Tabla de Simbolos*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*La tabla se símbolos se manejará como una lista ligada
cada nodo de la lista es una estructura con los campos requeridos*/
int posicion=0;
typedef struct tablaSimbolos{
    int pos;
    char* nombre;
    int tipo;
    struct tablaSimbolos* siguienteRegistro;
}tablaSimbolos;

typedef struct{
    struct tablaSimbolos* primerRegistro;
}listaSimbolos;

/*Con esta función inicializamos nuestra tabla de símbolos*/
listaSimbolos crear_tabla_simbolos(){
    listaSimbolos lista;
    lista.primerRegistro=NULL;
    return lista;
}

/*Esta función nos permite mostrar el contenido de nuestra lista ligada o tabla de símbolos
 dentro del archivo de salida que se le pase como parámetro*/
void mostrar_tabla_simbolos(FILE *archivo,listaSimbolos lista){
    if(lista.primerRegistro==NULL)
        fprintf(archivo,"Tabla de simbolos vacia");
    else{
        tablaSimbolos *actual=lista.primerRegistro;
        fprintf(archivo," TABLA DE SIMBOLOS\n");
        fprintf(archivo," _________________________________________\n");
	    fprintf(archivo,"|Posicion|     Nombre      |     Tipo    | \n");
        fprintf(archivo," -----------------------------------------\n");
        while(actual !=0){
            fprintf(archivo,"\t%d \t\t%s\t\t%d \n",actual->pos,actual->nombre,actual->tipo);
            actual=actual->siguienteRegistro;
        }
    }
}

/*Esta función permite buscar un registro por su nombre
Devuelve un -1 cuando la lista se encuentra vacía o cuando no hay coincidencia
De lo contrario devuelve un 0*/
int buscar_registro_simbolo(listaSimbolos *lista, char* nombre){
    if(lista->primerRegistro==NULL){
        return -1;
    }
    else
    {
        tablaSimbolos *actual = lista->primerRegistro;
        if(!strcmp(actual->nombre, nombre)){
            return 0;
        }
        while (actual->siguienteRegistro != 0)
        {
            actual=actual->siguienteRegistro;
            if(!strcmp(actual->nombre, nombre)){
            return posicion;
            }
        }
        return -1;
    }
    
}

/*Esta función agrega los registros a la tabla de símbolos, haciendo uso de memoria 
dinámica y validando la existencia de los nombres*/
int agregar_registro_simbolo(listaSimbolos *lista, char* nombre, int tipo){
    if(buscar_registro_simbolo(lista,nombre)==-1){
        if (lista->primerRegistro==NULL)
        {
            tablaSimbolos *registro = (tablaSimbolos*)malloc(sizeof(tablaSimbolos));
            registro->pos=posicion;
            registro->nombre=nombre;
            registro->tipo=tipo;
            registro->siguienteRegistro=NULL;
            lista->primerRegistro=registro;
            posicion ++;
            return posicion;
        }
        else
        {
            tablaSimbolos *actual = lista->primerRegistro;
            while(actual->siguienteRegistro != 0){
                actual=actual->siguienteRegistro;
                
            }
            tablaSimbolos *nuevoRegistro;
            nuevoRegistro=(tablaSimbolos*)malloc(sizeof(tablaSimbolos));
            nuevoRegistro->pos=posicion;
            nuevoRegistro->nombre=nombre;
            nuevoRegistro->tipo=tipo;
            nuevoRegistro->siguienteRegistro=NULL;
            actual->siguienteRegistro=nuevoRegistro;
            posicion ++;
            return posicion;
        }
    }
}

