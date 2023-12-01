#include "TTDX.h"



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer

void entry(void)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int *piVar16;
  undefined2 unaff_BP;
  int unaff_SI;
  undefined *puVar17;
  undefined *puVar18;
  int unaff_DS;
  bool bVar19;
  undefined uVar20;
  
  puVar11 = (undefined *)0x64;
  bVar19 = 0xff7f < -unaff_DS + 0x1176U;
  iVar10 = -unaff_DS + 0x11f6;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  if (!bVar19) {
    FUN_1020_0002();
    return;
  }
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  puVar12 = puVar11 + -2;
  *(undefined2 *)(puVar11 + -2) = unaff_BP;
  pcVar5 = (code *)swi(0x21);
  cVar6 = (*pcVar5)();
  *(char *)(iVar10 + unaff_SI) = *(char *)(iVar10 + unaff_SI) + cVar6;
  *(char *)(iVar10 + unaff_SI) = *(char *)(iVar10 + unaff_SI) + cVar6;
  *(char *)(iVar10 + unaff_SI) = *(char *)(iVar10 + unaff_SI) + cVar6;
  *(char *)(iVar10 + unaff_SI) = *(char *)(iVar10 + unaff_SI) + cVar6;
  *(char *)(iVar10 + unaff_SI) = *(char *)(iVar10 + unaff_SI) + cVar6;
  *(char *)(iVar10 + unaff_SI) = *(char *)(iVar10 + unaff_SI) + cVar6;
  *(undefined2 *)(puVar12 + -2) = 0x1020;
  iVar10 = *(int *)(puVar12 + -2);
  *(undefined2 *)(puVar12 + -2) = 1;
  *(undefined2 *)(puVar12 + -4) = 0x72;
  *(undefined2 *)(puVar12 + -6) = 0x1020;
  *(undefined2 *)(puVar12 + -8) = 0x27f;
  iVar7 = FUN_1079_0088();
  puVar13 = puVar12 + -4;
  if (iVar7 != 0) {
    *(int *)0x4ed = iVar7;
    *(undefined2 *)(puVar12 + -6) = 1;
    *(undefined2 *)(puVar12 + -8) = 0x40;
    *(undefined2 *)(puVar12 + -10) = 0x1079;
    *(undefined2 *)(puVar12 + -0xc) = 0x296;
    iVar7 = FUN_1079_0088();
    puVar13 = puVar12 + -8;
    if (iVar7 != 0) {
      *(int *)0x4ef = iVar7;
      uVar4 = *(undefined2 *)0x4ed;
      puVar18 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
      for (iVar10 = 0x714; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar18;
        puVar18 = puVar18 + 1;
        puVar2 = puVar17;
        puVar17 = puVar17 + 1;
        *puVar3 = *puVar2;
      }
      *(undefined2 *)(puVar12 + -10) = uVar4;
      *(undefined2 *)(puVar12 + -0xc) = 0x48;
      return;
    }
  }
  uVar20 = 0;
  *(undefined2 *)(puVar13 + -2) = 2;
  *(undefined2 *)(puVar13 + -4) = 0x1079;
  puVar14 = puVar13 + -6;
  *(undefined2 *)(puVar13 + -6) = 0x39b;
  FUN_1027_018e();
  puVar17 = puVar11 + -2;
  do {
    do {
      *(int *)(puVar14 + -2) = iVar10;
      *(undefined2 *)(puVar14 + -4) = 0x36b;
      *(undefined2 *)(puVar14 + -6) = 9;
      *(undefined2 *)(puVar14 + -8) = 0x1079;
      puVar15 = puVar14 + -10;
      *(undefined2 *)(puVar14 + -10) = 0x3a8;
      FUN_1027_018e();
      puVar14 = puVar15 + -2;
      *(undefined **)(puVar15 + -2) = puVar17;
      pcVar5 = (code *)swi(0x21);
      (*pcVar5)();
      puVar17 = puVar15 + -2;
    } while ((bool)uVar20);
    piVar16 = (int *)(puVar14 + -2);
    puVar14 = puVar14 + -2;
    *piVar16 = iVar10;
    iVar10 = *(int *)(puVar15 + 2);
    while( true ) {
      uVar9 = 0xff00;
      uVar20 = false;
      if (*(int *)(puVar15 + 10) == 0) {
        uVar9 = *(uint *)(puVar15 + 8);
      }
      pcVar5 = (code *)swi(0x21);
      uVar8 = (*pcVar5)();
      puVar17 = puVar15 + -2;
      if (((bool)uVar20) || (uVar20 = uVar8 < uVar9, puVar17 = puVar15 + -2, (bool)uVar20)) break;
      puVar1 = (uint *)(puVar15 + 8);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 - uVar9;
      if (uVar8 < uVar9) {
        *(int *)(puVar15 + 10) = *(int *)(puVar15 + 10) + -1;
      }
      else if (*puVar1 == 0) {
        return;
      }
      iVar10 = iVar10 + (uVar9 >> 4);
    }
  } while( true );
}



// WARNING: This function may have set the stack pointer

void FUN_1020_0002(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuVar10;
  int unaff_SI;
  undefined *puVar11;
  undefined *puVar12;
  int unaff_DS;
  bool bVar13;
  undefined uVar14;
  uint uStack0004;
  int iStack0006;
  undefined2 in_stack_00000008;
  undefined *puStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_2 = 0x1020;
  uStack_4 = 0x207;
  uStack_2 = FUN_108f_0002();
  uStack_4 = 0x108f;
  puStack_6 = (undefined *)0x20d;
  FUN_1020_005a();
  bVar13 = 0xff7f < -unaff_DS + 0x1176U;
  iVar9 = -unaff_DS + 0x11f6;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  if (!bVar13) {
    FUN_1020_0002();
    return;
  }
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  pcVar3 = (code *)swi(0x21);
  cVar4 = (*pcVar3)();
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  in_stack_00000008 = 0x72;
  iStack0006 = 0x1020;
  uStack0004 = 0x27f;
  iVar9 = FUN_1079_0088();
  if (iVar9 != 0) {
    iStack0006 = 1;
    uStack0004 = 0x40;
    iRam000106ed = iVar9;
    iVar5 = FUN_1079_0088();
    iVar9 = iRam000106ed;
    if (iVar5 != 0) {
      puVar12 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
      iRam000106ef = iVar5;
      for (iVar7 = 0x714; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar12;
        puVar12 = puVar12 + 1;
        puVar1 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar2 = *puVar1;
      }
      return;
    }
  }
  uVar14 = 0;
  uStack_2 = 0x39b;
  FUN_1027_018e();
  ppuVar10 = (undefined **)&stack0x0008;
  do {
    do {
      uStack_2 = 0x36b;
      uStack_4 = 9;
      puStack_6 = (undefined *)0x1079;
      FUN_1027_018e();
      pcVar3 = (code *)swi(0x21);
      puStack_6 = (undefined *)ppuVar10;
      (*pcVar3)();
      ppuVar10 = &puStack_6;
    } while ((bool)uVar14);
    while( true ) {
      uVar14 = false;
      uVar8 = 0xff00;
      if (iStack0006 == 0) {
        uVar8 = uStack0004;
      }
      pcVar3 = (code *)swi(0x21);
      uVar6 = (*pcVar3)();
      ppuVar10 = &puStack_6;
      if (((bool)uVar14) || (uVar14 = uVar6 < uVar8, ppuVar10 = &puStack_6, (bool)uVar14)) break;
      bVar13 = uStack0004 < uVar8;
      uStack0004 = uStack0004 - uVar8;
      if (bVar13) {
        iStack0006 = iStack0006 + -1;
      }
      else if (uStack0004 == 0) {
        return;
      }
    }
  } while( true );
}



// WARNING: This function may have set the stack pointer

void FUN_1020_000d(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuVar10;
  int unaff_SI;
  undefined *puVar11;
  undefined *puVar12;
  int unaff_DS;
  bool bVar13;
  undefined uVar14;
  uint uStack0006;
  int iStack0008;
  undefined2 in_stack_0000000a;
  undefined *puStack_4;
  undefined2 uStack_2;
  
  bVar13 = 0xff7f < -unaff_DS + 0x1176U;
  iVar9 = -unaff_DS + 0x11f6;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  if (!bVar13) {
    FUN_1020_0002();
    return;
  }
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  pcVar3 = (code *)swi(0x21);
  cVar4 = (*pcVar3)();
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  *(char *)(iVar9 + unaff_SI) = *(char *)(iVar9 + unaff_SI) + cVar4;
  in_stack_0000000a = 0x72;
  iStack0008 = 0x1020;
  uStack0006 = 0x27f;
  iVar9 = FUN_1079_0088();
  if (iVar9 != 0) {
    iStack0008 = 1;
    uStack0006 = 0x40;
    iRam000106ed = iVar9;
    iVar5 = FUN_1079_0088();
    iVar9 = iRam000106ed;
    if (iVar5 != 0) {
      puVar12 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
      iRam000106ef = iVar5;
      for (iVar7 = 0x714; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar12;
        puVar12 = puVar12 + 1;
        puVar1 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar2 = *puVar1;
      }
      return;
    }
  }
  uVar14 = 0;
  FUN_1027_018e();
  ppuVar10 = (undefined **)&stack0x000a;
  do {
    do {
      uStack_2 = 9;
      puStack_4 = (undefined *)0x1079;
      FUN_1027_018e();
      pcVar3 = (code *)swi(0x21);
      puStack_4 = (undefined *)ppuVar10;
      (*pcVar3)();
      ppuVar10 = &puStack_4;
    } while ((bool)uVar14);
    while( true ) {
      uVar14 = false;
      uVar8 = 0xff00;
      if (iStack0008 == 0) {
        uVar8 = uStack0006;
      }
      pcVar3 = (code *)swi(0x21);
      uVar6 = (*pcVar3)();
      ppuVar10 = &puStack_4;
      if (((bool)uVar14) || (uVar14 = uVar6 < uVar8, ppuVar10 = &puStack_4, (bool)uVar14)) break;
      bVar13 = uStack0006 < uVar8;
      uStack0006 = uStack0006 - uVar8;
      if (bVar13) {
        iStack0008 = iStack0008 + -1;
      }
      else if (uStack0006 == 0) {
        return;
      }
    }
  } while( true );
}



void FUN_1020_005a(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int in_BX;
  undefined **ppuVar10;
  int unaff_SI;
  undefined *puVar11;
  undefined *puVar12;
  undefined2 unaff_DS;
  undefined uVar13;
  bool bVar14;
  undefined *puStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  uint uStack_6;
  int iStack_4;
  
  pcVar3 = (code *)swi(0x21);
  cVar4 = (*pcVar3)();
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar4;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar4;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar4;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar4;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar4;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar4;
  iStack_4 = 0x1020;
  uStack_6 = 0x27f;
  iVar5 = FUN_1079_0088();
  if (iVar5 != 0) {
    iStack_4 = 1;
    uStack_6 = 0x40;
    iStack_8 = 0x1079;
    iStack_a = 0x296;
    iRam000106ed = iVar5;
    iVar6 = FUN_1079_0088();
    iVar5 = iRam000106ed;
    if (iVar6 != 0) {
      puVar12 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
      iRam000106ef = iVar6;
      for (iVar8 = 0x714; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar2 = puVar12;
        puVar12 = puVar12 + 1;
        puVar1 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar2 = *puVar1;
      }
      return;
    }
  }
  uVar13 = 0;
  iStack_8 = 2;
  iStack_a = 0x1079;
  iStack_c = 0x39b;
  FUN_1027_018e();
  ppuVar10 = (undefined **)&stack0xfffe;
  iVar5 = 0x1020;
  do {
    do {
      iStack_c = 0x36b;
      uStack_e = 9;
      puStack_10 = (undefined *)0x1079;
      iStack_a = iVar5;
      FUN_1027_018e();
      pcVar3 = (code *)swi(0x21);
      puStack_10 = (undefined *)ppuVar10;
      (*pcVar3)();
      ppuVar10 = &puStack_10;
      iVar6 = iStack_c;
    } while ((bool)uVar13);
    while( true ) {
      iStack_8 = iVar5;
      uVar13 = false;
      uVar9 = 0xff00;
      if (iStack_4 == 0) {
        uVar9 = uStack_6;
      }
      pcVar3 = (code *)swi(0x21);
      uVar7 = (*pcVar3)();
      ppuVar10 = &puStack_10;
      iVar5 = iVar6;
      if (((bool)uVar13) || (uVar13 = uVar7 < uVar9, ppuVar10 = &puStack_10, (bool)uVar13)) break;
      bVar14 = uStack_6 < uVar9;
      uStack_6 = uStack_6 - uVar9;
      if (bVar14) {
        iStack_4 = iStack_4 + -1;
      }
      else if (uStack_6 == 0) {
        return;
      }
      iVar6 = iVar6 + (uVar9 >> 4);
      iVar5 = iStack_8;
    }
  } while( true );
}



void __cdecl16far FUN_1027_0000(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined **unaff_BP;
  undefined *puVar9;
  undefined *puVar10;
  undefined uVar11;
  bool bVar12;
  undefined *puStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  uint uStack_8;
  int iStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_2 = 1;
  uStack_4 = 0x72;
  iStack_6 = 0x1027;
  uStack_8 = 0x27f;
  iVar4 = FUN_1079_0088();
  if (iVar4 != 0) {
    iStack_6 = 1;
    uStack_8 = 0x40;
    iStack_a = 0x1079;
    iStack_c = 0x296;
    iRam0001075d = iVar4;
    iVar5 = FUN_1079_0088();
    iVar4 = iRam0001075d;
    if (iVar5 != 0) {
      puVar10 = (undefined *)0x0;
      puVar9 = (undefined *)0x0;
      iRam0001075f = iVar5;
      for (iVar7 = 0x714; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar10;
        puVar10 = puVar10 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar1;
      }
      return;
    }
  }
  uVar11 = 0;
  iStack_a = 2;
  iStack_c = 0x1079;
  iStack_e = 0x39b;
  FUN_1027_018e();
  iVar4 = 0x1027;
  do {
    do {
      iStack_e = 0x36b;
      uStack_10 = 9;
      puStack_12 = (undefined *)0x1079;
      iStack_c = iVar4;
      FUN_1027_018e();
      pcVar3 = (code *)swi(0x21);
      puStack_12 = (undefined *)unaff_BP;
      (*pcVar3)();
      unaff_BP = &puStack_12;
      iVar5 = iStack_e;
    } while ((bool)uVar11);
    while( true ) {
      iStack_a = iVar4;
      uVar11 = false;
      uVar8 = 0xff00;
      if (iStack_6 == 0) {
        uVar8 = uStack_8;
      }
      pcVar3 = (code *)swi(0x21);
      uVar6 = (*pcVar3)();
      unaff_BP = &puStack_12;
      iVar4 = iVar5;
      if (((bool)uVar11) || (uVar11 = uVar6 < uVar8, unaff_BP = &puStack_12, (bool)uVar11)) break;
      bVar12 = uStack_8 < uVar8;
      uStack_8 = uStack_8 - uVar8;
      if (bVar12) {
        iStack_6 = iStack_6 + -1;
      }
      else if (uStack_8 == 0) {
        return;
      }
      iVar5 = iVar5 + (uVar8 >> 4);
      iVar4 = iStack_a;
    }
  } while( true );
}



// WARNING: Instruction at (ram,0x0001062e) overlaps instruction at (ram,0x0001062d)
// 
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2
FUN_1027_018e(undefined2 param_1_00,char param_1,undefined2 *param_2,undefined *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
             undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,undefined4 *param_12,
             undefined4 *param_13,undefined4 *param_14,undefined4 *param_15,undefined4 *param_16,
             undefined4 *param_17)

{
  char *pcVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined4 *puVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  undefined4 *puVar13;
  byte bVar15;
  undefined2 uVar14;
  undefined4 *puVar16;
  byte *pbVar17;
  byte bVar19;
  undefined4 *puVar18;
  char *pcVar20;
  undefined4 *puVar21;
  undefined4 in_EBP;
  int *piVar22;
  undefined4 *puVar23;
  int unaff_SI;
  byte *pbVar24;
  uint uVar25;
  undefined2 *puVar26;
  undefined4 *puVar27;
  char *in_EDI;
  undefined2 *puVar28;
  undefined2 uVar29;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 in_FS;
  undefined2 in_GS;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  undefined2 in_stack_00000000;
  undefined2 *puStack_a;
  uint uStack_8;
  int iStack_2;
  
  iStack_2 = (int)in_EBP;
  piVar22 = (int *)CONCAT22((int)((ulong)in_EBP >> 0x10),&iStack_2);
  pcVar8 = (code *)swi(0x21);
  (*pcVar8)();
  pcVar20 = *(char **)((((int *)piVar22)[3] + -1) * 2 + 0x1ed);
  while( true ) {
    uVar14 = (undefined2)((ulong)in_EDI >> 0x10);
    pcVar1 = pcVar20;
    if (*pcVar1 == '\0') break;
    pcVar20 = pcVar20 + 1;
    if (*pcVar1 == '@') {
      unaff_ES = (undefined2)((ulong)*(char **)((int *)piVar22 + 4) >> 0x10);
      in_EDI = (char *)CONCAT22(uVar14,(char *)*(char **)((int *)piVar22 + 4));
      while (*(char *)in_EDI != '\0') {
        in_EDI = (char *)CONCAT22((int)((ulong)in_EDI >> 0x10),(char *)in_EDI + 1);
        pcVar8 = (code *)swi(0x21);
        (*pcVar8)();
      }
    }
    else {
      pcVar8 = (code *)swi(0x21);
      (*pcVar8)();
    }
  }
  pcVar8 = (code *)swi(0x21);
  (*pcVar8)();
  uVar29 = (undefined2)((ulong)piVar22 >> 0x10);
  pcVar8 = (code *)swi(0x21);
  (*pcVar8)();
  puVar9 = param_16;
  puVar23 = (undefined4 *)CONCAT22(uVar29,param_7);
  puVar16 = param_10._2_2_;
  bVar10 = param_10._3_1_;
  puVar13 = param_11;
  puVar18 = (undefined4 *)param_10;
  puVar27 = param_5;
  puVar21 = param_12;
  if (unaff_SI == -1) {
LAB_1027_023b:
    param_11 = (undefined4 *)&param_12;
    puVar28 = (undefined2 *)CONCAT22(uVar14,(undefined2 *)((int)puVar27 + -1));
    pbVar17 = (byte *)((int)param_6 + -1);
    param_10 = (undefined4 *)CONCAT22(&param_11,(undefined4 *)param_10);
    puVar18 = (undefined4 *)((int)puVar18 + 1);
    pbVar2 = (byte *)((int)param_9 + (int)(undefined2 *)((int)puVar27 + -1)) + 0x73;
    *pbVar2 = *pbVar2 & bVar10;
    pbVar2 = (byte *)((int)(undefined4 *)puVar23 + 0x6f);
    *pbVar2 = *pbVar2 & bVar10;
    puVar16 = (undefined4 *)&param_12;
    if (*pbVar2 == 0) {
LAB_1027_0268:
      param_11 = puVar16;
      puVar26 = (undefined2 *)puVar28;
      bVar19 = (byte)((uint)puVar18 >> 8);
      *(byte *)((int)param_9 + (int)puVar26) = *(byte *)((int)param_9 + (int)puVar26) + bVar19;
      param_6 = (undefined4 *)((uint)pbVar17 ^ *(uint *)((int)param_9 + (int)pbVar17));
      puVar16 = (undefined4 *)puVar23;
      bVar15 = (byte)((uint)param_9 >> 8);
      *(byte *)((int)puVar16 + (int)param_6) = *(byte *)((int)puVar16 + (int)param_6) ^ bVar15;
      *(byte *)((int)param_6 + 0x4f) = *(byte *)((int)param_6 + 0x4f) & (byte)puVar13;
      param_10 = (undefined4 *)CONCAT22(param_9,(undefined4 *)param_10);
      pbVar2 = (byte *)((int)puVar16 + 0x65);
      *pbVar2 = *pbVar2 & bVar19;
      bVar32 = *pbVar2 == 0;
      if (true) {
        puVar7 = (undefined4 *)((long)*(int *)((int)param_9 + 0x6e) * 0x6d20);
        puVar21 = (undefined4 *)puVar7;
        puVar23 = (undefined4 *)((ulong)puVar7 & 0xffff);
        bVar31 = (undefined4 *)(long)(int)puVar21 != puVar7;
        if (bVar32) {
          bVar30 = bVar31;
          if (bVar32) goto LAB_1027_02a5;
code_r0x000104f5:
          uVar25 = (uint)(undefined4 *)puVar23 ^ _DAT_1000_22a0;
          bVar32 = (int)uVar25 < 0;
          bVar30 = uVar25 == 0;
          out(*(undefined2 *)param_6,puVar18);
          if (false) {
            puVar13 = (undefined4 *)
                      CONCAT11((byte)((uint)(byte *)((int)puVar13 + 1) >> 8) &
                               *(byte *)((int)param_9 + (int)(undefined2 *)((int)param_6 + 2)),
                               (char)(byte *)((int)puVar13 + 1));
            puVar26 = (undefined2 *)((int)param_6 + 3);
            out(*(byte *)(undefined2 *)((int)param_6 + 2),puVar18);
            param_6 = (undefined4 *)((int)param_6 + 5);
            out(*puVar26,puVar18);
            goto code_r0x00010519;
          }
          bVar10 = in(puVar18);
          *(byte *)(undefined2 *)puVar28 = bVar10;
          puVar28 = (undefined2 *)((ulong)param_10 >> 0x10);
          puVar23 = (undefined4 *)ZEXT24(param_12);
          bVar10 = (byte)((uint)param_16 >> 8);
          puVar13 = param_17;
          puVar18 = param_15;
          param_9 = param_14;
          param_6 = param_11;
          puVar16 = param_11;
          if (!bVar30) goto LAB_1027_0295;
          goto LAB_1027_02f7_1;
        }
LAB_1027_02f6:
        puVar21 = (undefined4 *)((int)puVar21 + 1);
        bVar32 = (int)puVar21 < 0;
        bVar30 = puVar21 == (undefined4 *)0x0;
        if (!bVar31) {
          puVar23 = param_6;
          param_6 = (undefined4 *)((int)param_6 + 2);
          out(*(undefined2 *)puVar23,puVar18);
code_r0x0001056a:
          if (bVar31) {
            puVar28 = puVar26;
            puVar26 = (undefined2 *)((int)puVar26 + 1);
            bVar10 = in(puVar18);
            *(byte *)puVar28 = bVar10;
            puVar23 = (undefined4 *)((long)*(int *)((int)puVar21 + 0x65) * 0x6220);
            param_5 = (undefined4 *)puVar23;
            bVar31 = (undefined4 *)(long)(int)param_5 != puVar23;
            if (bVar30) {
              puVar21 = param_5;
              if (!bVar31) goto LAB_1027_0328;
              goto LAB_1027_0347_1;
            }
            goto code_r0x000105fa;
          }
          if (!bVar31) goto code_r0x0001056e;
          bVar10 = (byte)puVar13 & ((byte *)((int)param_9 + (int)param_6))[0x22];
          puVar13 = (undefined4 *)(uint)bVar10;
          *(byte *)((int)param_9 + (int)puVar26) = *(byte *)((int)param_9 + (int)puVar26) + bVar10;
          pbVar2 = (byte *)((int)param_9 + (int)param_6) + 0x7400;
          bVar31 = CARRY1(*pbVar2,bVar10);
          *pbVar2 = *pbVar2 + bVar10;
          bVar10 = *pbVar2;
          bVar19 = *pbVar2;
          puVar16 = param_6;
          goto code_r0x000105dc;
        }
        if (!bVar30) {
          puVar4 = (uint *)((int)param_9 + 0x6f);
          iVar12 = ((uint)puVar21 & 3) - (*puVar4 & 3);
          bVar30 = 0 < iVar12;
          *puVar4 = *puVar4 + (uint)bVar31 * iVar12;
          goto code_r0x000105e0;
        }
        goto code_r0x00010656;
      }
      *(uint *)((int)puVar16 + (int)puVar26) =
           *(uint *)((int)puVar16 + (int)puVar26) ^ (uint)param_6;
      *(byte *)((int)param_9 + (int)puVar26) = *(byte *)((int)param_9 + (int)puVar26) ^ bVar15;
      *(byte *)((int)puVar16 + (int)param_6) = *(byte *)((int)puVar16 + (int)param_6) ^ bVar15;
      puVar3 = puVar26 + 0x39;
      *(byte *)puVar3 = *(byte *)puVar3 & (byte)puVar13;
      bVar32 = (char)*(byte *)puVar3 < '\0';
      bVar30 = *(byte *)puVar3 == 0;
LAB_1027_02f7_1:
      puVar21 = (undefined4 *)puVar23;
      puVar26 = (undefined2 *)puVar28;
      bVar31 = false;
      if (true) goto code_r0x0001056a;
LAB_1000_05d9:
      pbVar2 = (byte *)((int)param_9 + (int)param_6);
      bVar31 = 0x8b < *pbVar2;
      *pbVar2 = *pbVar2 + 0x74;
      bVar10 = *pbVar2;
      bVar19 = *pbVar2;
      puVar16 = param_6;
code_r0x000105dc:
      bVar30 = bVar19 == 0;
      if (-1 < (char)bVar10) goto LAB_1000_0640_1;
      out(*(undefined2 *)puVar16,puVar18);
      param_6 = puVar16 + 1;
      out(*(undefined2 *)((int)puVar16 + 2),puVar18);
code_r0x000105e0:
      out(*(byte *)param_6,puVar18);
      puVar16 = (undefined4 *)((int)param_6 + 3);
      out(*(undefined2 *)((int)param_6 + 1),puVar18);
      param_6 = puVar16;
      if (!bVar31 && !bVar30) {
        cVar11 = (char)puVar13;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
        goto LAB_1000_0620_1;
      }
    }
    else {
      if (true) {
        puVar23 = (undefined4 *)
                  CONCAT22((int)((ulong)puVar23 >> 0x10),
                           (undefined4 *)(*(int *)((undefined4 *)puVar23 + 0x1d) * 0x6e69));
        param_11 = (undefined4 *)&param_12;
        goto LAB_1027_024f;
      }
      out(*pbVar17,puVar18);
code_r0x0001052a:
      puVar21 = (undefined4 *)puVar23;
      pbVar2 = (byte *)((int)param_9 + (int)(undefined2 *)puVar28);
      *pbVar2 = *pbVar2 + (char)((uint)puVar18 >> 8);
      param_6 = (undefined4 *)((uint)param_6 ^ *(uint *)((int)param_9 + (int)param_6));
      puVar26 = (undefined2 *)((int)(undefined2 *)puVar28 + -1);
      bVar31 = puVar13 < (undefined4 *)0x7845;
      bVar30 = SBORROW2((int)puVar13,0x7845);
      puVar13 = (undefined4 *)((int)puVar13 + -0x7845);
      bVar32 = puVar13 == (undefined4 *)0x0;
LAB_1027_02c9:
      if (!bVar32) {
        puVar23 = param_6;
        param_6 = (undefined4 *)((int)param_6 + 1);
        out(*(byte *)puVar23,puVar18);
        param_9 = param_9;
        goto LAB_1027_02cc;
      }
LAB_1027_0330:
      *(uint *)((int)puVar21 + (int)param_6) =
           *(uint *)((int)puVar21 + (int)param_6) ^ (uint)param_6;
      bVar31 = false;
      ((byte *)((int)puVar21 + (int)puVar26))[0x68] =
           ((byte *)((int)puVar21 + (int)puVar26))[0x68] & (byte)((uint)puVar13 >> 8);
      puVar13 = param_17;
      puVar18 = param_15;
      param_9 = param_14;
      param_6 = param_11;
      if (false) goto LAB_1027_039a;
      *(undefined2 *)((int)param_11 + 0x65) = *(undefined2 *)((int)param_11 + 0x65);
      puVar21 = param_12;
      puVar26 = (undefined2 *)param_10._2_2_;
LAB_1027_033c:
      puVar16 = param_6;
      if (!bVar31) goto code_r0x000105ae;
LAB_1000_0620_1:
      cVar11 = (char)puVar13;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
LAB_1000_0634_1:
      cVar11 = (char)puVar13;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
LAB_1000_0640_1:
      cVar11 = (char)puVar13;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      *(byte *)((int)param_9 + (int)puVar16) = *(byte *)((int)param_9 + (int)puVar16) + cVar11;
      param_6 = puVar16;
    }
    cVar11 = (char)puVar13;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)puVar26) = *(byte *)((int)param_9 + (int)puVar26) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
  }
  else {
    puVar28 = (undefined2 *)CONCAT22(uVar14,(undefined2 *)((int)param_5 + 1));
    bVar19 = in((undefined4 *)param_10);
    *(byte *)param_5 = bVar19;
    *(byte *)((int)param_5 + 0x73) = *(byte *)((int)param_5 + 0x73) & (byte)((uint)param_11 >> 8);
    if (false) {
LAB_1027_024f:
      *(byte *)(puVar28 + (long)(puVar23 + 4)) =
           *(byte *)(puVar28 + (long)(puVar23 + 4)) & (byte)((uint)puVar18 >> 8);
      puVar26 = (undefined2 *)param_10._2_2_;
      puVar28 = (undefined2 *)ZEXT24(param_10._2_2_);
      puVar23 = (undefined4 *)ZEXT24(param_12);
      bVar10 = (byte)((uint)param_16 >> 8);
      pbVar2 = (byte *)((int)param_12 + (int)param_11) + 0x6f;
      bVar31 = false;
      bVar30 = false;
      *pbVar2 = *pbVar2 & (byte)((uint)param_17 >> 8);
      bVar32 = *pbVar2 == 0;
      param_6 = param_11;
      if (bVar32) {
        puVar13 = (undefined4 *)((int)param_17 + -0x6e69);
        *(byte *)((int)param_11 + 0x4f) = *(byte *)((int)param_11 + 0x4f) & (byte)puVar13;
        param_10 = (undefined4 *)CONCAT22(param_14,(undefined4 *)param_10);
        puVar3 = puVar26 + 0x3c;
        bVar31 = false;
        bVar30 = false;
        *(byte *)puVar3 = *(byte *)puVar3 & (byte)puVar13;
        bVar32 = *(byte *)puVar3 == 0;
        puVar18 = param_15;
        param_9 = param_14;
        if (!bVar32) {
          pbVar17 = (byte *)((int)param_11 + 1);
          out(*(byte *)param_11,param_15);
          puVar16 = param_11;
          goto LAB_1027_0268;
        }
LAB_1027_02cc:
        puVar16 = param_6;
        if (bVar31) {
LAB_1027_02f0:
          param_6 = (undefined4 *)((uint)puVar16 ^ *(uint *)((int)param_9 + (int)puVar16));
          bVar31 = (byte)((uint)puVar13 >> 8) < *(byte *)((int)param_9 + (int)param_6);
          goto LAB_1027_02f6;
        }
        if (bVar30) {
          ((byte *)((int)puVar21 + (int)puVar26))[0x68] =
               ((byte *)((int)puVar21 + (int)puVar26))[0x68] & (byte)((uint)puVar13 >> 8);
          goto LAB_1027_0330;
        }
        if (!bVar32) {
          out(*(byte *)param_6,puVar18);
          puVar23 = (undefined4 *)ZEXT24(param_12);
          bVar10 = (byte)((uint)param_16 >> 8);
          puVar13 = param_17;
          puVar18 = param_15;
          param_9 = param_14;
          param_6 = param_11;
          puVar26 = (undefined2 *)param_10._2_2_;
LAB_1027_02d6:
          puVar28 = (undefined2 *)ZEXT24(puVar26 + 1);
          uVar14 = in(puVar18);
          *puVar26 = uVar14;
          pbVar2 = (byte *)((int)param_9 + (int)(puVar26 + 1)) + 0x73;
          *pbVar2 = *pbVar2 & bVar10;
          *(byte *)((int)param_6 + 0x6f) =
               *(byte *)((int)param_6 + 0x6f) & (byte)((uint)puVar18 >> 8);
          out(*(undefined2 *)param_6,puVar18);
          *(byte *)((int)param_6 + 0x71) = *(byte *)((int)param_6 + 0x71) & bVar10;
          puVar16 = (undefined4 *)((int)param_6 + 3);
          out(*(byte *)(undefined2 *)((int)param_6 + 2),puVar18);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          goto code_r0x0001055b;
        }
        goto LAB_1027_033c;
      }
      puVar13 = param_17;
      puVar18 = param_15;
      param_9 = param_14;
      if (-1 < (char)*pbVar2) {
        param_6 = (undefined4 *)((int)param_11 + 1);
        out(*(byte *)param_11,param_15);
        goto LAB_1027_02cc;
      }
code_r0x000105ae:
      param_9 = (undefined4 *)CONCAT11((byte)((uint)param_9 >> 8) | *(byte *)puVar26,(char)param_9);
      puVar16 = (undefined4 *)((uint)param_6 ^ *(uint *)((int)param_9 + (int)puVar26));
      *(uint *)((int)param_9 + (int)puVar16) =
           *(uint *)((int)param_9 + (int)puVar16) ^ (uint)puVar16;
      bVar31 = (byte)((uint)puVar13 >> 8) < *(byte *)((int)param_9 + (int)puVar16);
LAB_1027_0350:
      if (bVar31) goto LAB_1000_0634_1;
      param_6 = (undefined4 *)((int)puVar16 + 2);
      out(*(undefined2 *)puVar16,puVar18);
      if (bVar31) {
        cVar11 = (char)puVar13;
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
code_r0x000105fa:
        *(byte *)((int)param_9 + (int)param_6) =
             *(byte *)((int)param_9 + (int)param_6) + (char)puVar13;
        *(byte *)((int)param_9 + (int)param_6) =
             *(byte *)((int)param_9 + (int)param_6) + (char)puVar13;
        goto LAB_1000_05fd_1;
      }
      puVar23 = param_6;
      param_6 = puVar16 + 1;
      out(*(undefined2 *)puVar23,puVar18);
      if (!SCARRY2((int)puVar21,1)) {
        puVar23 = param_6;
        param_6 = (undefined4 *)((int)puVar16 + 5);
        out(*(byte *)puVar23,puVar18);
        puVar13 = (undefined4 *)
                  CONCAT11((char)((uint)(byte *)((int)puVar13 + 1) >> 8),
                           (byte)(byte *)((int)puVar13 + 1) & *(byte *)((int)param_9 + (int)param_6)
                          );
        *(byte **)((int)param_9 + (int)param_6) =
             *(byte **)((int)param_9 + (int)param_6) + (int)puVar13;
        goto LAB_1000_05d9;
      }
    }
    else {
      bVar19 = (byte)((ulong)param_10 >> 0x10);
      bVar15 = (byte)((uint)param_9 >> 8);
      if (false) {
        puVar13 = (undefined4 *)((int)param_11 + *(int *)((int)param_9 + (int)param_6));
        puVar4 = (uint *)((int)param_7 + (int)(undefined2 *)((int)param_5 + 1));
        *puVar4 = *puVar4 ^ (uint)param_6;
        *(byte *)((int)param_7 + (int)param_6) =
             *(byte *)((int)param_7 + (int)param_6) ^ (byte)((ulong)param_10 >> 8);
        *(byte *)((int)param_7 + (int)param_6) = *(byte *)((int)param_7 + (int)param_6) ^ bVar15;
        pbVar2 = (byte *)((int)param_7 + 0x6f);
        bVar30 = false;
        *pbVar2 = *pbVar2 & bVar19;
        bVar32 = *pbVar2 == 0;
      }
      else {
        puVar26 = (undefined2 *)((int)param_5 + 2);
        pbVar24 = (byte *)((int)param_6 + -1);
        param_10 = (undefined4 *)CONCAT22(&param_11,(undefined4 *)param_10);
        pbVar17 = (byte *)((int)(undefined4 *)param_10 + 1);
        iVar12 = CONCAT11((byte)(((uint)param_11 & 0xff0d) >> 8) | *pbVar24,
                          (char)((uint)param_11 & 0xff0d)) + *(int *)((int)param_7 + (int)pbVar24);
        bVar6 = *(byte *)((int)param_7 + (int)pbVar24);
        uVar25 = *(uint *)((int)param_7 + (int)pbVar24);
        puVar28 = (undefined2 *)CONCAT22(uVar14,puVar26);
        bVar5 = in(pbVar17);
        *(byte *)((int)param_5 + 1) = bVar5;
        puVar23 = (undefined4 *)
                  CONCAT22(uVar29,(undefined4 *)
                                  (CONCAT11((char)((uint)iVar12 >> 8),(char)iVar12 + 2U ^ bVar6) ^
                                  uVar25));
        param_9 = (undefined4 *)CONCAT11(bVar15 + *(byte *)((int)param_6 + -0x10ff),(char)param_9);
        puVar16 = (undefined4 *)
                  (CONCAT11(bVar10 + *(byte *)(param_5 + 1),bVar19 + *(byte *)puVar26) +
                  *(int *)((byte *)((int)param_9 + (int)puVar26) + 3));
        bVar10 = (byte)((uint)pbVar17 >> 8);
        *(byte *)((int)param_9 + (int)puVar26) = *(byte *)((int)param_9 + (int)puVar26) + bVar10;
        uVar25 = (uint)pbVar24 ^ *(uint *)((int)param_9 + (int)pbVar24);
        puVar18 = (undefined4 *)CONCAT11(bVar10 ^ *(byte *)((int)param_9 + uVar25),(char)pbVar17);
        bVar30 = (byte)((uint)param_7 >> 8) < *(byte *)((int)param_9 + uVar25);
        bVar32 = (undefined2 *)(uVar25 - 1) == (undefined2 *)0x0;
        param_6 = (undefined4 *)(uVar25 + 1);
        out(*(undefined2 *)(uVar25 - 1),puVar18);
        puVar13 = param_7;
        param_11 = (undefined4 *)&param_12;
      }
      bVar10 = (byte)((uint)puVar16 >> 8);
      if (bVar32) {
LAB_1027_0232:
        bVar10 = (byte)((uint)puVar16 >> 8);
        pbVar2 = (byte *)((int)param_9 + (int)(undefined2 *)puVar28);
        bVar19 = (byte)((uint)puVar18 >> 8);
        *pbVar2 = *pbVar2 + bVar19;
        param_6 = (undefined4 *)((uint)param_6 ^ *(uint *)((int)param_9 + (int)param_6));
        *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) ^ bVar19;
        uVar14 = (undefined2)((ulong)puVar28 >> 0x10);
        puVar27 = (undefined4 *)((int)(undefined2 *)puVar28 + 1);
        goto LAB_1027_023b;
      }
      out(*(byte *)param_6,puVar18);
      puVar16 = (undefined4 *)((int)param_6 + 3);
      out(*(undefined2 *)((int)param_6 + 1),puVar18);
      puVar26 = (undefined2 *)puVar28;
      bVar19 = (byte)((uint)puVar18 >> 8);
      if (!bVar32) {
        if (bVar30) {
          pbVar17 = (byte *)((int)param_6 + 5);
          out(*(undefined2 *)puVar16,puVar18);
          param_6 = (undefined4 *)((int)param_6 + 6);
          out(*pbVar17,puVar18);
          pbVar2 = (byte *)((int)puVar26 + 0x75);
          *pbVar2 = *pbVar2 & bVar10;
          bVar32 = (char)*pbVar2 < '\0';
          bVar30 = *pbVar2 == 0;
          if (false) {
            pbVar2 = (byte *)((int)(undefined4 *)puVar23 + (int)param_6) + 0x65;
            bVar15 = (byte)((uint)puVar13 >> 8);
            *pbVar2 = *pbVar2 & bVar15;
            pbVar2 = (byte *)((int)(undefined4 *)puVar23 + (int)puVar26);
            *pbVar2 = *pbVar2 & bVar19;
            *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) ^ bVar15
            ;
            goto code_r0x000104f5;
          }
          goto LAB_1027_02f7_1;
        }
        param_9 = (undefined4 *)
                  CONCAT11((byte)((uint)param_9 >> 8) | *(byte *)puVar26,(char)param_9);
code_r0x0001055b:
        puVar26 = (undefined2 *)puVar28;
        puVar21 = (undefined4 *)puVar23;
        goto LAB_1027_02f0;
      }
      param_10 = (undefined4 *)CONCAT22(param_10._2_2_,(undefined4 *)0x6d20);
      uVar29 = (undefined2)((ulong)puVar28 >> 0x10);
      puVar28 = (undefined2 *)CONCAT22(uVar29,puVar26 + 1);
      uVar14 = in(puVar18);
      *puVar26 = uVar14;
      out(*(undefined2 *)puVar16,puVar18);
      puVar16 = (undefined4 *)((int)param_6 + 5);
      if (!bVar30) {
        *(byte *)(param_6 + 0x1d) = *(byte *)(param_6 + 0x1d) & bVar19;
        *(byte *)(param_6 + 0x1d) = *(byte *)(param_6 + 0x1d) & bVar10;
        puVar28 = (undefined2 *)CONCAT22(uVar29,(undefined2 *)0x6d20);
        puVar23 = (undefined4 *)CONCAT22((int)((ulong)puVar23 >> 0x10),param_11);
        bVar10 = (byte)((uint)param_15 >> 8);
        *(byte *)((int)param_10._2_2_ + 0x4f) =
             *(byte *)((int)param_10._2_2_ + 0x4f) & (byte)param_16;
        param_16 = param_13;
        puVar13 = (undefined4 *)((int)puVar9 + -0x7845);
        puVar18 = param_14;
        param_9 = param_13;
        if (puVar13 != (undefined4 *)0x0) {
          param_6 = (undefined4 *)((int)param_10._2_2_ + 1);
          out(*(byte *)param_10._2_2_,param_14);
          puVar16 = param_15;
          goto LAB_1027_0232;
        }
        puVar13 = (undefined4 *)0x0;
        puVar16 = param_10._2_2_;
      }
LAB_1027_0295:
      puVar21 = (undefined4 *)puVar23;
      puVar26 = (undefined2 *)puVar28;
      *(uint *)((int)puVar21 + (int)puVar26) =
           *(uint *)((int)puVar21 + (int)puVar26) ^ (uint)puVar16;
      bVar19 = (byte)((uint)puVar18 >> 8);
      *(byte *)param_9 = *(byte *)param_9 ^ bVar19;
      *(byte *)((int)puVar21 + (int)puVar16) =
           *(byte *)((int)puVar21 + (int)puVar16) ^ (byte)((uint)param_9 >> 8);
      *(byte *)((int)puVar16 + 0x4f) = *(byte *)((int)puVar16 + 0x4f) & (byte)puVar13;
      param_10 = (undefined4 *)CONCAT22(param_9,(undefined4 *)param_10);
      bVar31 = puVar13 < (undefined4 *)0x7845;
      bVar30 = SBORROW2((int)puVar13,0x7845);
      puVar13 = (undefined4 *)((int)puVar13 + -0x7845);
      bVar32 = puVar13 == (undefined4 *)0x0;
      if (bVar32) {
        *(byte *)((int)param_9 + (int)puVar26) = *(byte *)((int)param_9 + (int)puVar26) + bVar19;
        puVar26 = (undefined2 *)((uint)puVar16 ^ *(uint *)((int)param_9 + (int)puVar26));
        pbVar2 = (byte *)((int)param_9 + (int)puVar26);
        *pbVar2 = *pbVar2 ^ bVar19;
        out(*puVar26,puVar18);
code_r0x0001056e:
        iVar12 = *(int *)(uStack_8 + 0x65) * 0x2220;
        bVar10 = *(byte *)(iStack_2 + uStack_8);
        puStack_a[*(int *)(uStack_8 + 0x65) * 0x1110] =
             puStack_a[*(int *)(uStack_8 + 0x65) * 0x1110] ^ uStack_8;
        *(uint *)(iStack_2 + uStack_8) = *(uint *)(iStack_2 + uStack_8) ^ uStack_8;
        pbVar2 = (byte *)(iVar12 + uStack_8);
        *pbVar2 = *pbVar2 ^ (byte)((uint)iStack_2 >> 8);
        pbVar2 = (byte *)((int)puStack_a + iVar12 + 0x6f);
        *pbVar2 = *pbVar2 & param_1 + 1U & bVar10;
        uVar14 = in(in_stack_00000000);
        *puStack_a = uVar14;
        uVar14 = in(in_stack_00000000);
        puStack_a[1] = uVar14;
        out(*param_4,param_8);
        puVar13 = (undefined4 *)param_10 + -0x1a5b;
        param_6 = (undefined4 *)(param_4 + 2);
        out(param_4[1],param_8);
        pbVar2 = (byte *)((int)param_5 + (int)param_6) + 0x75;
        bVar31 = false;
        *pbVar2 = *pbVar2 & (byte)((uint)puVar13 >> 8);
        bVar32 = (char)*pbVar2 < '\0';
        puVar18 = param_8;
        param_9 = param_7;
        puVar21 = param_5;
        puVar26 = param_2;
        if (false) {
LAB_1027_0347_1:
          *(byte *)((int)param_9 + (int)puVar26) =
               *(byte *)((int)param_9 + (int)puVar26) + (char)((uint)puVar18 >> 8);
          puVar21 = param_5;
          goto code_r0x000105ae;
        }
      }
      else {
        param_6 = (undefined4 *)((int)puVar16 + 1);
        out(*(byte *)puVar16,puVar18);
LAB_1027_02a5:
        puVar26 = (undefined2 *)puVar28;
        if (bVar31) goto LAB_1027_02c9;
code_r0x00010519:
        puVar23 = (undefined4 *)(*(long *)((int)param_6 + 0x65) * 0x22402220);
        pbVar2 = (byte *)((int)(undefined4 *)puVar23 + 0x6f);
        bVar31 = false;
        *pbVar2 = *pbVar2 & bVar10;
        bVar32 = (char)*pbVar2 < '\0';
        puVar26 = (undefined2 *)puVar28;
        if (*pbVar2 == 0) goto LAB_1027_02d6;
        puVar7 = param_6;
        param_6 = param_6 + 1;
        out(*puVar7,puVar18);
        puVar21 = (undefined4 *)puVar23;
        if (*pbVar2 == 0) goto code_r0x0001052a;
      }
LAB_1027_0328:
      if (!bVar32) {
        puVar16 = param_6;
        if (bVar31) goto LAB_1027_0330;
        goto LAB_1027_0350;
      }
LAB_1000_05fd_1:
      cVar11 = (char)puVar13;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
LAB_1027_039a:
      cVar11 = (char)puVar13;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
      *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    }
    cVar11 = (char)puVar13;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
code_r0x00010656:
    cVar11 = (char)puVar13;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte **)((int)param_9 + (int)param_6) = *(byte **)((int)param_9 + (int)param_6) + (int)puVar13
    ;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + cVar11;
    ((byte *)((int)param_9 + (int)param_6))[-0x6f70] =
         ((byte *)((int)param_9 + (int)param_6))[-0x6f70] + (char)puVar18;
  }
  bVar10 = (byte)puVar13;
  *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + bVar10;
  *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + bVar10;
  *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + bVar10;
  *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + bVar10;
  *(byte *)((int)param_9 + (int)param_6) = *(byte *)((int)param_9 + (int)param_6) + bVar10;
  pbVar2 = (byte *)((int)param_9 + (int)param_6);
  bVar30 = CARRY1(*pbVar2,bVar10);
  *pbVar2 = *pbVar2 + bVar10;
  pcVar8 = (code *)swi(0x21);
  uVar14 = (*pcVar8)();
  if (bVar30) {
    uVar14 = 0xffff;
  }
  return uVar14;
}



undefined2 __cdecl16far FUN_1079_0000(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0xffff;
  }
  return uVar2;
}



undefined2 __cdecl16far FUN_1079_0018(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined2 __cdecl16far FUN_1079_002d(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0xffff;
  }
  return uVar2;
}



undefined2 __cdecl16far FUN_1079_0046(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0xffff;
  }
  return uVar2;
}



void __cdecl16far FUN_1079_0065(uint *param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  byte extraout_AH;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x21);
  bVar2 = (*pcVar1)();
  *param_1 = (uint)bVar2;
  *param_2 = (uint)extraout_AH;
  return;
}



undefined2 __cdecl16far FUN_1079_007e(void)

{
  code *pcVar1;
  undefined2 in_BX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return in_BX;
}



void __cdecl16far FUN_1079_0085(void)

{
  return;
}



undefined2 __cdecl16far FUN_1079_0088(undefined2 param_1,int param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined uVar3;
  undefined2 in_stack_00000000;
  
  uVar3 = false;
  if (param_2 == 0) {
LAB_1079_00aa:
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if ((bool)uVar3) {
      uVar2 = 0;
    }
    if (param_2 != 0) {
      pcVar1 = (code *)swi(0x21);
      uVar2 = in_stack_00000000;
      (*pcVar1)();
    }
  }
  else {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!(bool)uVar3) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      if (!(bool)uVar3) goto LAB_1079_00aa;
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined2 __cdecl16far FUN_1079_00ce(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  code *pcVar2;
  byte bVar3;
  undefined2 unaff_DS;
  bool bVar4;
  undefined2 *local_7;
  
  pcVar2 = (code *)swi(0x21);
  bVar3 = (*pcVar2)();
  bVar4 = bVar3 < 4;
  if (!bVar4) {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (!bVar4) {
      uVar1 = *local_7;
      *(undefined2 **)param_3 = (undefined2 *)local_7 + 1;
      *(undefined2 *)(param_3 + 2) = (int)((ulong)local_7 >> 0x10);
      return uVar1;
    }
  }
  return 0;
}



void __cdecl16far FUN_1079_0112(int param_1)

{
  code *pcVar1;
  int iVar2;
  int unaff_DI;
  
  pcVar1 = (code *)swi(0x2f);
  iVar2 = (*pcVar1)();
  if (((iVar2 == -0x1201) && (param_1 == 0x5048)) && (unaff_DI == 0x4152)) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x2f);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



// WARNING: Type propagation algorithm not settling

void __cdecl16far FUN_108f_0002(void)

{
  undefined2 *puVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  undefined extraout_AH;
  char *pcVar7;
  int iVar8;
  undefined uVar10;
  uint uVar9;
  int extraout_DX;
  uint uVar11;
  undefined2 *puVar12;
  uint uVar13;
  int iVar14;
  undefined2 unaff_SS;
  int unaff_DS;
  bool bVar15;
  uint local_2de;
  int local_2dc;
  undefined local_2d6 [6];
  undefined2 local_2d0;
  uint local_2ce;
  int local_2cc;
  int local_2c8;
  undefined2 local_2c6;
  undefined2 local_2c2;
  int local_2c0;
  uint local_2be;
  undefined2 local_29a;
  undefined2 local_298;
  int local_296;
  int local_294;
  uint local_292;
  uint local_290;
  undefined2 local_28e;
  undefined local_28c [2];
  undefined local_28a [90];
  int local_230;
  undefined local_8c [16];
  uint local_7c;
  int local_7a;
  int local_60;
  int local_5e;
  uint local_5c;
  int local_5a;
  int local_54;
  uint local_38;
  int local_36;
  undefined2 local_34;
  int local_28;
  char *local_22;
  char *local_1a;
  undefined *local_16;
  char *local_12;
  undefined4 local_e;
  undefined local_6 [2];
  int local_4;
  
  FUN_1079_0065(&local_4,local_6);
  if (local_4 < 3) {
    FUN_1027_018e(0x1079,6);
  }
  DAT_1027_04f1 = FUN_1079_007e();
  iVar8 = 0x1027;
  local_1a = (char *)0x0;
  local_12 = (char *)((ulong)*(uint *)0x2c << 0x10);
  iVar6 = unaff_DS;
  while( true ) {
    iVar14 = (int)((ulong)local_12 >> 0x10);
    local_22 = (char *)local_12;
    if (*local_12 == '\0') break;
    puVar3 = (undefined *)FUN_108f_088a(local_22,iVar14,0x3d);
    local_16 = (undefined *)CONCAT22(iVar8,puVar3);
    if ((unaff_DS != iVar8) || (puVar3 != (undefined *)0x0)) {
      *puVar3 = 0;
      iVar8 = 0xe2;
      iVar4 = FUN_108f_08b4(local_22,iVar14,0xe2);
      if (iVar4 == 0) {
        local_1a = local_22;
        iVar6 = iVar14;
      }
      *local_16 = 0x3d;
    }
    iVar4 = FUN_108f_081f(local_22,iVar14);
    local_12 = (char *)CONCAT22(iVar14,local_22 + iVar4 + 1);
  }
  local_22 = local_22 + 3;
  if ((unaff_DS != iVar6) || (local_1a != (char *)0x0)) {
    iVar8 = FUN_108f_081f(local_1a,iVar6);
    iVar8 = iVar8 + 1;
    iVar4 = FUN_108f_081f(local_22,iVar14);
    FUN_108f_08ea(local_1a,iVar6,local_1a + iVar8,iVar6,
                  local_22 + (((iVar4 + 2) - (int)local_1a) - iVar8));
    local_22 = local_22 + -iVar8;
  }
  bVar15 = false;
  DAT_1027_04f5 = FUN_1079_0000(local_22,iVar14,0);
  if (-1 < DAT_1027_04f5) {
    uVar9 = FUN_1079_002d(DAT_1027_04f5,local_2d6,0x40);
    if ((0x3f < uVar9) && (local_2be == 0x40)) {
      FUN_1079_0046(DAT_1027_04f5,local_29a,local_298,0);
      uVar9 = FUN_1079_002d(DAT_1027_04f5,local_28c,2);
      if ((1 < uVar9) &&
         ((local_28c == (undefined  [2])0x4550 || (local_28c == (undefined  [2])0x4c50)))) {
        bVar15 = true;
        local_28 = 1;
        uVar9 = FUN_1079_002d(DAT_1027_04f5,local_28a,0xf6);
        if ((0xf5 < uVar9) && (local_230 == 3)) {
          local_28 = 0;
        }
      }
    }
    FUN_1079_0018(DAT_1027_04f5);
  }
  if ((bVar15) && (local_28 == 0)) {
    local_34 = 0x38;
    FUN_1079_0112(&local_34,local_22,iVar14);
  }
  if ((true) && (false)) {
    FUN_108f_0846(0x36b,0x1027,local_22,iVar14);
  }
  uVar5 = FUN_1079_00ce(0xffff,0xffff,0xd2);
  *(undefined2 *)0xd6 = uVar5;
  for (local_2de = 0; local_2de < *(uint *)0xd6; local_2de = local_2de + 1) {
    if (*(byte *)(local_2de + (int)*(undefined4 *)0xd2) < 0x80) {
      *(uint *)0xd6 = local_2de & 0xfffe;
      break;
    }
  }
  local_28e = 0;
  uVar10 = 0x10;
  iVar6 = FUN_108f_0a48(0x36b,0x1027);
  if (iVar6 == 0) {
    DAT_1027_04f5 = FUN_1079_0000(0x36b,0x1027,0);
  }
  else {
    puVar12 = (undefined2 *)local_28c;
    FUN_108f_0846(puVar12);
    local_290 = FUN_108f_0b3e(local_28c,CONCAT11(extraout_AH,0x2f));
    local_292 = FUN_108f_0b3e(local_28c,CONCAT11(uVar10,0x5c));
    if ((local_290 != 0) || (local_292 != 0)) {
      uVar9 = local_292;
      if (local_292 < local_290) {
        uVar9 = local_290;
      }
      puVar12 = (undefined2 *)(uVar9 + 1);
    }
    FUN_108f_0846(puVar12);
    DAT_1027_04f5 = FUN_1079_0000(local_28c);
    if (DAT_1027_04f5 == -1 || SCARRY2(DAT_1027_04f5,1) != DAT_1027_04f5 + 1 < 0) {
      DAT_1027_04f5 = FUN_1079_0000(0x36b,0x1027,0);
      iVar6 = 0x1027;
      if (DAT_1027_04f5 == -1 || SCARRY2(DAT_1027_04f5,1) != DAT_1027_04f5 + 1 < 0) {
        DAT_1027_04f5 = -1;
        pcVar7 = (char *)FUN_108f_0945(0xe8);
        local_e = (char *)CONCAT22(iVar6,pcVar7);
        if ((unaff_DS != iVar6) || (pcVar7 != (char *)0x0)) {
          while( true ) {
            if (*local_e == '\0') break;
            if (*local_e == ';') {
              local_2dc = 1;
            }
            else {
              local_296 = FUN_108f_0ae3((char *)local_e,local_e._2_2_,0x3b);
              local_294 = iVar6;
              if ((unaff_DS == iVar6) && (local_296 == 0)) {
                local_2dc = FUN_108f_081f((char *)local_e,local_e._2_2_);
              }
              else {
                local_2dc = local_296 - (int)(char *)local_e;
              }
              FUN_108f_08ea(local_28c);
              iVar6 = FUN_108f_0b73(local_28c,(int)&local_28e + local_2dc + 1);
              if ((iVar6 == 0) ||
                 ((cVar2 = *(char *)((int)&local_28e + local_2dc + 1), cVar2 != '\\' &&
                  (cVar2 != '/')))) {
                *(undefined *)((int)local_28c + local_2dc) = 0x5c;
                puVar12 = (undefined2 *)((int)local_28c + 1);
              }
              else {
                puVar12 = (undefined2 *)local_28c;
              }
              FUN_108f_0846((int)puVar12 + local_2dc);
              DAT_1027_04f5 = FUN_1079_0000(local_28c);
              iVar6 = 0x1027;
              if (DAT_1027_04f5 != -1 && SCARRY2(DAT_1027_04f5,1) == DAT_1027_04f5 + 1 < 0)
              goto LAB_108f_04e7;
            }
            local_e = (char *)CONCAT22(local_e._2_2_,(char *)local_e + local_2dc);
          }
        }
      }
    }
    else {
LAB_108f_04e7:
      local_28e = 1;
    }
  }
  uVar5 = 0x1079;
  if (DAT_1027_04f5 < 0) {
    uVar5 = 0x1027;
    FUN_1027_018e(0x1079,7,0x36b,0x1027);
  }
  if (local_28e != 0) {
    uVar9 = 0xffff;
    bVar15 = true;
    puVar12 = (undefined2 *)local_28c;
    iVar6 = -1;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      puVar1 = puVar12;
      puVar12 = (undefined2 *)((int)puVar12 + 1);
      bVar15 = *(char *)puVar1 == '\0';
    } while (!bVar15);
    if (bVar15) {
      uVar9 = -(iVar6 + 1) - 1;
    }
    if (0x7f < uVar9) {
      FUN_1027_018e(uVar5,8,local_28c);
    }
    FUN_108f_0846(0x36b,0x1027,local_28c);
  }
  if (true) {
    iVar6 = 0x1027;
    uVar9 = FUN_1079_002d(DAT_1027_04f5,local_2d6,0x40);
    if (uVar9 < 0x40) {
      FUN_1027_018e(0x1079,9,0x36b,0x1027);
      iVar6 = extraout_DX;
    }
    local_38 = FUN_108f_0a06(local_2d6);
    local_36 = iVar6;
    FUN_1079_0046(DAT_1027_04f5,local_38,iVar6,0);
    uVar5 = 0x1079;
    uVar9 = FUN_1079_002d(DAT_1027_04f5,&local_60,0x28);
    if (uVar9 < 0x28) {
      uVar5 = 0x1027;
      FUN_1027_018e(0x1079,9,0x36b,0x1027);
    }
    if ((local_5e != 0x4852) || (local_60 != 0x4944)) {
      FUN_1027_018e(uVar5,4);
    }
    uVar5 = 0x1079;
    FUN_1079_0046(DAT_1027_04f5,local_38 + local_5c,
                  local_36 + local_5a + (uint)CARRY2(local_38,local_5c),0);
    for (local_2de = 0; (int)local_2de < local_54; local_2de = local_2de + 1) {
      uVar5 = 0x1079;
      uVar9 = FUN_1079_002d(DAT_1027_04f5,local_8c,0x2c);
      if (uVar9 < 0x2c) {
        uVar5 = 0x1027;
        FUN_1027_018e(0x1079,9,0x36b,0x1027);
      }
      iVar6 = FUN_108f_0bec(local_8c,*(undefined2 *)0xd0);
      if (iVar6 == 0) break;
    }
    if (local_54 <= (int)local_2de) {
      FUN_1027_018e(uVar5,4);
    }
    local_38 = local_7c;
    local_36 = local_7a;
  }
  else {
    local_38 = 0;
    local_36 = 0;
  }
  FUN_1079_0046(DAT_1027_04f5,local_38,local_36,0);
  uVar9 = FUN_1079_002d(DAT_1027_04f5,local_2d6,0x40);
  if (uVar9 < 0x40) {
    FUN_1027_018e(0x1079,9,0x36b,0x1027);
  }
  iVar8 = 0x1027;
  DAT_1027_0505 = local_2c8 + DAT_1027_04f1 + 0x10;
  DAT_1027_0507 = local_2c6;
  DAT_1027_0509 = local_2c0 + DAT_1027_04f1 + 0x10;
  DAT_1027_050b = local_2c2;
  DAT_1027_04f7 = local_2be + local_38;
  DAT_1027_04f9 = local_36 + (uint)CARRY2(local_2be,local_38);
  DAT_1027_04fb = local_2d0;
  uVar9 = FUN_108f_0a06(local_2d6);
  uVar11 = 0;
  iVar6 = 4;
  do {
    uVar13 = local_2ce;
    local_2ce = uVar13 * 2;
    uVar11 = uVar11 << 1 | (uint)((int)uVar13 < 0);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  DAT_1027_0501 = uVar9 + uVar13 * -2;
  DAT_1027_0503 = (iVar8 - uVar11) - (uint)(uVar9 < local_2ce);
  DAT_1027_04fd = local_2ce + local_38;
  DAT_1027_04ff = uVar11 + local_36 + (uint)CARRY2(local_2ce,local_38);
  uVar9 = DAT_1027_0501 + 0xf;
  uVar11 = DAT_1027_0503 + (uint)(0xfff0 < DAT_1027_0501);
  iVar6 = 4;
  do {
    uVar13 = uVar11 & 1;
    uVar11 = uVar11 >> 1;
    uVar9 = uVar9 >> 1 | (uint)(uVar13 != 0) << 0xf;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  DAT_1027_04f3 = uVar9 + local_2cc;
  FUN_1027_0000();
  return;
}



int __cdecl16far FUN_108f_081f(char *param_1)

{
  int local_4;
  
  local_4 = 0;
  while (*param_1 != '\0') {
    local_4 = local_4 + 1;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
  }
  return local_4;
}



void __cdecl16far FUN_108f_0846(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  do {
    pcVar3 = param_2;
    pcVar2 = param_1;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    cVar1 = *pcVar3;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    *pcVar2 = cVar1;
  } while (cVar1 != '\0');
  return;
}



void __cdecl16far FUN_108f_0863(undefined4 param_1,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = FUN_108f_081f((int)param_1,param_1._2_2_,param_3,param_4);
  FUN_108f_0846((int)param_1 + iVar1,param_1._2_2_);
  return;
}



char * __cdecl16far FUN_108f_088a(char *param_1,char param_2)

{
  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    if (*param_1 == param_2) break;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
  }
  return (char *)param_1;
}



int __cdecl16far FUN_108f_08b4(byte *param_1,byte *param_2)

{
  while( true ) {
    if ((*param_1 == 0) || (*param_1 != *param_2)) break;
    param_1 = (byte *)CONCAT22(param_1._2_2_,(byte *)param_1 + 1);
    param_2 = (byte *)CONCAT22(param_2._2_2_,(byte *)param_2 + 1);
  }
  return (uint)*param_1 - (uint)*param_2;
}



void __cdecl16far FUN_108f_08ea(undefined *param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  while (puVar2 = param_2, puVar1 = param_1, 0 < param_3) {
    param_2 = (undefined *)CONCAT22(param_2._2_2_,(undefined *)param_2 + 1);
    param_1 = (undefined *)CONCAT22(param_1._2_2_,(undefined *)param_1 + 1);
    *puVar1 = *puVar2;
    param_3 = param_3 + -1;
  }
  return;
}



int __cdecl16far FUN_108f_090e(byte *param_1,byte *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    param_1 = (byte *)CONCAT22(param_1._2_2_,(byte *)param_1 + 1);
    param_2 = (byte *)CONCAT22(param_2._2_2_,(byte *)param_2 + 1);
    param_3 = param_3 + -1;
  }
  return (uint)*param_1 - (uint)*param_2;
}



int __cdecl16far FUN_108f_0945(char *param_1)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  bool bVar8;
  char *local_e;
  
  uVar2 = FUN_1079_007e();
  local_e = (char *)((ulong)*(uint *)0x2c << 0x10);
  iVar5 = -1;
  bVar8 = true;
  iVar4 = -1;
  pcVar6 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    bVar8 = *pcVar1 == '\0';
  } while (!bVar8);
  if (bVar8) {
    iVar5 = -1 - (iVar4 + 1);
  }
  uVar2 = FUN_1079_0085();
  while( true ) {
    uVar7 = (undefined2)((ulong)local_e >> 0x10);
    pcVar6 = (char *)local_e;
    if (*local_e == '\0') {
      return 0;
    }
    iVar4 = FUN_108f_088a(pcVar6,uVar7,0x3d,param_1,uVar2);
    if (((iVar4 != 0) && (iVar4 - (int)pcVar6 == iVar5)) &&
       (iVar3 = FUN_108f_090e(param_1,uVar2,pcVar6,uVar7,iVar5), iVar3 == 0)) break;
    iVar4 = FUN_108f_081f(pcVar6,uVar7);
    local_e = (char *)CONCAT22(uVar7,pcVar6 + iVar4 + 1);
  }
  return iVar4 + 1;
}



int __cdecl16far FUN_108f_0a06(int param_1)

{
  undefined2 unaff_DS;
  int local_6;
  
  local_6 = *(int *)(param_1 + 2) + *(int *)(param_1 + 4) * 0x200;
  if (*(int *)(param_1 + 2) != 0) {
    local_6 = local_6 + -0x200;
  }
  return local_6;
}



undefined2 __cdecl16far FUN_108f_0a48(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  while( true ) {
    while( true ) {
      pcVar2 = param_1;
      iVar3 = FUN_108f_0bab(*param_1);
      if (iVar3 == 0) break;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 2);
    }
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    cVar1 = *pcVar2;
    if (cVar1 == '\0') break;
    if (((cVar1 == '/') || (cVar1 == ':')) || (cVar1 == '\\')) {
      return 0;
    }
  }
  return 1;
}



char * __cdecl16far FUN_108f_0a96(char *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (*(uint *)0xd6 < 2) {
    pcVar1 = (char *)FUN_1153_0006(param_1,param_2);
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      iVar2 = FUN_108f_0bab(*param_1);
      if (iVar2 == 0) {
        if (*param_1 == param_2) {
          return param_1;
        }
      }
      else {
        param_1 = param_1 + 1;
      }
    }
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



char * __cdecl16far FUN_108f_0ae3(char *param_1,undefined2 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (*(uint *)0xd6 < 2) {
    pcVar1 = (char *)FUN_108f_088a((char *)param_1,param_1._2_2_,param_3);
  }
  else {
    while (*param_1 != '\0') {
      iVar2 = FUN_108f_0bab(*param_1);
      if (iVar2 == 0) {
        if (*param_1 == (char)param_3) {
          return (char *)param_1;
        }
      }
      else {
        param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      }
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    }
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



char * __cdecl16far FUN_108f_0b3e(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  do {
    pcVar1 = param_1;
    param_1 = (char *)FUN_108f_0a96(pcVar1 + 1,param_2);
  } while (param_1 != (char *)0x0);
  if (*pcVar1 != (char)param_2) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



undefined2 __cdecl16far FUN_108f_0b73(char *param_1,char *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  for (; (*param_1 != '\0' && (param_1 <= param_2)); param_1 = param_1 + 1) {
    iVar1 = FUN_108f_0bab(*param_1);
    if (iVar1 == 0) {
      if (param_1 == param_2) {
        return 1;
      }
    }
    else {
      param_1 = param_1 + 1;
    }
  }
  return 0;
}



undefined2 __cdecl16far FUN_108f_0bab(byte param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (*(uint *)0xd6 <= local_4 + 1U) {
      return 0;
    }
    uVar2 = (undefined2)((ulong)*(undefined4 *)0xd2 >> 0x10);
    iVar1 = (int)*(undefined4 *)0xd2;
    if ((*(byte *)(local_4 + iVar1) <= param_1) && (param_1 <= *(byte *)(local_4 + iVar1 + 1)))
    break;
    local_4 = local_4 + 2;
  }
  return 1;
}



int __cdecl16far FUN_108f_0bec(byte *param_1,byte *param_2)

{
  undefined2 unaff_DS;
  byte local_4;
  byte local_3;
  
  do {
    local_3 = *param_1;
    local_4 = *param_2;
    if ((*(byte *)(local_3 + 0xf0) & 1) != 0) {
      local_3 = local_3 + 0x20;
    }
    if ((*(byte *)(local_4 + 0xf0) & 1) != 0) {
      local_4 = local_4 + 0x20;
    }
  } while ((local_3 == local_4) && (param_1 = param_1 + 1, param_2 = param_2 + 1, local_3 != 0));
  return (int)(char)local_3 - (int)(char)local_4;
}



char * __cdecl16far FUN_1153_0006(char *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined2 unaff_ES;
  bool bVar7;
  
  uVar4 = 0xffff;
  bVar7 = true;
  iVar2 = -1;
  pcVar6 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    bVar7 = *pcVar1 == '\0';
  } while (!bVar7);
  if (bVar7) {
    uVar4 = -(iVar2 + 1) - 1;
  }
  uVar5 = uVar4 + 1;
  bVar7 = uVar5 == 0;
  uVar3 = uVar5;
  pcVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    bVar7 = param_2 == *pcVar1;
  } while (!bVar7);
  if (bVar7) {
    uVar5 = uVar5 - (uVar3 + 1);
  }
  if (uVar4 < uVar5) {
    param_1 = (char *)0x0;
  }
  else {
    param_1 = param_1 + uVar5;
  }
  return param_1;
}


