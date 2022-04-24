#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    printf("***************************\nWelcome to Atmos Calculator\n***************************\n");
    double a,b;
    char op,c;
    do{
        printf("Enter the Operands: ");
        scanf("%lf %lf",&a,&b);
        printf("Enter the Operator: "); 
        scanf(" %c",&op);
        switch(op) {
        case '+':
            printf("Addition: %d\n",a+b);
            break;
        case '-':
            printf("Subtraction: %d\n",a-b);
            break;
        case '/':
            printf("Division: %.2f\n",(float)a/b);
            break;
        case '*':
            printf("Multiplication: %.2lf\n",a*b);
            break;
        case '%': 
            printf("Remainder: %d",(int)a%(int)b);
            break;
        case '^':
            printf("Power: %lf\n",pow(a,b));
            break;
        default: printf("Wrong operator taken\n");
        }
        printf("Press any key to continue\nEnter 0 to exit\n");
        scanf(" %c",&c);
        system("cls");
    }
    while(c!='0');
    return 0;
}