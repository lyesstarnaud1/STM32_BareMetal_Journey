**The size of variables types**
in this project i have learned that different compilers can give different sizes to the same variable type 
and this will create a problem of code portability ,
**soltion**
use stdint library **"#include<stdint.h>"** ,this will give us the right to use a preselected size variable type 
**E.G: uint32_t variable1;** --> unsigned integer of 32bit (4 bytes size) instead of using **unsigned int variable1**
there are other sizes(int8_t,uint8_t,uint16_t....Etc)
