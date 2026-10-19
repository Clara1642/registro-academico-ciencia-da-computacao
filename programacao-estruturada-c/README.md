# Programação Estruturada em C

Coleção de **115 exercícios independentes** da disciplina de Programação Estruturada. Cada programa tem seu próprio `main` e está na pasta que corresponde ao conceito predominante.

| Pasta | Exercícios | Conteúdo |
| --- | ---: | --- |
| `fundamentos` | 37 | entrada e saída, condicionais, laços, funções numéricas simples |
| `vetores` | 11 | vetores 1D, busca, ordenação, soma |
| `matrizes` | 15 | matrizes, transposição, diagonais, quadrado mágico |
| `strings` | 18 | manipulação de texto, cifra de vogais, validação de código de acesso |
| `structs-e-cadastros` | 6 | cadastros com struct (funcionários, alunos, gabarito de prova) |
| `funcoes-e-ponteiros` | 16 | aritmética de ponteiros, passagem por referência, decomposição em funções |
| `arquivos` | 1 | leitura e gravação em arquivo binário |
| `revisao` | 11 | lista de revisão e simulado |

## Destaques

- **vetores/**: desde soma e busca simples até um vetor de 100 números aleatórios sem repetição, ordenado e pesquisado por busca binária (`ordenar-buscar-vetor-aleatorio.c`).
- **matrizes/**: operações usuais (soma, transposta) e problemas mais específicos, como verificação de quadrado mágico e de matriz de permutação.
- **strings/**: cifra simples trocando vogais por símbolos, validação de formato de código de acesso (letras + dígitos) e um cadastro de nomes com busca binária.
- **structs-e-cadastros/**: um sistema de gabarito que compara respostas de vários alunos contra o gabarito oficial e calcula aprovação.

## Como compilar e rodar

Cada arquivo é independente:

```bash
gcc -Wall -Wextra -std=c11 -o programa exercicios/vetores/vetor-dez-maior.c
./programa
```

Todos os arquivos compilam sem avisos com `-Wall -Wextra -std=c11`. Arquivos que geram `produtos.dat` devem ser executados em uma pasta gravável.
