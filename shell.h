#ifndef SHELL_H
#define SHELL_H

#include <stdint.h>

#define FALSE 0
#define TRUE 1

#define MIPS_REGS 32

typedef struct CPU_State_Struct
{
    uint32_t PC;              //Program counter
    uint32_t REGS[MIPS_REGS]; // register file
    uint32_t HI, LO;          // special regs for mult/div
} CPU_State;

// Data Structure for Latch

extern CPU_State CURRENT_STATE, NEXT_STATE;

extern int RUN_BIT; // run bit

uint32_t mem_read_32(uint32_t address);
void mem_write_32(uint32_t address, uint32_t value);
void process_instruction();

#endif