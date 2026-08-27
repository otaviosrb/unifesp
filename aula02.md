# 📖 Aula 02 — Lógica de Programação com Python

> **Resumo:** Guia prático de Python cobrindo declaração de variáveis, tipos primitivos, conversão de tipos (*casting*), entrada e saída de dados (I/O), operadores aritméticos, expressões relacionais e lógicas, estruturas condicionais e exercícios práticos resolvidos.

---

## 📑 Sumário
- [1. Variáveis e Tipos de Dados](#1-variáveis-e-tipos-de-dados)
  - [1.1. Regras para Nomes de Variáveis](#11-regras-para-nomes-de-variáveis)
  - [1.2. Tipos Primitivos](#12-tipos-primitivos)
  - [1.3. Conversão de Tipos (*Type Casting*)](#13-conversão-de-tipos-type-casting)
- [2. Entrada e Saída de Dados (I/O)](#2-entrada-e-saída-de-dados-io)
  - [2.1. Entrada com `input()`](#21-entrada-com-input)
  - [2.2. Saída com `print()`](#22-saída-com-print)
- [3. Operações Aritméticas](#3-operações-aritméticas)
  - [3.1. Operadores Aritméticos](#31-operadores-aritméticos)
  - [3.2. Divisão Inteira (`//`) e Resto (`%`)](#32-divisão-inteira--e-resto-)
  - [3.3. Ordem de Precedência](#33-ordem-de-precedência)
  - [3.4. Atribuições Simplificadas](#34-atribuições-simplificadas)
- [4. Expressões Relacionais e Lógicas](#4-expressões-relacionais-e-lógicas)
  - [4.1. Operadores Relacionais](#41-operadores-relacionais)
  - [4.2. Operadores Lógicos e Tabela Verdade](#42-operadores-lógicos-e-tabela-verdade)
  - [4.3. Equivalências Lógicas](#43-equivalências-lógicas)
- [5. Estruturas Condicionais](#5-estruturas-condicionais)
  - [5.1. Sintaxe `if`, `elif` e `else`](#51-sintaxe-if-elif-e-else)
  - [5.2. Exemplo: Maior entre Três Números](#52-exemplo-maior-entre-três-números)
- [6. Exercícios Práticos Resolvidos](#6-exercícios-práticos-resolvidos)

---

## 1. Variáveis e Tipos de Dados

### 1.1. Regras para Nomes de Variáveis

* ✅ **Permitido:**
  * Iniciar com letra (`a-z`, `A-Z`) ou *underscore* (`_`).
  * Conter letras, números (`0-9`) e *underscore* (`_`).
* ❌ **Proibido:**
  * Iniciar com números (ex: `1valor` ❌ $\to$ `valor1` ✅).
  * Conter caracteres especiais ou símbolos matemáticos (`+`, `-`, `*`, `/`, `\`, `;`, `,`, `.`, `?`, etc.).
  * Usar palavras reservadas da linguagem (`if`, `for`, `def`, `class`, `True`, `False`, etc.).
* 🔤 **Case-Sensitive:** Diferencia maiúsculas e minúsculas (`casa` $\neq$ `Casa` $\neq$ `CASA`).

#### 🔹 Comando de Atribuição (`=`)
```python
nome = "Alice"       # String (texto)
idade = 25           # Inteiro
altura = 1.75        # Ponto flutuante (float)
estudante = True     # Booleano
```

---

### 1.2. Tipos Primitivos

| Tipo | Nome | Descrição | Exemplo |
| :---: | :---: | :---: | :---: |
| `int` | Inteiro | Números inteiros sem casas decimais | `-5`, `0`, `42` |
| `float` | Real (*Ponto Flutuante*) | Números com casas decimais (64 bits) | `-3.14`, `0.0`, `1.75` |
| `bool` | Booleano | Valores lógicos | `True`, `False` |
| `complex` | Complexo | Número com parte imaginária ($j$) | `2.0 + 3.4j` |
| `str` | Cadeia de Caracteres | Texto delimitado por aspas simples ou duplas | `'A'`, `"Olá mundo"` |

---

### 1.3. Conversão de Tipos (*Type Casting*)

Funções para converter valores entre tipos e verificar o tipo de uma variável:

```python
A = input("Digite um valor: ") # Retorna sempre str (ex: "9")

B = int(A)       # Converte para int (9)
C = float(A)     # Converte para float (9.0)
D = bool(A)      # Converte para bool (True se não vazio)
E = complex(A)   # Converte para complex (9+0j)

print(type(B))   # <class 'int'>
print(type(C))   # <class 'float'>
```

---

## 2. Entrada e Saída de Dados (I/O)

### 2.1. Entrada com `input()`

A função `input()` lê a entrada do teclado como texto (`str`). Para realizar operações matemáticas, faça a conversão explícita:

```python
# Leitura direta com conversão
idade = int(input("Digite sua idade: "))
altura = float(input("Digite sua altura em metros: "))
```

---

### 2.2. Saída com `print()`

A função `print()` exibe informações no console:

```python
nome = "Didier"
idade = 30

# Múltiplos argumentos (separados por espaço por padrão)
print("Olá", nome, "você tem", idade, "anos!")

# Interpolação moderna com f-strings (recomendado)
print(f"Olá {nome}, você tem {idade} anos!")
```

---

## 3. Operações Aritméticas

### 3.1. Operadores Aritméticos

| Operador | Operação | Exemplo | Descrição |
| :---: | :---: | :---: | :---: |
| `+` | Adição | `a + b` | Soma dois valores |
| `-` | Subtração / Negação | `a - b` ou `-b` | Subtrai ou inverte sinal |
| `*` | Multiplicação | `a * b` | Multiplica dois valores |
| `/` | Divisão Real | `a / b` | Divisão com resultado `float` |
| `//` | Divisão Inteira | `a // b` | Quociente inteiro da divisão |
| `%` | Módulo (Resto) | `a % b` | Resto da divisão inteira |
| `**` | Potenciação | `a ** b` | Base $a$ elevada ao expoente $b$ ($a^b$) |

---

### 3.2. Divisão Inteira (`//`) e Resto (`%`)

Para quaisquer inteiros $a$ e $b$ ($b > 0$):

$$a = q \times b + r \quad (0 \le r < b)$$

* `q = a // b` (quociente inteiro)
* `r = a % b` (resto)

#### 🔹 Exemplos:
* `19 // 4 = 4` e `19 % 4 = 3` (pois $19 = 4 \times 4 + 3$)
* `5 // 2 = 2` e `5 % 2 = 1` (pois $5 = 2 \times 2 + 1$)
* `15 // 3 = 5` e `15 % 3 = 0` (pois $15 = 5 \times 3 + 0$)
* `1 // 5 = 0` e `1 % 5 = 1` (pois $1 = 0 \times 5 + 1$)

---

### 3.3. Ordem de Precedência

A avaliação segue a ordem de prioridade:

1. 🥇 **Parênteses:** `( )`
2. 🥈 **Potenciação:** `**`
3. 🥉 **Multiplicação e Divisões:** `*`, `/`, `//`, `%` (da esquerda para a direita)
4. 🏅 **Adição e Subtração:** `+`, `-` (da esquerda para a direita)

> **Exemplos de cálculo:**
> * `5 + 10 % 3` $\to 5 + 1 = \mathbf{6}$
> * `5 * 10 % 3` $\to 50 \% 3 = \mathbf{2}$
> * `2 ** 4 - 9 / 3` $\to 16 - 3.0 = \mathbf{13.0}$
> * `20 // 3 + 1` $\to 6 + 1 = \mathbf{7}$

---

### 3.4. Atribuições Simplificadas

| Comando | Equivalente a |
| :---: | :---: |
| `a += b` | `a = a + b` |
| `a -= b` | `a = a - b` |
| `a *= b` | `a = a * b` |
| `a /= b` | `a = a / b` |
| `a //= b` | `a = a // b` |
| `a %= b` | `a = a % b` |
| `a **= b` | `a = a ** b` |

---

## 4. Expressões Relacionais e Lógicas

### 4.1. Operadores Relacionais

Retornam sempre um valor booleano (`True` ou `False`):

| Operador | Significado | Exemplo ($a=5, b=10$) | Resultado |
| :---: | :---: | :---: | :---: |
| `==` | Igual a | `a == b` | `False` |
| `!=` | Diferente de | `a != b` | `True` |
| `>` | Maior que | `a > b` | `False` |
| `<` | Menor que | `a < b` | `True` |
| `>=` | Maior ou igual a | `a >= b` | `False` |
| `<=` | Menor ou igual a | `a <= b` | `True` |

---

### 4.2. Operadores Lógicos e Tabela Verdade

* `and`: `True` se **todas** as condições forem verdadeiras.
* `or`: `True` se **pelo menos uma** condição for verdadeira.
* `not`: Inverte o valor lógico.

| $A$ | $B$ | `not A` | `A and B` | `A or B` |
| :---: | :---: | :---: | :---: | :---: |
| **V** | **V** | F | **V** | **V** |
| **V** | **F** | F | **F** | **V** |
| **F** | **V** | V | **F** | **V** |
| **F** | **F** | V | **F** | **F** |

> **Precedência geral:** `Aritméticos` $>$ `Relacionais` $>$ `not` $>$ `and` $>$ `or`

---

### 4.3. Equivalências Lógicas

A negação de um operador relacional resulta em seu inverso complementar:

* `not (a == b)` $\Longleftrightarrow$ `a != b`
* `not (a != b)` $\Longleftrightarrow$ `a == b`
* `not (a > b)` $\Longleftrightarrow$ `a <= b`
* `not (a < b)` $\Longleftrightarrow$ `a >= b`
* `not (a >= b)` $\Longleftrightarrow$ `a < b`
* `not (a <= b)` $\Longleftrightarrow$ `a > b`

---

## 5. Estruturas Condicionais

### 5.1. Sintaxe `if`, `elif` e `else`

A indentação (4 espaços) define quais comandos pertencem a cada bloco:

```python
if condicao_1:
    # Executa se condicao_1 for True
    bloco_1
elif condicao_2:
    # Executa se condicao_1 for False e condicao_2 for True
    bloco_2
else:
    # Executa se nenhuma das anteriores for True
    bloco_padrao
```

---

### 5.2. Exemplo: Maior entre Três Números

```python
print("Digite três valores inteiros:")
a = int(input("Primeiro valor: "))
b = int(input("Segundo valor: "))
c = int(input("Terceiro valor: "))

if a >= b and a >= c:
    print("O primeiro é o maior.")
elif b >= a and b >= c:
    print("O segundo é o maior.")
else:
    print("O terceiro é o maior.")
```
