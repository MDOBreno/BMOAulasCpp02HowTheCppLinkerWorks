//
//  main.cpp
//  Aula02HowTheCppLinkerWorks
//
//  Created by Breno Medeiros on 22/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>
#include "Log.h"

void Log(const char* mensagem); //Repare que o retorno é 'int' e o nome da funcao é 'Log()'

//Por 'static' no começo da linha abaixo é dizer que essa funcao so é chamada nesse arquivo,
// e sendo assim, se não chamarmos 'Multiplicar()' na main, logo nunca chamaremos a 'Log()',
// e por tanto, nunca ocorre-ra o erro de Linking com o método 'Logr()' por ter nome diferente.
static int Multiplicar(int a, int b) {
    Log("Multiplicar");
    return a * b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << Multiplicar(5, 8);   //Descomentando esta linha veras os erros de Linking
    std::cin.get();
    return 0;
}
