#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "struct.h"

void adm(void)
{
    int op;
    op = 0;
    while(op < 5)
    {
        system("cls");

        printf("***************Escolha a op��o administrativa desejada***************\n\n");

        printf("1 - Cadastro de usu�rios");
        printf("\n2 - Entrada de ve�culos");
        printf("\n3 - Manuten��o programada");
        printf("\n4 - Cadastro de clientes");
        printf("\n5 - Retornar menu anterior\n\n");

        scanf("%d", &op);

        if(op == 1)
        {
            fflush(stdin);

            struct Usuario usu1;

            printf("Digite o nome\n");
            gets(usu1.Nomusu);
            printf("Nome: %s", usu1.Nomusu);
            getch();



        }


        if(op == 2)
        {
        //Entrade de Ve�culos
        }

        if(op == 3)
        {
            system("cls");
            op = 0;

            printf("***************Escolha a op��o administrativa desejada***************\n\n");
            printf("\n1 - Manuten��o Programda");
            printf("\n2 - Vistoria veicular");
            printf("\n3 - retornar op��o anterior\n\n");

            scanf("%d", &op);

            if(op == 1)
            {
                //Manuten��o programada
            }

            if(op == 2)
            {
                //Vistoria veicular
            }
        }

        if(op == 4)
        {
            //Cadastro de Cliente
        }
    }
    system("cls");
}
