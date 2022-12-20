#include "common.h"


#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800004D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000524.s")
////////////////////////////////////////////////////////////////////////





#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000059C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000064C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000794.s")

/////////////////////////////////////////////////////////////////////////////


#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800007F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000083C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000870.s")
//////////////////////////////////////////////////////////////////////

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800008B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000A88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000C7C.s")

//MATCHES
void func_80000D3C(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000D44.s")
//MATCHES
void func_80000E04(void) {
}


#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000E0C.s")


void func_80000E48(void) {
}

void func_80000E50(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80000E58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000101C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001480.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000156C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001698.s")
///////////////////////////////////////////////////////////////////////////////////////////

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800018A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800018B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800018C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800018CC.s")

//MATCHING
void func_800018E8(s32 arg0, s32 arg1,s32 arg2)
{

}


#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800018F8.s")

//glabel func_800018F8
///* 24F8 800018F8 27BDFFF8 */  addiu      $sp, $sp, -0x8
///* 24FC 800018FC AFA40008 */  sw         $a0, 0x8($sp)
///* 2500 80001900 AFA5000C */  sw         $a1, 0xC($sp)
///* 2504 80001904 AFA60010 */  sw         $a2, 0x10($sp)
///* 2508 80001908 AFA70014 */  sw         $a3, 0x14($sp)
///* 250C 8000190C 03E00008 */  jr         $ra
///* 2510 80001910 27BD0008 */   addiu     $sp, $sp, 0x8


// void func_800018F8(s32 arg0,s32 arg1,s32 arg2,s32 arg3)
// {
// s32 var0;
// s32 var0;

// }


#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001914.s")
//???????????????????????????????????????????????????????????????????????????




#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800019A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001A04.s")


// glabel func_80001A04
// /* 2604 80001A04 3C018002 */  lui        $at, %hi(D_8001C4B0)
// /* 2608 80001A08 AFA40000 */  sw         $a0, 0x0($sp)
// /* 260C 80001A0C 03E00008 */  jr         $ra
// /* 2610 80001A10 A024C4B0 */   sb        $a0, %lo(D_8001C4B0)($at)


//  void func_80001A04(s32 arg0)
// {
//  s32* temp_at;

// temp_at = &D_8001C4B0; 


// temp_at[D_8001C4B0 & 0x0000FFFF] = arg0;

// // temp_at = 0x8001C4B0;
// //  temp_at[0xC4B0] = arg0;

// }

 




#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001A14.s")



// glabel func_80001A14
// /* 2614 80001A14 3C028000 */  lui        $v0, %hi(osTvType)
// /* 2618 80001A18 8C420300 */  lw         $v0, %lo(osTvType)($v0)
// /* 261C 80001A1C 03E00008 */  jr         $ra
// /* 2620 80001A20 00000000 */   nop
// /* 2624 80001A24 00000000 */  nop
// /* 2628 80001A28 00000000 */  nop
// /* 262C 80001A2C 00000000 */  nop

// void func_80001A14()
// {
// s32 retval;

// retval = osTvType;



// }




#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001C00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80001F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800020E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002210.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002398.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800025E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800026C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002730.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800029D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002A70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002B00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002C50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002D10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80002EEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000307C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800030C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800031E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800035B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800035D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800036B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800038C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800039C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800039E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003C00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003C10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003C80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003E70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80003F80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000423C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800045A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800046E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800049B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004DF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004F20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80004F80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800051D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800051E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800051F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005400.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005480.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800054E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005660.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800056A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005A60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005BCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005DB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005EF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005F60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80005F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800060D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800060EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006104.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006138.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800061B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800061D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000620C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800062C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006360.s")

void func_80006370(void) {
}

void func_80006378(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006380.s")

void func_8000646C(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006578.s")

void func_800065C0(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800065C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006658.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800066B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800066D0.s")

void func_80006700(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800069A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006E88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80006FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800072C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800073F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007400.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800074B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007530.s")

//glabel func_80007530
///* 8130 80007530 AFA40000 */  sw         $a0, 0x0($sp)
///* 8134 80007534 03E00008 */  jr         $ra
///* 8138 80007538 AFA50004 */   sw        $a1, 0x4($sp)
///* 813C 8000753C 00000000 */  nop


// void func_80007530(s32 arg0,s32 arg1)
// {


// }



#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000762C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000769C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800077C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000784C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800078C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800078DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800078F8.s")

void func_80007900(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007954.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007AD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007DD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007EE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80007F80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800080E4.s")

void func_8000813C(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000843C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800086BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800086C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800087C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000882C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800089A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800089F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008A44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008AC4.s")

void func_80008B78(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008BA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008C2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008E00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008E70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008F4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80008FC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000900C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80009080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800090F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_800091EC.s")

void func_80009A04(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_80009A0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000A030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000A134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000A1A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000A330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000A360.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000A3A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000A3B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/func_800004D0/func_8000A3E0.s")



//MATCHES
s32 func_8000A410(s32 arg0)
{
s32 retval;
retval = *(s32*)(arg0 + 0x2C);

return retval;

}
//nop
//nop
 



