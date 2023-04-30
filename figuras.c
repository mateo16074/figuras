#include <stdio.h>

float areacir(float radio){
    float area;
  area = 3.1416*(radio*radio);
  printf("El area del circulo es: %.2f\n",area);
  return area;
}
float percir (float radio){
    float per;
  per = 6.28*radio;
  printf("El perimetro del circulo es: %.2f\n",per);
  return per;
}
float Circulo(){
    float radio;
    printf("Ingrese el radio del Circulo: ");
  scanf("%f",&radio);
  areacir(radio);
  percir(radio);
  return radio;
}

float areatri(float base , float alt){
    float area;
  area = (base*alt)/2;
  printf("El area del Triangulo es: %.2f\n",area);
  return area;
}
float pertri(float base){
  float pert;
  pert = 3*base;
  printf("El perimetro del Triangulo es: %.2f\n",pert);
  return pert;
}
float Triangulo(){
    float base , alt;
  printf("Ingrese la base del Triangulo: ");
  scanf("%f",&base);
  printf("Ingrese la altura del Trianfulo: ");
  scanf("%f",&alt);
  areatri(base , alt);
  pertri(base);
  return base , alt; 
}

float arearec(int base , int alt){
    float area;
  area = base*alt;
  printf("El area del Rectagunlo es: %.2f\n",area);
  return area;
}
float perrec(int base , int alt){
  float per;
  per = (2*base)+(2*alt);
  printf("El perimetro del Rectangulo es: %.2f\n",per);
  return per;
}
float Rectangulo(){
    float base , alt;
  printf("Ingrese la base del Rectangulo: ");
  scanf("%f",&base);
  printf("Ingrese la altura del Rectangulo: ");
  scanf("%f",&alt);
  arearec(base , alt);
  perrec(base , alt);
  return base , alt;
}
float areacu(int base){
    float area;
  area = (base*base);
  printf("El area del Cuadrado es: %.2f\n",area);
  return area;
}
float percu(int base){
  float per;
  per = (base+base+base+base);
  printf("El perimetro del Cuadrado es: %.2f\n",per);
  return per;
}
float Cuadrado(){
    float base;
  printf("Ingrese la base del Cuadrado: ");
  scanf("%f",&base);
  areacu(base);
  percu(base);
  return base;
}

float areatra(int basema , int baseme , int alt){
    float area;
  area = ((basema+baseme)*alt)/2;
  printf("El area del Trapecio es: %.2f\n",area);
  return area;
}
float pertra(int basema , int baseme , int lados){
  float per;
  per = basema+baseme+(2*lados);
  printf("El perimetro del Trapecio es: %.2f\n",per);
  return per;
}
float Trapecio(){
    float basema , baseme , lados , alt;
  printf("Ingrese la base mayor del Trapecio: ");
  scanf("%f",&basema);
  printf("Ingrese la base menor del Trapecio: ");
  scanf("%f",&baseme);
  printf("Ingrese los lados laterales del Trapecio: ");
  scanf("%f",&lados);
  printf("Ingrese la altura del Trapecio: ");
  scanf("%f",&alt);
  areatra(basema , baseme , alt);
  pertra(basema , baseme , lados);
  return basema , baseme , lados , alt;
}

void Salir(){
  printf("Gracias por usar la calculadora de areas y perimetros <3");
}

void Menu(){
    int menu;
  
  printf("Elija la figura geométrica para realizar el cálculo del perímetro y su área\n1. Circulo\n2. Triangulo\n3. Rectangunlo\n4. Cuadrado\n5. Trapecio\n6. salir\n");
  scanf("%d",&menu);
  
   switch(menu){
    case 1: 
      Circulo();
      break;
    case 2:
      Triangulo();
      break;
    case 3: 
      Rectangulo();
      break;
    case 4: 
      Cuadrado();
      break;
    case 5: 
      Trapecio();
      break;
     case 6: 
      Salir();
      break;
 }
}

int main(void) {
  Menu();
  return 0;
}