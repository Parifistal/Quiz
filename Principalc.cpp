#include<iostream>
#include<cmath>
#include <cstdlib>
int menu(){   
  int opc;
  std::cout<<"::::::::::::Calculadora::::::::::"<<std::endl;
  std::cout<<" 1.Suma \n 2.Resta \n 3.Producto \n 4.Division \n 5.Modulo"<<std::endl;
  std::cin>>opc;
  return (opc);
  system("clear");
}
double leernumero(){
  double num;
   std::cout<<"Ingrese un numero: "<<std::endl;
   std::cin>>num;
   return num;
}
double suma(double num1, double num2){
  return(num1+num2);
}