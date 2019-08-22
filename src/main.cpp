#include <bits/stdc++.h>
#include "comentario.hpp"
#include "produto.hpp"

int main(){
    // Usando a classe comentário
    Comentario c;
    c.set_titulo("Meu titulo");
    std::cout << c.get_titulo() << std::endl;

    // Usando a classe produto
    Produto p;
    p.set_nome("Produto 1");
    std::cout << p.get_nome() << std::endl;

    // Usando as classes comentário e produto ao mesmo tempo
    p.add_comentario(c);

    std::cout << "Comentarios: " << std::endl;
    for(auto &comentario : p.get_comentarios()){
        std::cout << "\t" << comentario.get_titulo() << std::endl;
    }

    return 0;
}