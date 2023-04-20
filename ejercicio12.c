#include <stdio.h>

int main(){
  int n;
  printf("ingrese el numero de tres digitos\n");
  scanf("%d", &n);
  if(n < 100 || n > 999){
    printf("tienes que poner los tres digitos\n");
    return 0;
  }

  int a = (n % 10);
  int b = ((n % 100) - a) / 10;
  int c = ((n % 1000) - (b * 10) - a) / 100;
  
  if(a == 1 || b == 1 || c == 1){
    printf("el numero tiene un 1\n");
  }else{
    printf("el numero no tiene un 1\n");
  }
  
}
