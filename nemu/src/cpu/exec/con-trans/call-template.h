#include "cpu/exec/template-start.h"

#define instr call

static void do_execute() {
	swaddr_write(cpu.esp-4,4,cpu.eip+5);
	cpu.esp=cpu.esp-4;
	cpu.eip=cpu.eip+op_src->val;
	print_asm_template1();
}

make_instr_helper(i)


#include "cpu/exec/template-end.h"
