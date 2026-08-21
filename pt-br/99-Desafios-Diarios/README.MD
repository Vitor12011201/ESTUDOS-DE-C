## ⚡ Desafios Diários (Fora do Roadmap)
Além do estudo teórico, eu realizo um exercício prático por dia para fortalecer a lógica.

---

# 🚀 Meu Portfólio de Estudos em C

Bem-vindo ao meu repositório de aprendizado de Linguagem C! Este projeto organiza minha evolução desde a lógica básica até estruturas de dados e simulações complexas. Cada pasta foi estruturada para demonstrar competências específicas que venho desenvolvendo.

---

## 📂 Organização do Repositório

### [01-Fundamentos](./01-Fundamentos(Exercicios))
**O que encontrará aqui:**
A base da minha jornada. Exercícios que demonstram o domínio da sintaxe essencial da linguagem.
* **Competências:** Manipulação de variáveis (`int`, `float`), leitura/escrita de dados (`scanf`/`printf`), operadores aritméticos e estruturas condicionais (`if`, `else if`, `else`).
* **Destaque:** Exercícios de verificação de paridade e cálculo de proporcionalidade.

### [02-Funcoes](./02-Funcoes(Exercicios))
**O que encontrará aqui:**
A transição do código sequencial para a programação modular.
* **Competências:** Criação de funções personalizadas, passagem de parâmetros, retorno de valores e o conceito de responsabilidade única.
* **Destaque:** Funções que encapsulam lógica de comparação e verificação de sinais.

### [03-Simulacoes](./03-Simulacoes(Exercicios))
**O que encontrará aqui:**
Aplicações que utilizam recursos do sistema e lógica de não-determinismo.
* **Competências:** Uso de bibliotecas de sistema (`time.h`, `stdlib.h`), geração de números pseudo-aleatórios (`rand`, `srand`) e simulação de eventos em tempo real.
* **Destaque:** Testes de aleatoriedade e simuladores de placares.

### [04-Ponteiros](./04-Ponteiros(Exercicios))
**O que encontrará aqui:**
A exploração do "superpoder" da linguagem C: a manipulação direta de endereços de memória.
* **Competências:** Entendimento de endereços (`&`), operadores de desreferenciação (`*`), aritmética de ponteiros, passagem de parâmetros por referência e a relação intrínseca entre ponteiros e arrays.
* **Destaque:** Implementações de troca de valores (`swap`) e funções que modificam múltiplas variáveis simultaneamente através da memória.

### [05-Arrays](./05-Arrays(Exercicios))
**O que encontrará aqui:**
Gerenciamento de coleções de dados e manipulação de memória.
* **Competências:** Vetores unidimensionais (arrays de números), matrizes (arrays de strings), laços de repetição (`for`), busca de valores extremos (máximo e mínimo) e cálculos estatísticos aplicados a listas.
* **Destaque:** O analisador completo de números e o sistema de cadastro de nomes em matrizes de caracteres.

### [06-Strings](./06-Strings(Exercicios))
**O que encontrará aqui:**
Manipulação de texto e processamento de caracteres na linguagem C.
* **Competências:** Uso de arrays de caracteres (`char[]`), manipulação de strings (`strlen`, `strcpy`, `strcat`, `strcmp`), leitura de strings com `fgets`, tratamento de caracteres especiais (`\n`, `\0`) e percorrer strings com loops.
* **Destaque:** Sistemas de validação de texto, comparação de palavras e manipuladores completos de strings (como inversão, contagem de caracteres e normalização de entrada).

### [07-Structs](./07-Structs(Exercicios))
**O que encontrará aqui:**
Organização e modelagem de dados complexos utilizando `struct` na linguagem C.
* **Competências:** Criação e uso de `struct`, acesso a membros com `.`, uso de ponteiros para structs (`->`), passagem de structs para funções (por valor e por referência), arrays de structs e organização de dados compostos.
* **Destaque:** Sistemas que simulam entidades reais (como cadastros de pessoas, produtos ou alunos), manipulação de múltiplos dados relacionados e construção de estruturas mais próximas de aplicações reais.

### [08-Entrada e Saída de Arquivos](./08-Entrada_Saida_Arquivos(Exercicios))
**O que encontrará aqui:**
Manipulação de arquivos para leitura e escrita de dados persistentes fora da memória do programa.
* **Competências:** Uso de ponteiros de arquivo (`FILE *`), abertura e fechamento de arquivos (`fopen`, `fclose`), leitura (`fscanf`, `fgets`, `fread`) e escrita (`fprintf`, `fputs`, `fwrite`), modos de abertura (`r`, `w`, `a`) e tratamento básico de erros.
* **Destaque:** Sistemas de armazenamento em arquivos (como cadastro de usuários), leitura e análise de dados externos e manipulação de arquivos binários e de texto.

### [09-Typedef](./09-Typedef(Exercicios))
**O que encontrará aqui:**  
Uso do `typedef` para criar aliases (apelidos) de tipos de dados, tornando o código mais legível, organizado e fácil de manter.
* **Competências:** Definição de novos nomes para tipos primitivos e compostos, simplificação de declarações complexas (como ponteiros e structs), melhoria da legibilidade e padronização de tipos no código.
* **Destaque:** Criação de tipos personalizados (ex: `typedef struct`), redução de complexidade em declarações e construção de bases mais profissionais para projetos maiores.

### [10-Ponteiros-II-Aritmético](./10-Ponteiros_2_Aritmetico(Exercicios))
**O que encontrará aqui:**
Manipulação avançada de ponteiros com foco em aritmética, explorando como navegar pela memória de forma eficiente e segura.
* **Competências:** Uso de aritmética de ponteiros (`p + i`, `p++`), compreensão de como o tipo do ponteiro influencia os saltos na memória (`sizeof`), iteração sobre arrays utilizando ponteiros e equivalência entre ponteiros e arrays (`p[i] == *(p + i)`).
* **Destaque:** Navegação direta na memória sem uso de índices, construção de loops baseados em ponteiros (incluindo uso de valores sentinela) e desenvolvimento de uma compreensão mais profunda do funcionamento interno dos arrays em C.

### [11-Alocacao-Manual-de-Memoria](./11-Alocacao_Manual_de_Memoria(Exercicios))
**O que encontrará aqui:**
Introdução ao gerenciamento manual de memória em C, explorando como alocar, utilizar e liberar memória dinamicamente durante a execução do programa.
* **Competências:** Uso das funções `malloc`, `calloc`, `realloc` e `free`, compreensão da diferença entre memória automática (stack) e memória dinâmica (heap), utilização do operador `sizeof` para alocação segura e manipulação de ponteiros para acessar memória alocada dinamicamente.
* **Destaque:** Controle total sobre o ciclo de vida da memória, prevenção de vazamentos de memória (*memory leaks*), entendimento de como dados podem persistir além do escopo de funções e construção de estruturas dinâmicas fundamentais (base para listas, filas e árvores).

### [12-Escopo](./12-Escopo(Exercicios))
**O que encontrará aqui:**
Estudos e exercícios sobre escopo em C, entendendo como variáveis, funções e blocos de código possuem diferentes níveis de visibilidade e tempo de vida dentro de um programa.
* **Competências:** Compreensão de escopo local e global, diferença entre variáveis automáticas e `static`, utilização correta de variáveis dentro de blocos `{}`, entendimento sobre tempo de vida (*lifetime*) e visibilidade (*scope*) de dados, além de boas práticas para evitar conflitos e efeitos colaterais inesperados.
* **Destaque:** Entendimento profundo de como o compilador organiza variáveis na memória, como funções isolam dados internamente e como controlar o acesso a informações dentro do programa, uma base essencial para escrever códigos mais seguros, organizados e previsíveis.

### [13-Tipos-de-Variáveis-Parte-2](./13-Tipos_Parte_2(Exercicios))
**O que encontrará aqui:**
Estudos e exercícios sobre tipos inteiros avançados da linguagem C, explorando modificadores de sinal (`signed` e `unsigned`) e tipos capazes de armazenar quantidades maiores de dados, como `long long` e `unsigned long long`.
* **Competências:** Compreensão das diferenças entre números com sinal e sem sinal, utilização correta dos tipos `signed char`, `unsigned char`, `unsigned short`, `unsigned int`, `unsigned long`, `long long` e `unsigned long long`, análise dos limites de armazenamento de cada tipo, escolha adequada de variáveis para diferentes cenários e otimização do uso da memória.
* **Destaque:** Entendimento aprofundado de como os números são representados internamente pelo computador, como o tamanho e o sinal de uma variável afetam a faixa de valores que ela pode armazenar e como essas características impactam diretamente a eficiência, segurança e previsibilidade de programas em C.

### [14-Tipos-de-Variáveis-Parte-3-Conversões](./14-Tipos_Parte_3_Conversoes(Exercicios))

**O que encontrará aqui:**
Estudos e exercícios sobre conversões de tipos na linguagem C, abordando a transformação de valores numéricos em strings, strings em números e conversões entre diferentes tipos numéricos.
* **Competências:** Uso de funções como `sprintf()` e `snprintf()`, compreensão de conversões explícitas e implícitas, análise de perdas de precisão, truncamentos, estouros de valores, limites de armazenamento e cuidados com buffers e strings em C.
* **Destaque:** Compreensão de que conversões em C exigem atenção, pois mudanças entre tipos podem alterar valores, perder informações ou gerar comportamentos inesperados. O capítulo reforça a importância de escrever conversões de forma consciente, segura e previsível.

### [15-Tipos-de-Variáveis-Parte-4-Qualificadores-e-Especificadores](./15-Tipos_Parte_4_Qualificadores_Especificadores(Exercicios))

**O que encontrará aqui:**
Estudos e exercícios sobre qualificadores de tipo e especificadores de armazenamento na linguagem C, explorando como adicionar regras e características especiais às variáveis, ponteiros e funções.
* **Competências:** Uso do qualificador `const`, criação de variáveis constantes, aplicação de `const` em parâmetros de funções, diferenciação entre ponteiros para valores constantes e ponteiros constantes, combinação de múltiplos níveis de `const` e interpretação de declarações complexas envolvendo ponteiros.
* **Destaque:** Compreensão das diferenças entre `const int *p`, `int *const p` e `const int *const p`, controle sobre o que pode ou não ser modificado através de um ponteiro e desenvolvimento de códigos mais seguros, previsíveis e resistentes a alterações acidentais.

### [16-Projetos-Multiplos-Arquivos](./16-Projetos-multiplos-arquivos(Execicios))

**O que encontrará aqui:**
Estudos e exercícios sobre a organização de programas em C utilizando múltiplos arquivos, explorando como separar declarações, implementações e diferentes partes de um projeto para construir aplicações maiores e mais organizadas.
* **Competências:** Criação e uso de arquivos `.c` e `.h`, declaração de protótipos de funções em headers, utilização de `#include` com arquivos próprios, criação de include guards com `#ifndef`, `#define` e `#endif`, uso de `static` e `extern` entre diferentes arquivos, compilação separada com `gcc -c`, geração de arquivos objeto `.o` e linkagem de múltiplos módulos em um único executável.
* **Destaque:** Compreensão do processo completo de compilação de projetos multifile, diferenciando pré-processamento, compilação e linkagem, evitando declarações implícitas e inclusões repetidas, além de entender como arquivos objeto permitem recompilar apenas as partes modificadas de projetos maiores.

---

## 🛠️ Tecnologias e Ferramentas
* **Linguagem:** C (Padrão C23)
* **Ambiente:** Linux (Ubuntu)
* **Compilador:** GCC
* **Versionamento:** Git

## 📈 Evolução Pessoal
Este repositório é atualizado constantemente à medida que avanço para tópicos como **Ponteiros**, **Alocação Dinâmica** e **Estruturas de Dados Avançadas**. O objetivo é demonstrar uma base sólida para o desenvolvimento de sistemas de baixo nível e performance.

---
*Desenvolvido por [Vitor Santana]*