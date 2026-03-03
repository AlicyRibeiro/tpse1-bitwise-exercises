# TPSE I – Bitwise Exercises

![Language](https://img.shields.io/badge/language-C-blue)
![Level](https://img.shields.io/badge/level-Embedded%20Programming-green)
![Status](https://img.shields.io/badge/status-Completed-brightgreen)

Repositório com implementações em C de exercícios sobre manipulação de bits e macros
da disciplina **Técnicas de Programação para Sistemas Embarcados I (TPSE I)**.

 Universidade Federal do Ceará – Campus de Quixadá  
 Autora: Ana Alicy Ribeiro  
 Semestre: 2025.1  

---

##  Sobre a Lista

A lista aborda conceitos fundamentais para programação embarcada, incluindo:

- Operações bitwise (AND, OR, XOR, NOT)
- Máscaras de bits
- Rotação circular
- Manipulação individual de bits
- Criação de macros com o pré-processador
- Problemas clássicos de expansão de macros
- Precedência de operadores em `#define`

O PDF completo da lista resolvida está disponível em:

        /docs/lista-tpse1-resolvida.pdf




---

##  Estrutura do Projeto


```

tpse1-bitwise-exercises/
│
├── docs/
│ └── lista-tpse1-resolvida.pdf
│
├── macros/
│ ├── 01-clear-bit-macro.c
│ └── 02-swap-bits-macro.c
│
├── bitwise/
│ ├── 03-clear-specific-bit.c
│ ├── 04-mirror-bits.c
│ ├── 07-circular-right-rotation.c
│ └── 20-bitwise-operations.c
│
└── preprocessador/
├── 12-macro-precedence-problem.c
└── 18-define-semicolon-problem.c

```


---

##  Exercícios Implementados

### 🔹 Macros
- Q1 – CLEAR_BIT
- Q2 – swap_bits

### 🔹 Manipulação de Bits
- Q3 – Limpar bit específico
- Q4 – Espelhamento de bits (mirror_bits)
- Q7 – Rotação circular à direita
- Q20 – Operações AND, OR e XOR

### 🔹 Problemas com Pré-processador
- Q12 – Problema de precedência de operadores em macros
- Q18 – Erro causado por ponto e vírgula em `#define`

---

##  Compilação

Exemplo de compilação usando GCC:

```bash
gcc 01-clear-bit-macro.c -o clear_bit
./clear_bit

```

Ou para qualquer outro arquivo:

``
gcc nome_do_arquivo.c -o programa
./programa

```

---

# Observação

A lista completa contém 25 questões.
Neste repositório foram implementadas em código as questões que exigiam
demonstração prática.

As demais respostas teóricas estão documentadas no PDF.

---

# Tecnologias Utilizadas

- Linguagem C
- GCC
- Pré-processador da linguagem C

---

# Conceitos Trabalhados

- Bitwise AND (&) 
- Bitwise OR (|)
- Bitwise XOR (^)
- Bitwise NOT (~)
- Shift left (<<)
- Shift right (>>)
- Máscaras de bits
- Rotação circular
- Expansão textual de macros

---

