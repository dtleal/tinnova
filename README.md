# tinnova exercises

Solucao para exercicios em linguagem C

## Exercicio 1
Programa para calcular o número de lâmpadas 60 watts necessárias para um determinado cômodo.

## Exercicio 2
Programa para calcular a média de saltos de um atleta

## Exercicio 3
Programa para criar e manipular um arquivo TXT

## Exercicio 4
Programa para implementacao do algoritmo Bubble Sort


## Estrutura de pastas
```
├── README.md          <- apresentação do projeto
├── /bin               <- arquivos executáveis
├── /include           <- arquivos bibliotecas
├── /src               <- arquivos fonte
```

## Makefile
```
Dentro do diretorio de arquivos fonte, existe o arquivo Makefile, que contem as instrucoes para compilar e executar o programa.
Dentro do Makefile, temos as opcoes de compilacao:
- make all: compila todos os arquivos fonte e gera os arquivos executaveis
- make clean: apaga todos os arquivos executaveis
- make calc_lamps: compila e executa o programa para calcular o numero de lampadas
- make calc_jump_average: compila e executa o programa para calcular a media de saltos
- make txt_file: compila e executa o programa para criar e manipular um arquivo txt
- make bubble_sort: compila e executa o programa para ordenar um vetor usando o algoritmo bubble sort
```

## Pre-requisitos
```
- Compilador GCC
- Makefile
```

## Como compilar
```
Dentro do diretorio de arquivos fonte, executar os comandos listados na sessao Makefile.
Todo arquivo compilado será direcionado para o diretorio bin.
Exemplo: make calc_lamps
```

## Como executar
```
Dentro do diretorio bin, executar o arquivo desejado.
Exemplo:
- ./calc_lamps
- ./calc_jump_average
- ./txt_file
- ./bubble_sort
```