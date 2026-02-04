#include <stdio.h>
#include <stdlib.h>

float AskForNumber();
char AskForOperation();
float addieren(float number1, float number2);
float subtrahieren(float number1, float number2);
float multiplizieren(float number1, float number2);
float dividieren(float number1, float number2);     

int main(void)
{

    while (1 == 1)
    {
        float input1 = AskForNumber();
        float input2 = AskForNumber();
        char operation = AskForOperation();
        switch (operation) {
            case '+': printf("%f", addieren(input1, input2));
                      printf("\n\n");
                      break;
            case '-': printf("%f", subtrahieren(input1, input2));
                      printf("\n\n");
                      break;
            case '*': printf("%f", multiplizieren(input1, input2));
                      printf("\n\n");
                      break;
            case '/': if (input2 == 0){
                        printf("Divison durch 0 nicht zulaessig!");
                        printf("\n\n");
                      }
                      else 
                      {
                        printf("%f", dividieren(input1, input2));
                        printf("\n\n");
                      }
            default:  printf("Keine gueltige Operation.");
                      printf("\n\n"); 
        }
    } 
}

float AskForNumber(){
    float input;
    printf("Zahl eingeben: ");
    scanf("%f", &input);
    printf("\n");
    return input;
}

char AskForOperation(){
    char operation;
    printf("Operation eingeben (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("\n");
    return operation;
}

float addieren(float number1, float number2){
    return number1 + number2;
}

float subtrahieren(float number1, float number2){
    return number1 - number2;
}

float multiplizieren(float number1, float number2){
    return number1 * number2;
}

float dividieren(float number1, float number2) {
    return number1 / number2;
} 