# 📖 Aula 01 — Representação de Dados

> **Resumo:** Introdução aos sistemas de numeração posicionais (Binário e Hexadecimal), métodos de conversão de bases e operações aritméticas fundamentais (soma e subtração binária).

---

## 📑 Sumário
- [1. Conceitos Fundamentais](#1-conceitos-fundamentais)
- [2. Sistema Binário (Base 2)](#2-sistema-binário-base-2)
  - [2.1. Conversões de Base](#21-conversões-de-base)
  - [2.2. Aritmética Binária](#22-aritmética-binária)
- [3. Sistema Hexadecimal (Base 16)](#3-sistema-hexadecimal-base-16)
  - [3.1. Tabela de Equivalência](#31-tabela-de-equivalência)
  - [3.2. Conversões de Base](#32-conversões-de-base)

---

## 1. Conceitos Fundamentais

Um **sistema posicional** é aquele no qual o valor de cada dígito depende da sua posição relativa no número e da base utilizada:

$$\text{Valor} = \sum_{i=0}^{n-1} d_i \times \text{Base}^i$$

---

## 2. Sistema Binário (Base 2)

* **Base:** 2
* **Dígitos permitidos (Bits):** `0` e `1`
* **Tipo:** Sistema posicional com potências de 2 ($2^0, 2^1, 2^2, 2^3, \dots$).

---

### 2.1. Conversões de Base

#### 🔹 Decimal $\to$ Binário (Divisões Sucessivas)
1. Divida o número decimal por **2**.
2. Anote o **resto** (sempre `0` ou `1`).
3. Pegue o quociente e continue dividindo por 2 até o quociente se tornar menor que a base.
4. O resultado binário é formado pelo **último quociente seguido de todos os restos da direita para a esquerda** (do último para o primeiro).

> **Exemplo ($13_{10} \to ?_2$):**
> * $13 \div 2 = 6$ (resto **1**) $\uparrow$
> * $6 \div 2 = 3$ (resto **0**) $\uparrow$
> * $3 \div 2 = 1$ (resto **1**) $\uparrow$
> * Quociente final: **1** $\uparrow$
> 
> Lendo do último quociente para o primeiro resto: **$1101_2$**

---

#### 🔹 Binário $\to$ Decimal (Notação Posicional)
1. Comece da **direita para a esquerda** atribuindo posições (expoentes), iniciando em $0$.
2. Multiplique cada bit por $2^{\text{posição}}$.
3. **Some todos os valores obtidos**.

> **Exemplo ($1101_2 \to ?_{10}$):**
> $$1 \times 2^3 + 1 \times 2^2 + 0 \times 2^1 + 1 \times 2^0$$
> $$= 8 + 4 + 0 + 1 = 13_{10}$$

---

### 2.2. Aritmética Binária

#### ➕ Soma em Binário

| Operação | Resultado | Vai um (*Carry*) |
| :---: | :---: | :---: |
| $0 + 0$ | **$0$** | $0$ |
| $0 + 1$ | **$1$** | $0$ |
| $1 + 0$ | **$1$** | $0$ |
| $1 + 1$ | **$0$** | **$1$** (gera $10_2$) |
| $1 + 1 + 1$ | **$1$** | **$1$** (gera $11_2$) |

![Soma em binário](https://i.pinimg.com/736x/30/92/99/309299bb01645e6f46d2c60196e2e572.jpg)

---

#### ➖ Subtração em Binário

| Operação | Resultado | Empresta um (*Borrow*) |
| :---: | :---: | :---: |
| $0 - 0$ | **$0$** | $0$ |
| $1 - 0$ | **$1$** | $0$ |
| $1 - 1$ | **$0$** | $0$ |
| $0 - 1$ | **$1$** | **$1$** (vem 1 da coluna à esquerda) |

![Subtração em binário](https://i.ytimg.com/vi/Dv2Y-uZF0G0/maxresdefault.jpg)

---

## 3. Sistema Hexadecimal (Base 16)

* **Base:** 16
* **Dígitos permitidos:** `0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F`
* **Aplicação:** Representação compacta de binários (cada dígito hexadecimal equivale exatamente a **4 bits / 1 nibble**).

---

### 3.1. Tabela de Equivalência

| Decimal | Binário (4 bits) | Hexadecimal |
| :---: | :---: | :---: |
| 0 | `0000` | **0** |
| 1 | `0001` | **1** |
| 2 | `0010` | **2** |
| 3 | `0011` | **3** |
| 4 | `0100` | **4** |
| 5 | `0101` | **5** |
| 6 | `0110` | **6** |
| 7 | `0111` | **7** |
| 8 | `1000` | **8** |
| 9 | `1001` | **9** |
| 10 | `1010` | **A** |
| 11 | `1011` | **B** |
| 12 | `1100` | **C** |
| 13 | `1101` | **D** |
| 14 | `1110` | **E** |
| 15 | `1111` | **F** |

---

### 3.2. Conversões de Base

#### 🔹 Decimal $\to$ Hexadecimal
1. Divida o número decimal sucessivamente por **16**.
2. Converta os restos entre $10$ e $15$ para as letras correspondentes ($A$ a $F$).
3. Escreva os restos da **direita para a esquerda** (do último para o primeiro).

---

#### 🔹 Binário $\to$ Hexadecimal
1. Divida o binário em **grupos de 4 bits** (*nibbles*) da **direita para a esquerda**.
2. Preencha com zeros à esquerda se faltar para completar 4 bits.
3. Converta cada grupo para seu dígito hexadecimal correspondente.

> **Exemplo ($10110110_2 \to ?_{16}$):**
> * Separação em quartetos: `1011` | `0110`
> * `1011`$_2 = 11_{10} =$ **$\text{B}_{16}$**
> * `0110`$_2 = 6_{10} =$ **$6_{16}$**
> * Resultado final: **$\text{B}6_{16}$**

---

#### 🔹 Hexadecimal $\to$ Binário
* Substitua cada dígito hexadecimal diretamente pelo seu grupo de **4 bits** equivalente.

![Binário para hexa](https://imdtec.imd.ufrn.br/assets/imagens/sistemas-digitais/sistemas_digitais_a01_i03_c.jpg)

