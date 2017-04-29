/** PROGRAMA QUE SIMULA UMA CALCULADORA **/
#include <stdio.h>

int main()
{
        char op; //op = OPÇÃO SWITCH
        int a, b, x; /** X = RESULTADO DA OPERAÇÃO **/

        printf("Escolha sua operacao \"+ - * / \": ");
        scanf("%c",&op);

        printf("Entre com o primeiro numero: ");
        scanf("%d",&a);

        printf("Entre com o segundo numero: ");
        scanf("%d",&b);

        switch( op )
        {
            case '+':
                x = a + b;
                printf("%d", x);
                break;

            case '-':
                x = a - b;
                printf("%d", x);
                break;

            case '*':
                x = a * b;
                printf("%d", x);
                break;

            case '/':
                x = a / b;
                printf("%d", x);
                break;

            default:
                printf("Voce digitou uma operacao invalida.");

        }

}
