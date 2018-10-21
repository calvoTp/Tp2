/*
 * Archivo.h
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#ifndef SRC_ARCHIVO_H_
#define SRC_ARCHIVO_H_

#include <fstream>
using namespace std;

class Archivo {

private:
	ifstream archivo;

public:
	Archivo();
	virtual ~Archivo();
};

#endif /* SRC_ARCHIVO_H_ */
