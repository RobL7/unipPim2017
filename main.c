#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "struct.h"
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    CriaCarro();

    int op;

    op = 0;
    while(op != 5) //OP == 5 � DE TESTES
    {
        printf("******************** ######################## ********************\n");
        printf("*                    Escolha a Op��o Desejada                    *\n");
        printf("******************** ######################## ********************\n\n");
        printf("1 - Gest�o administrativa");
        printf("\n2 - Gest�o de loca��o");
        printf("\n3 - Financeiro");
        printf("\n4 - Encerrar aplica��o\n\n");

        scanf("%d", &op);

        if( op >= 5 )
        {
            system("cls");
            printf("\n\n\nDigite uma op��o v�lida!\n\n\n");
        }
        else
        {
            if(op == 1)
            {
                MenuAdm();
            }

            if(op == 2)
            {
               MenuLoc();
            }

            if(op == 3)
            {
                MenuFin();
            }
            if(op == 4)
            {
                system("cls");
                printf("\n\n\nPrograma ser� encerrado!");
            }

            if(op == 5)
            {
                printf("Nome do ve�culo %s", carro2.Modelo);

            }
        }
    }
}

void MenuAdm(void)
{
    int op;
    op = 0;
    while(op < 5)
    {
        system("cls");

        printf("******************** ######################## ********************\n");
        printf("*              Escolha a Op��o Administrativa Desejada           *\n");
        printf("******************** ######################## ********************\n\n");

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

            printf("******************** ######################## ********************\n");
            printf("*              Escolha a Op��o Administrativa Desejada           *\n");
            printf("******************** ######################## ********************\n\n");

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

void MenuFin(void)
{
    int op;
    op = 0;
    system("cls");

    while(op != 4)
    {

        printf("******************** ######################## ********************\n");
        printf("*               Escolha a Op��o Fincaneira Desejada              *\n");
        printf("******************** ######################## ********************\n\n");


        printf("1-Gerar Nota Fiscal");
        printf("\n2-Gerar Fatura");
        printf("\n3-Recebimentos");
        printf("\n4-Pend�ncias de Pagamento");
        printf("\n5-Retornar Menu Anterior");

        scanf("%d", &op);

        if(op == 1)
        {
            //NotaFiscal
        }

        if(op == 2)
        {
            //GerarFatura
        }

        if(op == 3)
        {
            system("cls");

            printf("******************** ######################## ********************\n");
            printf("*           Escolha a Op��o de Recebimentos Desejada             *\n");
            printf("******************** ######################## ********************\n\n");

            printf("\n1 - Contas a Pagar");
            printf("\n2 - Contas a receber");
        }
        if(op == 4)
        {
            //Pend�ncias de Pagamento
        }
    }
}

void MenuLoc(void)
{
    int op;
    op = 0;
    system ("cls");
    while(op !=3)
    {
        printf("******************** ######################## ********************\n");
        printf("*                       Gest�o de Loca��o                        *\n");
        printf("******************** ######################## ********************\n");
        printf("\n1 - Saida de Veiculos");
        printf("\n2 - Relatorios de Veiculos");
        printf("\n3 - Relatorio de Loca��es");


        scanf("%d",&op);
        //saida de veiculos
        if (op == 1)
        {
            int tpVeic,CodCli,vlrDia;
            float vlrBas;
            char DatSai[10];
            vlrBas = 80;
            //0-numero do pedido/protocolo/op<<<<<inserir aqui numero randon

            //1- Data de saida
            printf("Data da Loca��o: \n");
            gets(DatSai);

            //2- Codigo de cliente
            printf("C�digo do Cliente: \n");
            scanf(&CodCli);

            //3- Tipo de Veiculo<<<<<<<<<
            printf("Tipo de Ve�culo: \n");
            printf("1 - Hatch Compacto 1.0 , manual ,  4 portas , Ar+Dire��o \n");
            printf("2 - Hatch Compacto 1.6 , manual , 4 portas , Ar+Dire��o+Central Multim�dia \n");
            printf("3 - Sed� 1.0 , manual , 4 portas , Ar+Dire��o \n");
            printf("4 - Sed� 1.6 , automatico , 4 portas , Ar+Dire��o+Central Multim�dia \n");
            printf("5 - SUV 1.6 , manual , 4 portas , Ar+Dire��o \n");
            printf("6 - SUV 1.6 , automatico , 4 portas , Ar+Dire��o+Central Multim�dia \n");
            printf("7 - Pick-Up 2.0 , manual , 2 portas , Cabine simples , Ar+Dire��o \n");
            printf("8 - Pick-Up 2.0 , automatico , 4 portas , Cabine dupla , Ar+Dire��o+Central Multim�dia\n");
            printf("9 - Van 2.0 , automatico ,3 portas , 12 lugares , Ar+Dire��o \n");
            printf("10 - Van 2.0 , automatico , 3 portas , 16 lugares , Ar+Dire��o \n");
            scanf(&tpVeic);


            //4- Seguro
            int flgSeg;
            printf("Seguro: ");
            printf("1 - Sim    2- N�o \n");
            scanf(&flgSeg);

                if(flgSeg == 1)
                    {
                        printf("Tipo de seguro: ")
                        printf("1 - Seguro Platinum ")
                        printf("2 - Seguro Diamond")
                        printf("3 - Seguro Gold ")
                        scanf(&op);

                        float vlrSeg;

                            if(op == 1)
                                {
                                    int flgSN;
                                    printf("Cobertura de 100% da tabela FIPE, em caso de furto , roubo e colis�o \n");
                                    printf("R$ 50.000,00 de coberturas para terceiro em caso de acidente \n");
                                    printf("Comfirma ? \n");
                                    printf("1 - Sim    2- N�o ");
                                    scanf(&flgSN);
                                    vlrSeg = vlrBas*0.3;
                                    printf("Valor do Seguro por dia: %d \n",vlrBas);
                                    vlrBas = vlrBas+vlrSeg;
                                    printf("Valor da diaria acrescido do desconto: R$ ");
                                    vlrBas = vlrBas-vlrSeg;
                                    printf("Confirma ? \n")
                                    printf("1 - Sim    2- N�o \n");


                                }

                            if(op == 2 )
                                {

                                }

                }






        }

        if(op == 2)
        {
            //relatorio de veiculos
        }

        if(op == 3)
        {
        //relatorio de loca��es
        }
    }
}

void CriaCarro(void)
{
    struct Veiculo carro;

    carro.Ano = 2017;
    carro.CodVeiculo = 1;
    strcpy(carro.Modelo, "Toyota");

    struct Veiculo carro2;

    carro2.Ano = 2016;
    carro2.CodVeiculo = 2;
    strcpy(carro2.Modelo, "Corsa");
}
