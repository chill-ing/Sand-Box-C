#include <stdio.h>
#include <string.h>
#include <ctype.h>

double toFahrenheit(double temp)
{
    return (temp * 9/5) + 32;
}

double toCelsius(double temp)
{
    return (temp - 32) * 5/9;
}

void convertToLowerCase(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

int main()
{
    double celsius, fahrenheit;
    double result;
    char choice[20];
    printf("Celsius or Fahrenheit:\n");
    scanf("%s", choice);
    convertToLowerCase(choice);
    if (strncmp(choice, "celsius", 8) == 0) {
        printf("Temperature:\n");
        scanf("%lf", &celsius);
        result = toFahrenheit(celsius);
    } else {
        printf("Temperature:\n");
        scanf("%lf", &fahrenheit);
        result = toCelsius(fahrenheit);
    }
    printf("Converted Result: %.1lf\n", result);
    return 0;
}
