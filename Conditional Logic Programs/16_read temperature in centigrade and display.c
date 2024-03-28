/*Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/

#include <stdio.h>

 main() 
 		{
    float temperature;

    // Input temperature in centigrade
    printf("\n\n\t Enter temperature in centigrade : ");
    scanf("%f", &temperature);

    // Check temperature state and display suitable message
    if (temperature < 0) {
        printf("\n\n\t Freezing weather");
    } else if (temperature >= 0 && temperature <= 10) {
        printf("\n\n\t Very Cold weather");
    } else if (temperature > 10 && temperature <= 20) {
        printf("\n\n\t Cold weather");
    } else if (temperature > 20 && temperature <= 30) {
        printf("\n\n\t Normal in Temp");
    } else if (temperature > 30 && temperature <= 40) {
        printf("\n\n\t Its Hot");
    } else {
        printf("\n\n\t Its Very Hot");
    }

}
