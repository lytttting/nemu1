#include "cpu/exec/template-start.h"
#define instr je

static void do_execute() {
    DATA_TYPE_S a;
      
	   a=(int8_t)op_src->val;
      if(cpu.ZF==1)      cpu.eip+=a;
      a=op_src->val;
      print_asm_template1();
      return;
}

make_instr_helper(i)


#include "cpu/exec/template-end.h"
