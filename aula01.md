# 📖 Aula 01 — Representação de Dados

> **Resumo:** Introdução aos sistemas de numeração posicionais (Binário e Hexadecimal), decomposição em potências de 2 (Cartões Mágicos), métodos de conversão de bases, operações aritméticas fundamentais, unidades de armazenamento digital (Bits e Bytes), codificação de caracteres (ASCII, EBCDIC, UNICODE) e exercícios de fixação.

---

## 📑 Sumário
- [1. Conceitos Fundamentais](#1-conceitos-fundamentais)
- [2. Sistema Binário (Base 2)](#2-sistema-binário-base-2)
  - [2.1. Conversões de Base](#21-conversões-de-base)
  - [2.2. Aritmética Binária](#22-aritmética-binária)
  - [2.3. Propriedade das Potências de 2 e o Jogo dos Cartões Mágicos](#23-propriedade-das-potências-de-2-e-o-jogo-dos-cartões-mágicos)
- [3. Sistema Hexadecimal (Base 16)](#3-sistema-hexadecimal-base-16)
  - [3.1. Tabela de Equivalência](#31-tabela-de-equivalência)
  - [3.2. Conversões de Base](#32-conversões-de-base)
- [4. Unidades de Medida e Armazenamento Digital](#4-unidades-de-medida-e-armazenamento-digital)
  - [4.1. Bit e Byte](#41-bit-e-byte)
  - [4.2. Múltiplos e Grandezas de Memória](#42-múltiplos-e-grandezas-de-memória)
- [5. Representação e Codificação de Dados](#5-representação-e-codificação-de-dados)
  - [5.1. Dados Numéricos vs. Alfanuméricos](#51-dados-numéricos-vs-alfanuméricos)
  - [5.2. Padrões de Codificação de Caracteres](#52-padrões-de-codificação-de-caracteres)
  - [5.3. Exemplo Prático de Decodificação ASCII](#53-exemplo-prático-de-decodificação-ascii)
- [6. Exercícios de Fixação da Aula (Resolvidos)](#6-exercícios-de-fixação-da-aula-resolvidos)

---

## 1. Conceitos Fundamentais

Um **sistema posicional** é aquele no qual o valor de cada dígito depende da sua posição relativa no número e da base utilizada:

$$\text{Valor} = \sum_{i=0}^{n-1} d_i \times \text{Base}^i$$

* **Sistema Decimal (Base 10):** Utiliza 10 algarismos indo-arábicos (`0, 1, 2, 3, 4, 5, 6, 7, 8, 9`) com potências de 10 ($10^0, 10^1, 10^2, \dots$).
* **Sistema Binário (Base 2):** Utiliza 2 algarismos (`0` e `1`) com potências de 2 ($2^0, 2^1, 2^2, \dots$).

---

## 2. Sistema Binário (Base 2)

* **Base:** 2
* **Dígitos permitidos (Bits):** `0` e `1`
* **Tipo:** Sistema posicional com potências de 2 ($2^0=1, 2^1=2, 2^2=4, 2^3=8, 2^4=16, 2^5=32, \dots$).

### Tabela de Valores de 0 a 15 em Binário

| Decimal | Binário | Decimal | Binário |
| :---: | :---: | :---: | :---: |
| **0** | `0000` | **8** | `1000` |
| **1** | `0001` | **9** | `1001` |
| **2** | `0010` | **10** | `1010` |
| **3** | `0011` | **11** | `1011` |
| **4** | `0100` | **12** | `1100` |
| **5** | `0101` | **13** | `1101` |
| **6** | `0110` | **14** | `1110` |
| **7** | `0111` | **15** | `1111` |

---

### 2.1. Conversões de Base

#### 🔹 Decimal $\to$ Binário (Divisões Sucessivas)
1. Divida o número decimal por **2**.
2. Anote o **resto** (sempre `0` ou `1`).
3. Pegue o quociente e continue dividindo por 2 até o quociente se tornar menor que a base.
4. O resultado binário é formado pelo **último quociente seguido de todos os restos lidos de baixo para cima / da direita para a esquerda**.

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

> **Exemplo ($9_{10} + 5_{10} = 14_{10}$):**
> ```text
>     1 0 0 1   (9)
>   + 0 1 0 1   (5)
>   ---------
>     1 1 1 0   (14)
> ```

![Soma em binário](https://i.pinimg.com/736x/30/92/99/309299bb01645e6f46d2c60196e2e572.jpg)

---

#### ➖ Subtração em Binário

| Operação | Resultado | Empresta um (*Borrow*) |
| :---: | :---: | :---: |
| $0 - 0$ | **$0$** | $0$ |
| $1 - 0$ | **$1$** | $0$ |
| $1 - 1$ | **$0$** | $0$ |
| $0 - 1$ | **$1$** | **$1$** (vem 1 da coluna imediatamente à esquerda, valendo $2_{10}$) |

> **Exemplo ($9_{10} - 5_{10} = 4_{10}$):**
> ```text
>     1 0 0 1   (9)
>   - 0 1 0 1   (5)
>   ---------
>     0 1 0 0   (4)
> ```

![Subtração em binário](https://i.ytimg.com/vi/Dv2Y-uZF0G0/maxresdefault.jpg)

---

### 2.3. Propriedade das Potências de 2 e o Jogo dos Cartões Mágicos

Qualquer número inteiro pode ser expresso de forma **única** como a soma de potências de base 2. Esse princípio é a base dos chamados **Cartões Mágicos de Adivinhação**.

#### 🎩 Como funciona a adivinhação?
1. Uma pessoa pensa em um número entre $0$ e $N$.
2. Ela indica em quais cartões o número pensado aparece.
3. Para adivinhar o número, basta **somar o primeiro número (canto superior esquerdo) de cada cartão onde ele apareceu**.

#### ⚙️ Por que funciona matematicamente?
* O **$1^o$ cartão** representa a potência $2^0 = 1$ e contém todos os números que têm o bit `1` na posição $2^0$.
* O **$2^o$ cartão** representa a potência $2^1 = 2$ e contém todos os números que têm o bit `1` na posição $2^1$.
* O **$3^o$ cartão** representa a potência $2^2 = 4$ e contém todos os números que têm o bit `1` na posição $2^2$.
* O **$4^o$ cartão** representa a potência $2^3 = 8$ e contém todos os números que têm o bit `1` na posição $2^3$.

> **Exemplo com números de 0 a 7 ($2^3$ estados $\to$ 3 cartões necessários):**
> * **Cartela 1 ($2^0 = 1$):** `1, 3, 5, 7` (bits terminados em `...1`)
> * **Cartela 2 ($2^1 = 2$):** `2, 3, 6, 7` (bits com `...1.`)
> * **Cartela 3 ($2^2 = 4$):** `4, 5, 6, 7` (bits com `1..`)
>
> Se o número escolhido estiver nas cartelas **1** e **2**: $1 + 2 = \mathbf{3}$ ($011_2$).

---

## 3. Sistema Hexadecimal (Base 16)

* **Base:** 16
* **Dígitos permitidos:** `0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F`
* **Aplicação:** Representação compacta e legível de números binários (cada dígito hexadecimal equivale exatamente a **4 bits / 1 nibble**).

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

#### 🔹 Decimal $\to$ Hexadecimal (Divisões por 16)
1. Divida o número decimal sucessivamente por **16**.
2. Converta os restos entre $10$ e $15$ para suas letras equivalentes ($A$ a $F$).
3. Escreva o último quociente seguido dos restos da **direita para a esquerda**.

> **Exemplo ($85_{10} \to ?_{16}$):**
> * $85 \div 16 = 5$ com resto **$5$**
> * Quociente final: **$5$**
> * Resultado: **$55_{16}$**

---

#### 🔹 Binário $\to$ Hexadecimal
1. Divida o número binário em **grupos de 4 bits** (*nibbles*) da **direita para a esquerda**.
2. Preencha com zeros à esquerda se o último grupo for menor que 4 bits.
3. Substitua cada grupo de 4 bits pelo seu dígito hexadecimal correspondente.

> **Exemplo ($1101000101100011_2 \to ?_{16}$):**
> * Agrupamento: `1101` | `0001` | `0110` | `0011`
> * Equivalentes: `1101`$_2 = \text{D}$, `0001`$_2 = 1$, `0110`$_2 = 6$, `0011`$_2 = 3$
> * Resultado final: **$\text{D}163_{16}$**

---

#### 🔹 Hexadecimal $\to$ Binário
* Substitua diretamente cada dígito hexadecimal pelo seu grupo de **4 bits** equivalente.

> **Exemplo ($407\text{A}_{16} \to ?_2$):**
> * $4 \to 0100$
> * $0 \to 0000$
> * $7 \to 0111$
> * $\text{A} \to 1010$
> * Resultado final: **$0100000001111010_2$**

![Binário para hexa](https://imdtec.imd.ufrn.br/assets/imagens/sistemas-digitais/sistemas_digitais_a01_i03_c.jpg)

---

## 4. Unidades de Medida e Armazenamento Digital

Nos computadores, a informação física é processada através de estados eletrônicos (presença ou ausência de sinal elétrico $\to$ **ligado/desligado**, **1/0**).

### 4.1. Bit e Byte

* **Bit (*Binary Digit*):** É a **menor unidade de informação** que transita e é processada em um computador. Representa `0` ou `1`.
* **Byte:** É um conjunto padrão de **8 bits**. É a unidade básica usada para codificar um caractere ou símbolo (letras, números, pontuações).

```text
  1 Byte = [ bit 7 | bit 6 | bit 5 | bit 4 | bit 3 | bit 2 | bit 1 | bit 0 ]
```

---

### 4.2. Múltiplos e Grandezas de Memória

Como a arquitetura dos computadores opera em base binária, os múltiplos de armazenamento de dados são baseados em **potências de 2** ($2^{10} = 1024$):

| Unidade | Símbolo | Equivalência em Bytes | Potência de 2 |
| :--- | :---: | :--- | :---: |
| **Kilobyte** | **KB** / K | $1.024\text{ Bytes}$ | $2^{10}\text{ Bytes}$ |
| **Megabyte** | **MB** / Mega | $1.024\text{ KB} = 1.048.576\text{ Bytes}$ | $2^{20}\text{ Bytes}$ |
| **Gigabyte** | **GB** / Giga | $1.024\text{ MB} = 1.073.741.824\text{ Bytes}$ | $2^{30}\text{ Bytes}$ |
| **Terabyte** | **TB** / Tera | $1.024\text{ GB} = 1.099.511.627.776\text{ Bytes}$ | $2^{40}\text{ Bytes}$ |

---

## 5. Representação e Codificação de Dados

Internamente, todas as informações de um computador (arquivos, textos, imagens, programas) são armazenadas como sequências de bits organizadas em duas categorias:

### 5.1. Dados Numéricos vs. Alfanuméricos

* **Dados Numéricos:** Inteiros e números reais (ponto flutuante), armazenados diretamente em formato binário ou de precisão simples/dupla para cálculo aritmético.
* **Dados Alfanuméricos:** Letras, símbolos, pontuações e dígitos numéricos tratados como texto, convertidos via tabelas de codificação padrão.

---

### 5.2. Padrões de Codificação de Caracteres

```text
              ┌─── ASCII (7 bits originais / 8 bits estendido)
              │
Codificação ──┼─── EBCDIC (8 bits - Mainframes IBM / Apple antigo)
Alfanumérica  │
              └─── UNICODE (16+ bits - Padrão universal multilíngue)
```

1. **ASCII (*American Standard Code for Information Interchange*):**
   * **Original:** Usava **7 bits** por caractere, totalizando $2^7 = 128$ símbolos possíveis (voltado à língua inglesa, sem acentos).
   * **Estendido:** Passou a usar **8 bits** (1 byte), permitindo $2^8 = 256$ símbolos.
   * *Exemplo fundamental:* O caractere de **espaço** (*Space*) é representado pelo decimal $32$, ou em binário: `00100000`.

2. **EBCDIC (*Extended Binary Coded Decimal Interchange Code*):**
   * Padrão de **8 bits** desenvolvido pela IBM para uso em *mainframes*.
   * Embora use os mesmos 8 bits do ASCII estendido, o mapeamento binário de cada caractere é diferente.

3. **UNICODE:**
   * Desenvolvido para superar as limitações de idiomas do ASCII e unificar todos os alfabetos globais (latino, cirílico, árabe, ideogramas orientais, emojis, etc.).
   * Utiliza **16 bits** ou formato de tamanho variável (como UTF-8 / UTF-16), permitindo mais de $65.000$ símbolos em seu plano base e milhões em extensões.
   * Adotado universalmente pelas principais empresas de tecnologia (Apple, Microsoft, Google, IBM, Oracle).

---

### 5.3. Exemplo Prático de Decodificação ASCII

A palavra `"Hello"` codificada em binário (1 byte por caractere):

```text
  H  = 01001000 (Decimal 72)
  e  = 01100101 (Decimal 101)
  l  = 01101100 (Decimal 108)
  l  = 01101100 (Decimal 108)
  o  = 01101111 (Decimal 111)
```

Sequência binária completa de `"Hello World"`:
`01001000 01100101 01101100 01101100 01101111 00100000 01010111 01101111 01110010 01101100 01100100`

---

## 6. Exercícios de Fixação da Aula (Resolvidos)

### 📝 Parte 1: Conversões e Operações

1. **Converter $95_{10}$ para binário:**
   * $95 \div 2 = 47$ (resto 1)
   * $47 \div 2 = 23$ (resto 1)
   * $23 \div 2 = 11$ (resto 1)
   * $11 \div 2 = 5$ (resto 1)
   * $5 \div 2 = 2$ (resto 1)
   * $2 \div 2 = 1$ (resto 0)
   * Quociente: 1
   * **Resultado:** **$1011111_2$**

2. **Converter $110010_2$ para decimal:**
   * $1 \times 2^5 + 1 \times 2^4 + 0 \times 2^3 + 0 \times 2^2 + 1 \times 2^1 + 0 \times 2^0$
   * $= 32 + 16 + 0 + 0 + 2 + 0 =$ **$50_{10}$**

3. **Subtrações em Binário:**
   * a) $1010_2 - 10_2 = \mathbf{1000_2}$ ($10_{10} - 2_{10} = 8_{10}$)
   * b) $111011_2 - 110010_2 = \mathbf{001001_2}$ ($59_{10} - 50_{10} = 9_{10}$)
   * c) $1000_2 - 0111_2 = \mathbf{0001_2}$ ($8_{10} - 7_{10} = 1_{10}$)

4. **Converter de Decimal para Hexadecimal:**
   * $283_{10} \div 16 = 17$ (resto $11 = \text{B}$) $\to 17 \div 16 = 1$ (resto $1$) $\to$ **$11\text{B}_{16}$**
   * $106_{10} \div 16 = 6$ (resto $10 = \text{A}$) $\to$ **$6\text{A}_{16}$**

5. **Converter de Binário para Hexadecimal:**
   * a) $111100110_2 \to \underbrace{0001}_{1} \underbrace{1110}_{\text{E}} \underbrace{0110}_{6} \to \mathbf{1\text{E}6_{16}}$
   * b) $11011110_2 \to \underbrace{1101}_{\text{D}} \underbrace{1110}_{\text{E}} \to \mathbf{\text{DE}_{16}}$

---

### 📝 Parte 2: Cartões Mágicos para Números de 0 a 31
* **Número total de estados:** 32 números ($0$ a $31$) $\implies 2^5 = 32$.
* **Número de cartelas necessárias:** **5 cartelas** (cada uma representando uma potência: $2^0=1, 2^1=2, 2^2=4, 2^3=8, 2^4=16$).
* **Quantidade de números por cartela:** Cada cartela contém exatamente a metade dos números: **16 números**.

---

### 📝 Parte 3: Decodificação de Mensagem em Código ASCII

Sequência binária proposta:
```text
01000011 01101111 01101110 01100111 01110010 01100001 01110100
01110101 01101100 01100001 01110100 01101001 01101111 01101110
01110011 00001010 00001010 01011001 01101111 01110101
00100000 01101000 01100001 01110110 01100101 00100000
01100100 01100101 01100011 01101111 01100100 01100101
01100100 00100000 01110100 01101000 01100101 00100000
01001101 01010011 01000111 00100000
```

* **Texto Decodificado:**
  > `Congratulations`  
  > `You have decoded the MSG`
