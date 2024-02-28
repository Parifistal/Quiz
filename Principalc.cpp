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
double resta(double num1, double num2){
  return(num1-num2);
}
double producto(double num1, double num2){
  return(num1*num2);
}
double division(double num1, double num2){
  return(num1/num2);
}
int main(){
    double x,y;
    switch(menu())
    {
    case 1:
        x=leernumero();
        y=leernumero();
        std::cout<<"La suma es: "<<suma(x,y)<<std::endl;
        break;
    case 2:
        x=leernumero();
        y=leernumero();
        std::cout<<"La resta es: "<<resta(x,y)<<std::endl;
        break;
    case 3:
        x=leernumero();
        y=leernumero();
        std::cout<<"El producto es: "<<producto(x,y)<<std::endl;
        break;
    case 4:
        x=leernumero();
        y=leernumero();
        std::cout<<"La division es: "<<division(x,y)<<std::endl;
        break;
    default:
        std::cout<<"Opcion invalida"<<std::endl;
        break;
    }
    return 0;
}