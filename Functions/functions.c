/****************************************

Programa: Funções em C
Objetivo: Apresentar 11 funções
Data da criação: 23/05/21
Autor: Tainara Covas Nogueira

*****************************************/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1
float funcao1positivo(float valor);

//2
float funcao2null(float valor);

//3
float funcao3delta(float a, float b, float c);
float funcao3equacao(float a, float b, float c, float raiz1, float raiz2);

float funcao3null_equacao(float valor);
float funcao3positivo_equacao(float valor);

//4, 5, 6, 7
float funcao4maior2(float valor, float valor2);
float funcao5menor2(float valor, float valor2);

float funcao6maior3(float valor, float valor2, float valor3);
float funcao7menor3(float valor, float valor2, float valor3);

//8
int Dado();

//9
void funcao9_probabilidade();


//10
float funcao10_temperatura_celsius(float celsius, float farenheit);
float funcao10_temperatura_farenheit(float celsius, float farenheit);

//11
float funcao11_media1(float nota1, float nota2, float nota3);
float funcao11_media2(float nota1, float nota2, float nota3);
float funcao11_maior(float valor, float valor2, float valor3);
float funcao11_menor(float valor, float valor2, float valor3);

int main()
{	

	//VARIÁVEIS
	int opcao, dado, menu;
	float valor, valor2, valor3;
	float a, b, c, delta, raiz1, raiz2, resultado;
	float nota1, nota2, nota3, media, media2, maiorNota, menorNota;
	float celsius, farenheit, resultado2;
	//bool quit_menu = false;
	
	//APRESENTAÇÃO
	printf("Aluna: Tainara Covas Nogueira\n\n");	

	
	//MENU		
	setlocale(LC_ALL, "Portuguese");
	
	system ("cls");
	
	printf("****** Menu *******\n");
	printf(" 1 - Exercício 1 - É positivo?\n");
	printf(" 2 - Exercício 2 - É null?\n");
	printf(" 3 - Exercício 3 - Delta e Equação\n");
	printf(" 4 - Exercício 4 - Qual é o maior? (2 números)\n");
	printf(" 5 - Exercício 5 - Qual é o menor? (2 números)\n");
	printf(" 6 - Exercício 6 - Qual é o maior (3 números)\n");
	printf(" 7 - Exercício 7 - Qual é o menor? (3 números)\n");
	printf(" 8 - Exercício 8 - Sorteio do Dado\n");
	printf(" 9 - Exercício 9 - Probabilidade do Dado\n");
	printf(" 10 - Exercício 10 - Converter a temperatura de Celsius para Farenheit ou Farenheit para Celsius\n");
	printf(" 11 - Exercício 11 - Média das notas\n\n");
					
	printf("Digite a opção desejada => ");	
	scanf("%d", &opcao);		
	
	system("cls");
	switch(opcao)
	{		
		case 1:
			
			/***************************************
			Função: Positivo ou negativo?
			Objetivo: descobre se um número é positivo ou negativo
			retornará 1 caso positivo
			retornará 0 caso negativo
			****************************************/
			
			printf("Você escolheu Exercício 1 - É positivo?\n");
			
			do {
										
				printf("\nDigite um número: ");
				fflush(stdin);
				scanf("%d", &valor);
				
				resultado = funcao1positivo(valor);			
				//printf("O número que você digitou é: ", resultado);	
								
				printf("\nDigite (1) para tentar outra vez ou (2) para retornar ao menu principal: ");
				scanf("%d", &menu);
			
			}while(menu == 1);
						
			return main();
					

		case 2:
			
			/***************************************
			Função: É null?
			Objetivo: Descobre se um número é null
			****************************************/
						
			printf("Você escolheu Exercício 2 - É null?\n");
				
			do {
				printf("\nDigite um número: ");
				fflush(stdin);
				scanf("%f", &valor);
				
				resultado = funcao2null(valor);	
				
				printf("\nDigite (1) para tentar outra vez ou (2) para retornar ao menu principal: ");
				scanf("%d", &menu);
			
			}while(menu == 1);
									
			return main();
			
		case 3:
				
						
			/***************************************
			Função: Delta e Equação de segundo grau
			Objetivo: Receber três valores que são 
			coeficientes de uma equação de segundo 
			grau e retornar o valor de Delta.
			E calcular as raízes de uma equação.
			****************************************/
			
			fflush(stdin);
			printf("Você escolheu Exercício 3\n");
			
			do {
					
			printf("\n****** Menu *******\n");
			printf("1 - Cálculo do Delta\n");
			printf("2 -  Cálculo da Equação\n");			

			printf("\nAgora escolha a opção desejada: ");
			fflush(stdin);
			scanf("%d", &opcao);
								
				switch(opcao)
				{
					
					case 1:																
						printf("\nVocê escolheu Delta");
						
						printf("\nDigite o valor de a: ");
						fflush(stdin);
						scanf("%f", &a);								
						printf("Digite o valor de b: ");
						fflush(stdin);
						scanf("%f", &b);								
						printf("Digite o valor de c: ");
						fflush(stdin);
						scanf("%f", &c);
								
						resultado = funcao3delta(a, b, c);
						printf("\nO valor de delta é %.2f", resultado);
																	
						break;
								
					case 2:								
						printf("\nVocê escolheu Equação");			
							
						printf("\nDigite o valor de a: ");
						fflush(stdin);
						scanf("%f", &a);		
						fflush(stdin);						
						printf("Digite o valor de b: ");
						fflush(stdin);
						scanf("%f", &b);							
						printf("Digite o valor de c: ");
						fflush(stdin);
						scanf("%f", &c);
						
						resultado = funcao3equacao(a, b, c, raiz1, raiz2);
						break;	
						
					default:
						printf("\nOpção inválida, por favor tente novamente.\n\n");
						return main();							
				}
				
				printf("\nDigite (1) para tentar outra vez ou (2) para retornar ao menu principal: ");
				scanf("%d", &menu);
			
			}while(menu == 1);						
			return main();	
			
		case 4:
			
			/***************************************
			Função: Maior valor
			Objetivo: receber 2 números e retorna 
			maior valor.
			****************************************/			
			
			printf("Você escolheu Exercício 4 - Qual é o maior (2 números)?\n");
			
			do {
			
			printf("Digite o primeiro número: ");
			fflush(stdin);
			scanf("%f", &valor);
			
			printf("Digite o segundo número: ");
			fflush(stdin);
			scanf("%f", &valor2);
			
			resultado = funcao4maior2(valor, valor2);
			printf("O maior número é %1.f.", resultado);
			
			printf("\n\nDigite (1) para tentar outra vez ou (2) para retornar ao menu principal: ");
			scanf("%d", &menu);
			
			}while(menu == 1);
			return main();

		case 5:
			
			/***************************************
			Função: Menor valor
			Objetivo: Receber 2 números e retorna 
			menor valor.
			****************************************/
			
			printf("Você escolheu Exercício 5 - Qual é o menor?\n");
			
			do {
			
			printf("Digite o primeiro número: ");
			fflush(stdin);
			scanf("%f", &valor);
			
			printf("Digite o segundo número: ");
			fflush(stdin);
			scanf("%f", &valor2);
			
			resultado = funcao5menor2(valor, valor2);
			printf("O menor número é %1.f.", resultado);			
			
			printf("\n\nDigite (1) para tentar outra vez ou (2) para retornar ao menu principal: ");
			scanf("%d", &menu);
			
			}while(menu == 1);
			return main();

		case 6:
			
			/***************************************
			Função: Maior valor
			Objetivo: Receber 3 números e retornar 
			maior valor.
			****************************************/
			
			printf("Você escolheu Exercício 6 - Qual é o maior (3 números)\n");
			
			do {		
		
			printf("Digite o primeiro número: ");
			fflush(stdin);
			scanf("%f", &valor);
			
			printf("Digite o segundo número: ");
			fflush(stdin);
			scanf("%f", &valor2);
			
			printf("Digite o terceiro número: ");
			fflush(stdin);
			scanf("%f", &valor3);
			
			resultado = funcao6maior3(valor, valor2, valor3);
			printf("O maior número é %1.f.", resultado);
						
			printf("\n\nDigite (1) para tentar outra vez ou (2) para retornar ao menu principal: ");
			scanf("%d", &menu);
			
			}while(menu == 1);
			return main();

		case 7:
			
			/***************************************
			Função: Menor valor
			Objetivo: Receber 3 números e retornar
			menor valor.
			****************************************/
			
			printf("Você escolheu Exercício 7 - Qual é o menor? (3 números)\n");
			
			do {
			
			printf("Digite o primeiro número: ");
			fflush(stdin);
			scanf("%f", &valor);
			
			printf("Digite o segundo número: ");
			fflush(stdin);
			scanf("%f", &valor2);
			
			printf("Digite o terceiro número: ");
			fflush(stdin);
			scanf("%f", &valor3);
			
			resultado = funcao7menor3(valor, valor2, valor3);
			printf("O menor número é %1.f.", resultado);			
			
			printf("\n\nDigite (1) para tentar outra vez ou (2) para retornar ao menu principal: ");
			scanf("%d", &menu);
			
			}while(menu == 1);
			return main();

		case 8:
			
			/***************************************
			Função: Dado
			Objetivo: e retorna, através de sorteio, 
			um número de 1 até 6.
			****************************************/
			
			fflush(stdin);
			printf("Você escolheu Exercício 8 - Sorteio\n");
			
			do {
			
			//resultado = funcao8dado(dado);
			//funcao8dado();
			fflush(stdin);
			printf("O número sorteado é: %d", Dado());
			fflush(stdin);
						
			printf("\n\nDigite (1) para tentar outra vez ou (2) para retornar ao menu principal: ");
			scanf("%d", &menu);
			
			}while(menu == 1);
			return main();

		case 9:
			
			/***************************************
			Função: Probabilidade
			Objetivo: Calcular o lance de um dado 1 
			milhão de vezes. E contar quantas vezes 
			cada número saiu. E mostrar em porcentagem.
			****************************************/
			
			printf("Você escolheu Exercício 9\n");
			
			do {
			
			funcao9_probabilidade();
			
			printf("\n\nDigite (1) para tentar outra vez ou (2) para retornar ao menu principal: ");
			scanf("%d", &menu);
			
			}while(menu == 1);
			return main();

		case 10:
			
			/***************************************
			Função: Temperatura
			Objetivo: Calcular a conversão entre as 
			temperaturas Celsius e Farenheit.	
			****************************************/
			
			printf("Você escolheu o Exercício 10\n");
			
			printf("Primeiramente entre com os valores da temperatura em Celsius e Farenheit e depois escolha a opção desejada: \n\n");
			
			printf("Celsius: ");
			scanf("%f", &celsius); 
			
			printf("Farenheit: ");
			scanf("%f", &farenheit);	
			
			printf("\n****** Menu *******\n");
			printf("1 - Entrada com Celsius\n");
			printf("2 -  Entrada com Farenheit\n");			

			printf("\nAgora escolha a opção desejada: ");
			fflush(stdin);
			scanf("%d", &opcao);
								
				switch(opcao)
				{					
					case 1:																
						
						resultado = funcao10_temperatura_celsius(celsius, farenheit);
						printf("\nO valor da temperatura em Celsius é: %.2f", resultado);
																	
						break;
								
					case 2:								
	
						resultado2 = funcao10_temperatura_farenheit(celsius, farenheit);
						printf("\nO valor da temperatura em Farenheit é: %.2f", resultado2);
						
						break;	
						
					default:
						printf("Opção inválida, por favor tente novamente.\n\n");
						return main();							
				}				
			
			break;
						
		case 11:
			
			/***************************************
			Função: Média de notas
			Objetivo: Calcular a média da nota de 3
			provas, levando em consideração apenas
			as 2 notas mais altas.
			****************************************/
												
			printf("Você escolheu Exercício 11 - Média das notas\n");
			
			do {
			
			printf("Digite a nota da primeira prova: ");
			fflush(stdin);
			scanf("%f", &nota1);
			
			printf("Digite a nota da segunda prova: ");
			fflush(stdin);
			scanf("%f", &nota2);
									
			printf("Digite a nota da terceira prova: ");
			fflush(stdin);
			scanf("%f", &nota3);
			
			media = funcao11_media1(nota1, nota2, nota3);
			media2 = funcao11_media2(nota1, nota2, nota3);
			
			menorNota = funcao11_menor(nota1, nota2, nota3);
			maiorNota = funcao11_maior(nota1, nota2, nota3);
			
			printf("A media das provas é: %.2f \n", media);
			printf("A menor nota é: %.2f \n", menorNota);
			printf("A maior nota é: %.2f \n", maiorNota);
			printf("A media das das provas com as duas maiores notas é: %.2f \n", media2);
						
			printf("\n\nDigite (1) para tentar outra vez ou (2) para retornar ao menu principal: ");
			scanf("%d", &menu);
			
			}while(menu == 1);			
			return main();									
	}		
}



// CÁLCULOS DAS FUNÇÕES

float funcao1positivo(float valor)
{	
	if (valor >= 0) 
	{
		printf("O número que você digitou é positivo.\n");
		return 1;
	} 
	else
	{
		printf("O número que você digitou não é positivo.\n");
		return 0;
	}
}	
	
float funcao2null(float valor)
{	
    if(valor == 0)
	{	
    	printf("O número que você digitou é nulo.\n");
        return 1;
    }
	else 
	{	
    	printf("O número que você digitou não é nulo.\n");
        return 0;
    }
}

float funcao3positivo_equacao(float valor)
{	
	if (valor >= 0) 
	{
		return 1;
	} 
	else
	{
		return 0;
	}
}		
	
float funcao3null_equacao(float valor)
{	
    if(valor == 0)
	{	
        return 1;
    }
	else 
	{	
        return 0;
    }
}	
	
			
float funcao3delta(float a, float b, float c) {

	return ((b * b) - (4 * a * c));
	return a, b, c;
}	

float funcao3equacao(float a, float b, float c, float raiz1, float raiz2){
	
        if (funcao3null_equacao(a)) 
		{ 
			printf("'a' deve ser diferente de zero.");
        }
        else 
		{           
            if (funcao3positivo_equacao(funcao3delta(a, b, c)) || funcao3null_equacao(funcao3delta(a, b, c)))
			{
                raiz1 = ((-1) * b + sqrt(funcao3delta(a, b, c))) / (2 * a);
                raiz2 = ((-1) * b - sqrt(funcao3delta(a, b, c))) / (2 * a);
                printf("Raiz 1: %.2f\nRaiz 2: %.2f", raiz1, raiz2);
                return raiz1, raiz2;
            } 
			else 
			{                
               	raiz1 = ((-1) * b / (2 * a) + sqrt((-1) * funcao3delta(a, b, c)) / (2 * a));
                raiz2 = ((-1) * b / (2 * a) + sqrt((-1) * funcao3delta(a, b, c)) / (2 * a));
                printf("Raiz 1: %.2f\nRaiz 2: %.2f", raiz1, raiz2);
                return raiz1, raiz2;
            }
        }
}	

float funcao4maior2(float valor, float valor2)
{
	if (valor >= valor2)
	{
		return valor;
	} 
	else
	{
		return valor2;
	}
}

float funcao5menor2(float valor, float valor2)
{
	if (valor <= valor2)
	{
		return valor;
	}
	else
	{
		return valor2;
	}
}

float funcao6maior3(float valor, float valor2, float valor3)
{
    if (funcao4maior2(valor, valor2) >= valor3)
    {	
        return (funcao4maior2(valor, valor2));
    } 
	else
	{	
        return valor3;
    }
}

float funcao7menor3(float valor, float valor2, float valor3)
{
    if (funcao5menor2(valor, valor2) <= valor3)
    {	
        return (funcao5menor2(valor, valor2));
    } 
	
	else
	{	
        return valor3;
    }
}

int Dado()
{
	//return (1 + rand() % 6);
	return 1 + ( rand() % 6 );
}

void funcao9_probabilidade()
{

    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, contador;

    for (contador = 0 ; contador < 1000000 ; contador++)
        
        switch( Dado() )
        {
            case 1:
                n1++;
                break;
            case 2:
                n2++;
                break;
            case 3:
                n3++;
                break;
            case 4:
                n4++;
                break;
            case 5:
                n5++;
                break;
            case 6:
                n6++;
        }    

    printf("O numero 1 foi sorteado: %d vezes -> %.2f%%\n", n1, (n1 / 1000000.0) * 100);
    printf("O numero 2 foi sorteado: %d vezes -> %.2f%%\n", n2, (n2 / 1000000.0) * 100);
    printf("O numero 3 foi sorteado: %d vezes -> %.2f%%\n", n3, (n3 / 1000000.0) * 100);
    printf("O numero 4 foi sorteado: %d vezes -> %.2f%%\n", n4, (n4 / 1000000.0) * 100);
    printf("O numero 5 foi sorteado: %d vezes -> %.2f%%\n", n5, (n5 / 1000000.0) * 100);
    printf("O numero 6 foi sorteado: %d vezes -> %.2f%%\n", n6, (n6 / 1000000.0) * 100);

    printf("\nTotal: %d -> %.2f\n", n1 + n2 + n3 + n4 + n5 + n6,
	(n1 / 1000000.0)* 100 + (n2 / 1000000.0) * 100 + (n3 / 1000000.0) * 
	100 + (n4 / 1000000.0) * 100 + (n5 / 1000000.0) * 100 + (n6 / 1000000.0) * 100);
}



float funcao10_temperatura_celsius(float celsius, float farenheit)
{	
	//return celsius = (5 * (farenheit - 32) / 9);
	return farenheit = ((1.8 * celsius) + 32);	
}

float funcao10_temperatura_farenheit(float celsius, float farenheit)
{	
	//return farenheit = (9 * (celsius / 5) + 32);
	return farenheit = ((farenheit - 32)/1.8);
}



float funcao11_media1(float nota1, float nota2, float nota3)
{
	return ((nota1 + nota2 + nota3) / 3);
		
}

float funcao11_media2(float nota1, float nota2, float nota3)
{
	float resultado = 0;

	if (nota1 >= nota2)
	{
		if (nota2 >= nota3)
		{
			resultado = (nota1 + nota2) / 2;
			return resultado;
		}
		else 	
		{
			resultado = (nota1 + nota3) / 2;
			return resultado;
		}
	}
	else 
	{
		if (nota3 >= nota1)
		{
			resultado = (nota2 + nota3) / 2;
			return resultado;
		}

	}	
}

float funcao11_maior(float nota1, float nota2, float nota3)
{			
	if (nota1 >= nota2 & nota1 >= nota3)
	{
		return nota1;
	} 
	if (nota2 >= nota1 & nota2 >= nota3)
	{
		return nota2;
	}
	else
	{
		return nota3;
	}
}

float funcao11_menor(float nota1, float nota2, float nota3)
{
	if (nota1 <= nota2 & nota1 <= nota3)
	{
		return nota1;
	} 
	if (nota2 <= nota1 & nota2 <= nota3)
	{
		return nota2;
	}
	else
	{
		return nota3;
	}	
}
	
