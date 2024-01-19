// A Função “Altura” foi retirada do livro Algoritmos em
Linguagem c
// de Paulo Feofiloff.
// A função recebe uma árvore binária e calcula sua altura.
int Altura (arvore r) {
 if (r == NULL)
 return -1; /* a altura de uma árvore vazia é -1 */
 else {
 int he = Altura (r->esq);
 int hd = Altura (r->dir);
 if (he < hd)
 return hd + 1;
 else
 return he + 1;
 }
 }
// A Função atribui valor ao campo int aux do nó.
//calcula o fator de balanceamento do nó.
void atribui_aux (arvore r) {
if(r!=NULL) {
 r->aux = Altura(r->esq) - Altura(r->dir);
 atribui_aux (r->dir);
 atribui_aux (r->esq);
}
}
// Função que testa se a arvore é balanceada e
// devolve 1 caso seja verdade e 0 para falso.
int testa_arvore (arvore r) {
if(r!=NULL) {
if(abs(r->aux)>1) {
return 0;
}
if(arv_AVL(r->esq)==0) {
return 0;
}
if(arv_AVL(r->dir)==0) {
return 0;
}
}
return 1;
 }
