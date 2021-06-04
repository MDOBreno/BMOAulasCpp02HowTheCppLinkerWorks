//
//  Log.h
//  Aula02HowTheCppLinkerWorks
//
//  Created by Breno Medeiros on 23/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

//#ifndef Log_h
//#define Log_h


//#endif /* Log_h */

//Repare que na linha abaixo estamos fazendo algo nao recomendado(que devia ser escrito em "log.hpp"
// e não nesse arquivo atual "Log.h"), mas que funcionará, pois o compilador ao chamar o metodo
// Logr(const char*) no arquivo main.cpp ele primeiro procura se em algum arquivo .hpp existe essa
// declaracao de metodo, e existindo ele vai buscar a implementacao desse metodo em algum arquivo
// *.cpp(que nesse caso foi o log.cpp) que foi transformado em binario(nesse caso log.o).
// Resumindo: O compilador não se importa se a declaracao do metodo esta em um arquivo header com nome
// diferente do arquivo cpp que contem a implementacao do metodo, nesse caso os arquivos "log.cpp" e "Log.h"
void Logr(const char* mensagem);

