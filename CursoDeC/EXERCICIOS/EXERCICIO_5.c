#include <stdio.h>
#include <stdlib.h>

// 5 - Faça um algoritmo que leia o valor do salário mínimo e o valor do salário de um usuário, calcule quantos salários mínimos esse
//usuário ganha e imprima na tela o resultado. (Base para o Salário mínimo R$ 1.293,20).

int main () {

	float salario_Base = 1293.20;
	float salario_Usuario;

	printf("Qual salario voce recebe: ");
	scanf("%f", &salario_Usuario);
	printf("Voce recebe o total de: %f salarios minimos", salario_Usuario / salario_Base);

}