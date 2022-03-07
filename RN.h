#ifndef RN_H
#define RN_H

#include "interface.h"
#include "common.h"

void RN_init();
void RN_step();

#define PRF_SIZE 96

// there are at most JMP_DEPTH checkpoints for prf
#define JMP_DEPTH 6
#endif