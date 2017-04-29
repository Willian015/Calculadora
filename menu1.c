#include <stdio.h>
int main()
{
    int menu;

    printf("\nMenu escolha uma opcao: ");
    scanf("%d", &menu);

    switch ( menu )
    {
    case 1:
    {
        char op; //op = OPÇÃO SWITCH
        int a, b, x; /** X = RESULTADO DA OPERAÇÃO **/

        printf("Escolha sua operacao \"+ - * / \": ");
        scanf("%c",&op);

        printf("Insira o primeiro valor: ");
        scanf("%d",&a);

        printf("Insira o segundo valor: ");
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
    break;

    case 2:
        printf("Teste 2");
        break;
    }
}
