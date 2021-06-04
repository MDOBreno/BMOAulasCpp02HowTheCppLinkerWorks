//
//  log.cpp
//  Aula02HowTheCppLinkerWorks
//
//  Created by Breno Medeiros on 22/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include "log.hpp"

#include <iostream>
#include "Log.h"

void InitLog() {
    Logr("Inicializar Log");
}

void Logr(const char* mensagem) {
    std::cout << mensagem << std::endl;
}
