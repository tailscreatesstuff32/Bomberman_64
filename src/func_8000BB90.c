#include "common.h"






#pragma GLOBAL_ASM("asm/nonmatchings/func_8000BB90/func_8000BB90.s")


#pragma GLOBAL_ASM("asm/nonmatchings/func_8000BB90/func_8000BBC0.s")
// glabel func_8000BBC0
// /* C7C0 8000BBC0 27BDFFD8 */  addiu      $sp, $sp, -0x28
// /* C7C4 8000BBC4 AFBF0014 */  sw         $ra, 0x14($sp)
// /* C7C8 8000BBC8 240E0011 */  addiu      $t6, $zero, 0x11
// /* C7CC 8000BBCC A7AE0018 */  sh         $t6, 0x18($sp)
// /* C7D0 8000BBD0 27A50018 */  addiu      $a1, $sp, 0x18
// /* C7D4 8000BBD4 24840048 */  addiu      $a0, $a0, 0x48
// /* C7D8 8000BBD8 0C001DA7 */  jal        func_8000769C
// /* C7DC 8000BBDC 00003025 */   or        $a2, $zero, $zero
// /* C7E0 8000BBE0 8FBF0014 */  lw         $ra, 0x14($sp)
// /* C7E4 8000BBE4 27BD0028 */  addiu      $sp, $sp, 0x28
// /* C7E8 8000BBE8 03E00008 */  jr         $ra
// /* C7EC 8000BBEC 00000000 */   nop

// void func_8000BBC0(s32 arg0,s32 arg1,s32 arg2)
// {
// s32 temp_t6;


// //t6+=0x11;




// //func_8000769C()




// }





//MATCHES
s32 func_8000BBF0(s32 arg0)
{
s32 retval;
retval = *(s32*)(arg0 + 0x2C);
return retval;
}
//nop
//nop



