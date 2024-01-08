#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <string>
#include <iostream>

void mostrarMenu();
void procesarOpcion(int& nivel_dificultad, int& cantidad_intentos, int intervalo_valores[], int& numero_secreto, int& ajuste_dificultad_dificil);
void elegirDificultad(int& nivel_dificultad);
void nivelFacil(int& cantidad_intentos, int intervalo_valores[], int& numero_secreto);
void nivelDificil(int& cantidad_intentos, int intervalo_valores[], int& numero_secreto, int& ajuste_dificultad_dificil);
void elegirIntervaloNumeros(int& cantidad_intentos, int intervalo_valores[], int& ajuste_dificultad_dificil);
void elegirNumeroSecreto(int intervalo_valores[], int& numero_secreto);





#endif