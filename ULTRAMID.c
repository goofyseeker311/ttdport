#include "ULTRAMID.h"



void __cdecl16far entry(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 in_AX;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 unaff_ES;
  
  puVar4 = (undefined *)(DAT_1000_000c + -1);
  DAT_1000_9d5a = DAT_1000_000a + 0x1000;
  puVar5 = puVar4;
  DAT_1000_9d5c = unaff_ES;
  DAT_1000_9d5e = in_AX;
  for (iVar3 = DAT_1000_000c; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + -1;
    *puVar2 = *puVar1;
  }
  DAT_1000_9d58 = 0x2c;
  return;
}


