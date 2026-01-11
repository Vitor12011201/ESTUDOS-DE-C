# Estudos de Linguagem C - Guia do Beej

Repositório destinado ao aprendizado de C focado em fundamentos de Ciência da Computação.

## 🛠️ Ambiente de Desenvolvimento
- **SO:** Ubuntu Linux
- **IDE:** CLion
- **Compilador:** GCC

<details>
  <summary><b>🔹 Dia 1: Como compilar com o GCC</b></summary>

- **Passo 1** - Ir até a Pasta (Diretório) do arquivo com o comando `cd`.
- **Passo 2** - Compilar o arquivo com o comando `gcc (nome_do_arquivo.c) -o (nome_do_executavel)`.
- **Passo 3** - Rodar o programa com o comando `./(nome_do_executavel)`.

> **Nota do Professor:** Se não usar o `-o`, o GCC criará o padrão `a.out`, que será sobrescrito na próxima compilação.
</details>

---

## 🧠 Filosofia do C (Segundo o Guia do Beej)
- **Baixo Nível:** C é uma linguagem sem "cinto de segurança". Ela permite interfacear diretamente com a memória e o hardware.
- **Conectividade:** Aprender C é a base para entender Sistemas Operacionais e linguagens modernas (C++, Rust, Go).
- **O Desafio:** O conceito de **Ponteiros** é identificado como o principal obstáculo (endereços de memória).

---

<details>
  <summary><b>🔹 Dia 2: Hello World</b></summary>

## 📖 O Hello World

### 🧠 O que aprendi:
- **Pré-processador (#):** Age antes do compilador. O `#include` copia bibliotecas para o código.
- **Header Files (.h):** Arquivos como `stdio.h` fornecem ferramentas básicas (como o `printf`).
- **Comentários:** Essenciais para documentar a lógica (`//` ou `/* */`).
- **Fluxo de Execução:** O programa sempre começa na função `main()` e termina na sua última chave `}`.
- **\n:** Comando para pular linha (newline).

### 🛠️ Comando de Compilação Revisado:
- `gcc -o hello hello.c` (Cria o executável 'hello').
- `./hello` (Executa o arquivo no diretório atual).

### 🧠 O que aprendi:
- **Compilação:** É o processo de traduzir código-fonte para um executável.
- **Machine Code:** C produz binários (1s e 0s) que a CPU executa diretamente, sem intermediários.
- **C vs Outras Linguagens:** Enquanto Python/Java usam *bytecode*, o C vai direto ao "ferro" (hardware).
- **GCC:** É o programa que faz essa tradução no ambiente Unix/Linux.

> **Nota do Professor:** O C pode ser interpretado, mas quase sempre é compilado para garantir a velocidade máxima que a linguagem oferece.
</details>