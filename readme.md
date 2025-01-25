# Verificador de Números Pares e Ímpares

Este programa em linguagem C permite ao usuário verificar quais números, dentro de um intervalo definido, são pares ou ímpares. Além disso, o programa conta e exibe a quantidade total de números pares encontrados.

---

## Funcionalidades

1. **Verificação de Pares e Ímpares:**
   - Determina se cada número em um intervalo é par ou ímpar.

2. **Contagem de Números Pares:**
   - Exibe a quantidade total de números pares no intervalo definido.

3. **Interação com o Usuário:**
   - Solicita ao usuário que informe o início e o fim do intervalo.

---

## Código-Fonte

```c
#include <stdio.h>

int main() 
{
    printf("\n Verificador de numeros Pares e Impares\n");
    
    int inicial, final, contador, variavel_qtd = 0;
    printf("\n Insira o numero inicial\n");
    scanf("%d", &inicial);
    
    printf("\n Insira o numero final\n");
    scanf("%d", &final);    
    
    for(contador = inicial; contador <= final; contador++){
        if(contador % 2 == 0){
            printf("O numero %d e PAR!\n", contador);
            variavel_qtd++;
        } else {
            printf("O numero %d e IMPAR!\n", contador);
        }
    }
    
    printf("A quantidade de numeros pares\n e %d", variavel_qtd);
    return(0);
}
```

---

## Estrutura do Programa

### Entrada de Dados

1. O programa solicita ao usuário:
   - Um número inicial para definir o começo do intervalo.
   - Um número final para definir o término do intervalo.

### Processamento

1. O programa utiliza um loop `for` para percorrer todos os números no intervalo definido pelo usuário.
2. Em cada iteração, verifica se o número atual é par (resto da divisão por 2 igual a 0) ou ímpar.
3. Incrementa um contador (`variavel_qtd`) para registrar a quantidade de números pares.

### Saída de Dados

1. Para cada número do intervalo:
   - Exibe se o número é par ou ímpar.
2. Após o término do loop, exibe a quantidade total de números pares encontrados no intervalo.

---

## Exemplo de Execução

### Entrada:
```plaintext
Verificador de numeros Pares e Impares

Insira o numero inicial
3

Insira o numero final
7
```

### Saída:
```plaintext
O numero 3 e IMPAR!
O numero 4 e PAR!
O numero 5 e IMPAR!
O numero 6 e PAR!
O numero 7 e IMPAR!
A quantidade de numeros pares
 e 2
```

---

## Requisitos para Execução

1. Um compilador de C, como GCC.
2. Um ambiente de desenvolvimento ou terminal para compilar e executar o programa.

---

## Como Compilar e Executar

1. Salve o código em um arquivo com a extensão `.c`, por exemplo, `verificador_pares_impares.c`.
2. Abra o terminal e navegue até o diretório onde o arquivo está salvo.
3. Compile o código com o seguinte comando:

   ```bash
   gcc verificador_pares_impares.c -o verificador_pares_impares
   ```

4. Execute o programa com o comando:

   ```bash
   ./verificador_pares_impares
   ```

---

## Considerações

- Certifique-se de que o número inicial seja menor ou igual ao número final para evitar erros no intervalo.
- Para personalizar, o código pode ser adaptado para aceitar mais condições ou exibir números ímpares também.
- Caso o intervalo seja muito grande, a saída do programa será extensa. Para evitar isso, pode-se implementar uma funcionalidade de exibição condicional.

---

## Autor

Este programa foi desenvolvido como um exemplo de manipulação de laços e condições em C, com foco na verificação e contagem de números pares e ímpares em um intervalo definido pelo usuário.
