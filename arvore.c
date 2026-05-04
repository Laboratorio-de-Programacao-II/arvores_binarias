#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"

void Inicializa(TipoApontador *Dicionario) {
    *Dicionario = NULL;
}

void Pesquisa(TipoRegistro *x, TipoApontador *p) {
    if (*p == NULL) {
        printf("Erro: Registro nao esta presente na arvore\n");
        return;
    }
    if (x->Chave < (*p)->Reg.Chave) {
        Pesquisa(x, &(*p)->Esq);
        return;
    }
    if (x->Chave > (*p)->Reg.Chave)
        Pesquisa(x, &(*p)->Dir);
    else
        *x = (*p)->Reg;
}

void Insere(TipoRegistro x, TipoApontador *p) {
    /* IMPLEMENTAR:
     * Insere o registro x na arvore binaria de busca apontada por p.
     * Se a chave ja existir, imprime: "Erro : Registro ja existe na arvore\n"
     */
}

void Antecessor(TipoApontador q, TipoApontador *r) {
    if ((*r)->Dir != NULL) {
        Antecessor(q, &(*r)->Dir);
        return;
    }
    q->Reg = (*r)->Reg;
    q = *r;
    *r = (*r)->Esq;
    free(q);
}

void Retira(TipoRegistro x, TipoApontador *p) {
    /* IMPLEMENTAR:
     * Remove o registro com chave x.Chave da arvore apontada por p.
     * Se a chave nao existir, imprime: "Erro : Registro nao esta na arvore\n"
     * Quando o no possui dois filhos, utilize a funcao Antecessor
     * (que busca o maior elemento da subarvore esquerda).
     */
}

void Pre(TipoApontador p) {
    if (p == NULL) return;
    printf("%ld\n", p->Reg.Chave);
    Pre(p->Esq);
    Pre(p->Dir);
}

void Pos(TipoApontador p) {
    /* IMPLEMENTAR:
     * Imprime os elementos da arvore em pos-ordem (esquerda, direita, raiz),
     * um por linha.
     */
}
