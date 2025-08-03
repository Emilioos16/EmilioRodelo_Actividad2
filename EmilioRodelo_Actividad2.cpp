//Codigo para realizar las 4 operaciones básicas
//suma resta multiplicación y division
//Autor Emilio Rodelo
//Fecha 03/08/2025

#include <iostream>
int main()
{
   float numero1, numero2;
   std::cout << "Escribe el primer número: ";
   std::cin >> numero1;
   
   std::cout << "Escribe el segundo número: ";
   std::cin >> numero2;
   
   float suma = numero1 + numero2;
   float resta = numero1 - numero2;
   float multiplicación = numero1 * numero2;
   float division = numero1 / numero2;
   
   std::cout << "La suma es: " << suma << std::endl;
   std::cout << "La resta es " << resta << std::endl;
   std::cout << "la multiplicación es: " << multiplicación << std::endl;
   std::cout << "La división es: " << division << std::endl;

    return 0;
}