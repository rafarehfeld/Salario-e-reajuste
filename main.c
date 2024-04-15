#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario;
    float salario_reajustado ;
    float percentual_reajuste;
    float soma_salarios = 0;
    int total_salarios = 0;

    while (1) {
        // Leitura do sal�rio
        printf("\nDigite o salario (ou 0 para encerrar): ");
        scanf("%f", &salario);

        // Verifica se o usu�rio deseja encerrar
        if (salario == 0)
            break;

        // Calcula o reajuste de acordo com os crit�rios
        if (salario < 1000)
            {
                percentual_reajuste = 10;
            }
            else
                if (salario >= 1000 && salario <= 2000)
                {
                    percentual_reajuste = 8;
                }
                    else
                    {
                        percentual_reajuste = 7;
                    }

        // Calcula o valor do reajuste e o sal�rio reajustado
        float reajuste = salario * percentual_reajuste / 100;
        salario_reajustado = salario + reajuste;

        // Imprime o percentual de reajuste e o sal�rio reajustado
        printf("Percentual de reajuste: %.2f%%\n", percentual_reajuste);
        printf("Salario reajustado: %.2f\n", salario_reajustado);

        // Atualiza a soma dos sal�rios e o total de sal�rios
        soma_salarios = soma_salarios + salario_reajustado;
        total_salarios++;
    }

    // Calcula e imprime o sal�rio m�dio ap�s as corre��es salariais
    if (total_salarios > 0) {
        float salario_medio = soma_salarios / total_salarios;
        printf("\nSalario medio apos as correcoes salariais: %.2f\n", salario_medio);
    } else {
        printf("Nenhum salario informado.\n");
    }

    return 0;
}
