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

        printf("Escolha sua operação \"+ - * / \": ");
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
            printf("Você digitou uma operacao invalida.");

        }

    }
    break;

    case 2:
        printf("Teste 2");
        break;
    }
}
