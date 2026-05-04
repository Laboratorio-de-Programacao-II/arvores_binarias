#ifndef ARVORE_H
#define ARVORE_H

typedef long TipoChave;

typedef struct TipoRegistro {
    TipoChave Chave;
} TipoRegistro;

typedef struct TipoNo *TipoApontador;

typedef struct TipoNo {
    TipoRegistro   Reg;
    TipoApontador  Esq, Dir;
} TipoNo;

typedef TipoApontador TipoDicionario;

void Inicializa(TipoApontador *Dicionario);
void Pesquisa(TipoRegistro *x, TipoApontador *p);
void Insere(TipoRegistro x, TipoApontador *p);
void Antecessor(TipoApontador q, TipoApontador *r);
void Retira(TipoRegistro x, TipoApontador *p);
void Pre(TipoApontador p);
void Pos(TipoApontador p);

#endif
