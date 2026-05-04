## Enunciado

O repositório contém a estrutura de uma **árvore binária de busca** em C, organizada em três arquivos:

- `arvore.h` — declaração dos tipos e assinaturas de todas as funções
- `arvore.c` — implementação das funções (algumas já implementadas, **três a implementar**)
- `main.c` — programa principal que lê comandos e testa a árvore (**a implementar**)

```
         50
        /  \
      30    70
     / \
   20   40
```

Sua tarefa é implementar **três funções** em `arvore.c` e **completar** o `main.c`.

### Funções já implementadas

```c
void Inicializa(TipoApontador *Dicionario);  /* inicializa arvore vazia */
void Pesquisa(TipoRegistro *x, TipoApontador *p);  /* busca registro */
void Antecessor(TipoApontador q, TipoApontador *r); /* auxiliar do Retira */
void Pre(TipoApontador p);  /* imprime em pre-ordem */
```

### Funções a implementar 

#### `arvore.c`

**`Insere(TipoRegistro x, TipoApontador *p)`** — Insere o registro `x` na árvore binária de busca apontada por `p`. Se a chave já existir, imprime `Erro : Registro ja existe na arvore\n`.

**`Retira(TipoRegistro x, TipoApontador *p)`** — Remove o registro com chave `x.Chave` da árvore. Se a chave não existir, imprime `Erro : Registro nao esta na arvore\n`. Quando o nó a ser removido possui dois filhos, utilize a função `Antecessor` (já implementada), que busca o maior elemento da subárvore esquerda.

**`Pos(TipoApontador p)`** — Imprime os elementos da árvore em **pós-ordem** (esquerda, direita, raiz), um por linha.

#### `main.c`

O `main.c` fornecido já declara as variáveis `Dicionario` e `x`, e inicializa a árvore. Você deve implementar a leitura de comandos da entrada até o fim do arquivo, executando as operações correspondentes:

| Comando   | Ação |
| :-------- | :--- |
| `i X`     | Insere o registro com chave X na árvore |
| `r X`     | Retira o registro com chave X da árvore |
| `pre`     | Imprime a árvore em pré-ordem |
| `pos`     | Imprime a árvore em pós-ordem |

### Entrada

A entrada é uma sequência de comandos, um por linha, lidos até o fim do arquivo.

### Saída

Os comandos `i` e `r` podem produzir mensagens de erro. Os comandos `pre` e `pos` imprimem os elementos da árvore, um por linha, na ordem correspondente.

### Exemplos de entrada e saída

| Entrada | Saída |
| :--- | :--- |
| i 50<br>i 30<br>i 70<br>i 20<br>i 40<br>pre<br>pos | 50<br>30<br>20<br>40<br>70<br>20<br>40<br>30<br>70<br>50 |
| i 50<br>i 30<br>i 70<br>r 30<br>pre<br>pos | 50<br>70<br>70<br>50 |
| i 50<br>i 30<br>i 70<br>i 20<br>i 40<br>i 60<br>i 80<br>r 50<br>pre<br>pos | 40<br>30<br>20<br>70<br>60<br>80<br>20<br>30<br>60<br>80<br>70<br>40 |


