#ifndef __CREATE_H__
#define __CREATE_H__
#include "../utils/files.h"
#include "../utils/string.h"
#include "test.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void commandCreate(tokenMat argsMat);
void createAssignment(String *serverPath, String *assignment);
#endif
