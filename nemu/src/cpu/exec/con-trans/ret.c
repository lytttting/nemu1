#include "cpu/exec/helper.h"

/*#define DATA_BYTE 1
#include "ret-template.h"
#undef DATA_BYTE

#define DATA_BYTE 2
#include "ret-template.h"
#undef DATA_BYTE

#define DATA_BYTE 4
#include "ret-template.h"
#undef DATA_BYTE*/

/* for instruction encoding overloading */

make_helper(ret){
    cpu.eip=swaddr_read(cpu.esp,4)-1;
    cpu.esp=cpu.esp+4;
    return 1;
}