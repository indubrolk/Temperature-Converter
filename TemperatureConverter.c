#include <stdio.h>
#include<ctype.h>

int main(){

  char unit;
  float temp;

  printf("\nIs the temperature in (F) or (C)?: ");
  scanf("%c", &unit);

  if(unit == 'C'){
    printf("Enter the temp in celcius: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("The temp in kalvin is: %.2f\n", temp);
  }
  else if(unit == 'F'){
    printf("the temp is currently in F");
    scanf("%f", &temp);
    temp = temp * 9 / 5 + 32;
    printf("The temp in celcius is: %.2f\n", temp);
  }
  else{
    printf("the %c is not a valid measure",unit);
  }

  return 0;
}
