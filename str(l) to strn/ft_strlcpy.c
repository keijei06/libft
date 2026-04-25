/* ****************************************************l********************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:36:11 by joborges          #+#    #+#             */
/*   Updated: 2026/04/25 17:07:01 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if(size > i)
	{
		dest[i] = '\0';
	}
	
	
	return (size);
}
void print_memory(char *str, int size) {
    for(int i = 0; i < size; i++) {
        if (str[i] == '\0') {
            printf("[\\0]");
        } else {
            printf("[%c]", str[i]);
        }
    }
    printf("\n");
}
int main() {
    char origem[] = "Maratona"; // Tamanho real: 8
    char destino[15];
    size_t retorno;

    printf("--- TESTES DA FT_STRLCPY ---\n\n");

    // ----------------------------------------------------------------
    // TESTE 1: size = 0
    // A função NÃO pode escrever nada no destino, mas DEVE retornar 8.
    // ----------------------------------------------------------------
    memset(destino, 'X', 15); // Sujamos a memória com 'X' de propósito
    printf("TESTE 1: size = 0 (O teste que mais reprova)\n");
    retorno = ft_strlcpy(destino, origem, 0);
    printf("Retorno esperado : 8\n");
    printf("Retorno da sua   : %zu\n", retorno);
    printf("Destino esperado : [X][X][X][X][X][X][X][X][X][X]\n");
    printf("Destino da sua   : ");
    print_memory(destino, 10);
    printf("\n");

    // ----------------------------------------------------------------
    // TESTE 2: size < tamanho da origem (Truncamento)
    // size = 5. Deve copiar 4 letras, colocar o '\0' e retornar 8.
    // ----------------------------------------------------------------
    memset(destino, 'X', 15);
    printf("TESTE 2: size = 5 (Testando o corte)\n");
    retorno = ft_strlcpy(destino, origem, 5);
    printf("Retorno esperado : 8\n");
    printf("Retorno da sua   : %zu\n", retorno);
    printf("Destino esperado : [M][a][r][a][\\0][X][X][X][X][X]\n");
    printf("Destino da sua   : ");
    print_memory(destino, 10);
    printf("\n");

    // ----------------------------------------------------------------
    // TESTE 3: size >= tamanho da origem (Cópia Total)
    // size = 12. Deve copiar tudo, colocar UM '\0' e retornar 8.
    // Diferente da strncpy, ela NÃO preenche o resto com '\0'.
    // ----------------------------------------------------------------
    memset(destino, 'X', 15);
    printf("TESTE 3: size = 12 (Copia completa)\n");
    retorno = ft_strlcpy(destino, origem, 12);
    printf("Retorno esperado : 8\n");
    printf("Retorno da sua   : %zu\n", retorno);
    printf("Destino esperado : [M][a][r][a][t][o][n][a][\\0][X][X][X]\n");
    printf("Destino da sua   : ");
    print_memory(destino, 12);
    printf("\n");

    return 0;
}
