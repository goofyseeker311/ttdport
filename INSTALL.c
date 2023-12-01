#include "INSTALL.h"



void __cdecl16far FUN_1000_0836(void)

{
  return;
}



void __cdecl16far entry(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 unaff_ES;
  
  puVar4 = (undefined *)(DAT_1000_000c + -1);
  DAT_2000_bedc = DAT_1000_000a + 0x1000;
  puVar5 = puVar4;
  DAT_2000_bede = unaff_ES;
  for (iVar3 = DAT_1000_000c; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + -1;
    *puVar2 = *puVar1;
  }
  DAT_2000_beda = 0x2b;
  return;
}


