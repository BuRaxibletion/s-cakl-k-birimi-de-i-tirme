#include <stdio.h>
#include <ctype.h>

int main(){
char unit;                                                              // unit = sıcaklık birimi
float temp;                                                             // temp = sıcaklık değeri

printf("\nSicaklik birimini giriniz (F) veya (C):");                    // sıcaklık olarak celcius veya fahrenheit mi girilecek?
scanf("%c", &unit);
unit = toupper(unit) ;                                                  // sıcaklık birimi küçük harfle girilse de büyük olarak kabul edilsin

if (unit == 'C')
{
printf("\nCelcius cinsinden sicakligi giriniz: ");                      // celcius girilirse fahrenheite çevirmek için girdi alınır
scanf("%f", &temp);
temp = (temp * 9 / 5) + 32;
printf("\nSicaklik fahreneit cinsinden: %.1f", temp);
}

else if(unit == 'F')
{
printf("\nFahreneit cinsinden sicakligi giriniz: ");
scanf("%f", &temp);
temp = ((temp - 32) * 5) / 9;                                            
printf("\nSicaklik Celsius cinsinden : %.1f", temp);
}

else
{
printf("n %c gecerli bir birim degil", unit);                           // celcius veya fahrenheitten başka bir birim girildi
}
return 0;
}