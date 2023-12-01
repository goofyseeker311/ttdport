#include "MPSCOPY.h"



// WARNING: This function may have set the stack pointer

void entry(void)

{
  undefined2 uVar1;
  uint *unaff_BP;
  
  DAT_1000_2578 = 0x34;
  uVar1 = FUN_1000_0045();
                    // WARNING: Could not recover jumptable at 0x0001003a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(ulong)*unaff_BP)();
  return;
}



void __cdecl16near FUN_1000_0045(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 in_AX;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int unaff_ES;
  
  DAT_1000_001e = DAT_1000_001e + unaff_ES;
  DAT_1000_0026 = DAT_1000_0026 + unaff_ES;
  iVar3 = *(int *)0x2 + -0x7b8;
  puVar5 = (undefined2 *)0x1176;
  puVar6 = puVar5;
  DAT_1000_001a = unaff_ES;
  DAT_1000_001c = in_AX;
  for (iVar4 = 0x8bc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + -1;
    puVar1 = puVar5;
    puVar5 = puVar5 + -1;
    *puVar2 = *puVar1;
  }
  *(int *)0x7b78 = iVar3;
  *(undefined2 *)0x7b76 = 0x3d;
  return;
}



undefined2 __cdecl16far FUN_1000_02e3(undefined2 *param_1,uint param_2)

{
  int iVar1;
  undefined2 uVar2;
  int **ppiVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x1e;
  ppiVar3 = (int **)*param_1;
  uVar2 = ((undefined2 *)param_1)[1];
  param_2 = param_2 >> 2;
  do {
    **ppiVar3 = **ppiVar3 + iVar1;
    ppiVar3 = ppiVar3 + 2;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return 0;
}



undefined2 __cdecl16far FUN_1000_031c(undefined2 *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  *param_1 = 0x757b;
  ((undefined2 *)param_1)[1] = 0x1000;
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0;
  }
  return uVar2;
}



undefined2 __cdecl16far FUN_1000_05d4(void)

{
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined uVar9;
  bool bVar10;
  bool bVar11;
  undefined4 param_3;
  uint param_4;
  uint param_5;
  int param_9;
  int local_4e;
  undefined2 *local_22;
  uint local_16;
  
  uVar9 = &stack0xfffe < (undefined *)0x52;
  FUN_1000_09af();
  uVar3 = FUN_1000_0c81();
  if (((((bool)uVar9) || (bVar10 = uVar3 < 0xb59c, uVar3 != 0xb59c)) ||
      (iVar4 = FUN_1000_0c81(), bVar10)) ||
     (((FUN_1000_0c81(), bVar10 || (FUN_1000_0c81(), bVar10)) ||
      ((FUN_1000_0c81(), bVar10 || (cVar2 = FUN_1000_0c81(), bVar10)))))) {
LAB_1000_079b:
    uVar5 = 0xfffe;
  }
  else {
    if (cVar2 == '\b') {
      local_16 = 0x2000;
    }
    else {
      local_16 = 0x1000;
    }
    puVar7 = (undefined2 *)((int)param_3 + 0x600);
    uVar3 = param_4 - 0x600;
    uVar6 = param_5 - (param_4 < 0x600);
    if ((param_4 < 0x600) <= param_5) {
      puVar8 = puVar7;
      if (param_9 != 1) {
        puVar8 = (undefined2 *)((int)puVar7 + local_16);
        bVar11 = uVar3 < local_16;
        uVar3 = uVar3 - local_16;
        bVar10 = uVar6 < bVar11;
        uVar6 = uVar6 - bVar11;
        local_22 = puVar7;
        if (bVar10) goto LAB_1000_0796;
      }
      if (uVar6 != 0) {
        uVar3 = 0xffff;
      }
      bVar10 = iVar4 == 0;
      if (iVar4 != 1) {
        uVar6 = uVar3;
        FUN_1000_0daa();
        if (bVar10) goto LAB_1000_0796;
        bVar10 = CARRY2((uint)puVar8,uVar6 - uVar3);
        puVar8 = (undefined2 *)((int)puVar8 + (uVar6 - uVar3));
      }
      uVar6 = uVar3;
      FUN_1000_0daa();
      if (!bVar10) {
        bVar10 = CARRY2((uint)puVar8,uVar6 - uVar3);
        FUN_1000_0daa(uVar3);
        if (!bVar10) {
          bVar10 = param_9 == 0;
          if (param_9 != 1) {
            bVar10 = false;
            for (local_16 = local_16 >> 1; local_16 != 0; local_16 = local_16 - 1) {
              puVar1 = local_22;
              local_22 = local_22 + 1;
              *puVar1 = 0;
            }
          }
          while (FUN_1000_07a0(), !bVar10) {
            FUN_1000_0829();
            if (bVar10) {
              if (local_4e == 0) {
                if (false) {
                  return 0;
                }
                FUN_1000_07a0();
                if (true) {
                  return 0;
                }
              }
              goto LAB_1000_0796;
            }
            bVar10 = false;
            if (true) {
              FUN_1000_0d5e();
              return 0;
            }
          }
          goto LAB_1000_079b;
        }
      }
    }
LAB_1000_0796:
    uVar5 = 0xffff;
  }
  return uVar5;
}



void __cdecl16near FUN_1000_07a0(void)

{
  int *piVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined uVar8;
  undefined2 uVar7;
  int extraout_DX;
  undefined *puVar9;
  byte *extraout_DX_00;
  int iVar10;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined in_CF;
  undefined uVar11;
  bool bVar12;
  undefined in_ZF;
  undefined4 uVar13;
  
  uVar3 = *(undefined2 *)(unaff_BP + -0x52);
  uVar4 = *(undefined4 *)(unaff_BP + -0x2e);
  uVar7 = *(undefined2 *)(unaff_BP + -8);
  do {
    while( true ) {
      FUN_1000_0d2d();
      if ((bool)in_CF) goto LAB_1000_0822;
      uVar8 = (undefined)((uint)uVar7 >> 8);
      if ((bool)in_ZF) break;
      uVar7 = CONCAT11(uVar8,*(undefined *)(unaff_BP + -0x10));
      iVar10 = extraout_DX;
      uVar6 = FUN_1000_0c81();
      if ((bool)in_CF) goto LAB_1000_0822;
      *(undefined2 *)(iVar10 + 1) = uVar6;
      uVar13 = FUN_1000_0bda();
      if ((bool)in_CF) goto LAB_1000_0822;
      uVar7 = CONCAT11((char)((uint)uVar7 >> 8),*(byte *)(unaff_BP + -0x10));
      puVar2 = (uint *)((int)((ulong)uVar13 >> 0x10) + 1);
      bVar12 = false;
      *puVar2 = *puVar2 | (int)uVar13 << (*(byte *)(unaff_BP + -0x10) & 0x1f);
      if (*puVar2 == 0) {
        *(undefined2 *)(unaff_BP + -0x16) = 0xffff;
        goto LAB_1000_0822;
      }
      bVar5 = FUN_1000_0bda();
      if (bVar12) goto LAB_1000_0822;
      *extraout_DX_00 = bVar5 | 0x80;
      in_CF = (byte *)0xfffc < extraout_DX_00;
      piVar1 = (int *)(unaff_BP + -0x4e);
      *piVar1 = *piVar1 + -1;
      in_ZF = *piVar1 == 0;
      if ((bool)in_ZF) goto LAB_1000_0822;
    }
    uVar11 = *(int *)(unaff_BP + -0xe) == 0;
    if (*(int *)(unaff_BP + -0xe) == 1) {
      uVar7 = CONCAT11(uVar8,8);
      uVar13 = FUN_1000_0c81();
    }
    else {
      uVar13 = FUN_1000_0bda();
    }
    puVar9 = (undefined *)((ulong)uVar13 >> 0x10);
    if ((bool)uVar11) break;
    *puVar9 = 0;
    *(int *)(puVar9 + 1) = (int)uVar13;
    in_CF = (undefined *)0xfffc < puVar9;
    piVar1 = (int *)(unaff_BP + -0x4e);
    *piVar1 = *piVar1 + -1;
    in_ZF = *piVar1 == 0;
  } while (!(bool)in_ZF);
LAB_1000_0822:
  *(undefined2 *)(unaff_BP + -0x2e) = (int)uVar4;
  *(undefined2 *)(unaff_BP + -8) = uVar7;
  return;
}



void __cdecl16near FUN_1000_0829(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int extraout_DX;
  byte *extraout_DX_00;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int unaff_BP;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 uVar17;
  undefined2 unaff_SS;
  undefined2 uVar18;
  bool bVar19;
  
  bVar19 = false;
  if ((*(int *)(unaff_BP + -0x4a) == 0) && (FUN_1000_0a57(), bVar19)) {
    return;
  }
  uVar18 = *(undefined2 *)(unaff_BP + -0x52);
  pbVar12 = *(byte **)(unaff_BP + -0x50);
  iVar7 = 0x200 - *(int *)(unaff_BP + -0x4e);
  if (iVar7 != 0) {
    *(int *)(unaff_BP + -0x4c) = iVar7;
    iVar7 = *(int *)(unaff_BP + -0x48) - *(int *)(unaff_BP + -0x4a);
    uVar17 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x3a) >> 0x10);
    puVar16 = (undefined2 *)((int)*(undefined4 *)(unaff_BP + -0x3a) + iVar7);
    puVar14 = (undefined2 *)(*(int *)(unaff_BP + -0x20) + iVar7);
    uVar9 = *(uint *)(unaff_BP + -6);
LAB_1000_0867:
    do {
      if ((*pbVar12 & 0x80) == 0) {
        bVar4 = pbVar12[1];
        bVar19 = false;
        if ((uVar9 & 0x300) == 0) {
          puVar2 = puVar14;
          puVar14 = (undefined2 *)((int)puVar14 + 1);
          *(byte *)puVar2 = bVar4;
        }
        puVar2 = puVar16;
        puVar16 = (undefined2 *)((int)puVar16 + 1);
        *(byte *)puVar2 = bVar4;
        piVar1 = (int *)(unaff_BP + -0x4a);
        *piVar1 = *piVar1 + -1;
        uVar9 = CONCAT11((char)(uVar9 >> 8),bVar4);
        if (*piVar1 == 0) {
          FUN_1000_0a57();
          if (bVar19) {
LAB_1000_08a8:
            *(int *)(unaff_BP + -0x4c) = *(int *)(unaff_BP + -0x4c) + -1;
            return;
          }
          pbVar12 = (byte *)(extraout_DX + 3);
          piVar1 = (int *)(unaff_BP + -0x4c);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            return;
          }
          puVar14 = (undefined2 *)*(undefined2 *)(unaff_BP + -0x20);
          uVar17 = (undefined2)((ulong)(undefined2 *)*(undefined4 *)(unaff_BP + -0x3a) >> 0x10);
          puVar16 = (undefined2 *)(undefined2 *)*(undefined4 *)(unaff_BP + -0x3a);
          uVar9 = *(uint *)(unaff_BP + -6);
          goto LAB_1000_0867;
        }
      }
      else {
        uVar8 = *pbVar12 & 0x7f;
        puVar15 = (undefined2 *)(*(int *)(pbVar12 + 1) + 1);
        do {
          while( true ) {
            uVar5 = (undefined)(uVar9 >> 8);
            cVar6 = (char)uVar8;
            if ((uVar9 & 0x300) != 0) break;
            if (*(uint *)(unaff_BP + -0x4a) <= uVar8) {
              uVar8 = *(uint *)(unaff_BP + -0x4a);
            }
            puVar13 = (undefined2 *)((int)puVar14 - *(int *)(unaff_BP + -0x1e));
            if ((puVar13 < puVar15) && (uVar9 = -((int)puVar13 - (int)puVar15), uVar9 <= uVar8)) {
              uVar8 = uVar9;
            }
            *(int *)(unaff_BP + -0x4a) = *(int *)(unaff_BP + -0x4a) - uVar8;
            bVar4 = cVar6 - (char)uVar8;
            uVar9 = CONCAT11(uVar5,bVar4);
            puVar13 = (undefined2 *)
                      ((-*(int *)(unaff_BP + -0x1e) - ((int)puVar15 - (int)puVar14) &
                       *(uint *)(unaff_BP + -0x12)) + *(int *)(unaff_BP + -0x1e));
            for (uVar10 = uVar8 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
              puVar3 = puVar16;
              puVar16 = puVar16 + 1;
              puVar2 = puVar13;
              puVar13 = puVar13 + 1;
              *puVar3 = *puVar2;
            }
            if ((uVar8 & 1) != 0) {
              puVar3 = puVar16;
              puVar16 = (undefined2 *)((int)puVar16 + 1);
              puVar2 = puVar13;
              puVar13 = (undefined2 *)((int)puVar13 + 1);
              *(undefined *)puVar3 = *(undefined *)puVar2;
            }
            puVar13 = (undefined2 *)((int)puVar13 - uVar8);
            uVar17 = *(undefined2 *)(unaff_BP + -0x52);
            for (uVar10 = uVar8 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
              puVar3 = puVar14;
              puVar14 = puVar14 + 1;
              puVar2 = puVar13;
              puVar13 = puVar13 + 1;
              *puVar3 = *puVar2;
            }
            if ((uVar8 & 1) != 0) {
              puVar2 = puVar14;
              puVar14 = (undefined2 *)((int)puVar14 + 1);
              *(undefined *)puVar2 = *(undefined *)puVar13;
            }
            uVar17 = *(undefined2 *)(unaff_BP + -0x38);
            uVar8 = (uint)bVar4;
            if (*(int *)(unaff_BP + -0x4a) == 0) {
LAB_1000_08f1:
              bVar19 = false;
              FUN_1000_0a57();
              if (bVar19) {
                if (uVar8 != 0) {
                  return;
                }
                goto LAB_1000_08a8;
              }
              uVar18 = *(undefined2 *)(unaff_BP + -0x52);
              uVar17 = (undefined2)((ulong)(undefined2 *)*(undefined4 *)(unaff_BP + -0x3a) >> 0x10);
              puVar16 = (undefined2 *)(undefined2 *)*(undefined4 *)(unaff_BP + -0x3a);
              uVar10 = *(uint *)(unaff_BP + -6);
              puVar14 = (undefined2 *)*(undefined2 *)(unaff_BP + -0x20);
              uVar9 = uVar10;
              pbVar12 = extraout_DX_00;
              if (uVar8 == 0) goto LAB_1000_0906;
            }
            else if (uVar8 == 0) goto LAB_1000_0889;
          }
          uVar10 = CONCAT11(uVar5,cVar6);
          if (*(uint *)(unaff_BP + -0x4a) <= uVar8) {
            uVar8 = *(uint *)(unaff_BP + -0x4a);
          }
          if ((uVar9 & 0x400) == 0) {
LAB_1000_08cd:
            *(int *)(unaff_BP + -0x4a) = *(int *)(unaff_BP + -0x4a) - uVar8;
            uVar10 = CONCAT11((char)(uVar10 >> 8),(char)uVar10 - (char)uVar8);
            puVar14 = (undefined2 *)-((int)puVar15 - (int)puVar16);
            uVar18 = *(undefined2 *)(unaff_BP + -0x38);
            for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
              puVar3 = puVar16;
              puVar16 = puVar16 + 1;
              puVar2 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar3 = *puVar2;
            }
            if ((uVar8 & 1) != 0) {
              puVar2 = puVar16;
              puVar16 = (undefined2 *)((int)puVar16 + 1);
              *(undefined *)puVar2 = *(undefined *)puVar14;
            }
          }
          else {
            puVar14 = (undefined2 *)((int)puVar16 - *(int *)(unaff_BP + -0x42));
            if ((undefined2 *)*(undefined2 *)(unaff_BP + -0x14) <= puVar14) {
              uVar10 = CONCAT11(uVar5,cVar6) & 0xfbff;
              *(uint *)(unaff_BP + -6) = *(uint *)(unaff_BP + -6) & 0xfb00;
              goto LAB_1000_08cd;
            }
            if (puVar15 <= puVar14) goto LAB_1000_08cd;
            uVar9 = -((int)puVar14 - (int)puVar15);
            if (uVar8 <= (uint)-((int)puVar14 - (int)puVar15)) {
              uVar9 = uVar8;
            }
            *(int *)(unaff_BP + -0x4a) = *(int *)(unaff_BP + -0x4a) - uVar9;
            uVar8 = uVar8 - uVar9;
            uVar10 = CONCAT11(uVar5,cVar6 - (char)uVar9);
            for (uVar11 = uVar9 >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
              puVar2 = puVar16;
              puVar16 = puVar16 + 1;
              *puVar2 = 0;
            }
            if ((uVar9 & 1) != 0) {
              puVar2 = puVar16;
              puVar16 = (undefined2 *)((int)puVar16 + 1);
              *(undefined *)puVar2 = 0;
            }
            if (uVar8 != 0) goto LAB_1000_08cd;
          }
          uVar8 = uVar10 & 0xff;
          if (*(int *)(unaff_BP + -0x4a) == 0) goto LAB_1000_08f1;
          uVar9 = uVar10;
          puVar14 = puVar15;
        } while (uVar8 != 0);
LAB_1000_0906:
        uVar18 = *(undefined2 *)(unaff_BP + -0x52);
        uVar9 = uVar10;
      }
LAB_1000_0889:
      pbVar12 = pbVar12 + 3;
      piVar1 = (int *)(unaff_BP + -0x4c);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  return;
}



undefined2 __cdecl16near FUN_1000_09af(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 in_AX;
  uint uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined4 uVar5;
  
  uVar3 = *(int *)(unaff_BP + -0x44) - *(int *)(unaff_BP + -0x46);
  puVar1 = (uint *)(unaff_BP + -0x2a);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  *(int *)(unaff_BP + -0x28) = *(int *)(unaff_BP + -0x28) - (uint)(uVar2 < uVar3);
  if ((*(uint *)(unaff_BP + -0x2a) | *(uint *)(unaff_BP + -0x28)) == 0) {
    uVar5 = (**(code **)(unaff_BP + -0x26))(0x1000,unaff_BP + -0x2e);
    iVar4 = (int)((ulong)uVar5 >> 0x10);
    *(undefined2 *)(unaff_BP + -0x2a) = (int)uVar5;
    *(int *)(unaff_BP + -0x28) = iVar4;
    if ((iVar4 != 0) ||
       ((*(uint *)(unaff_BP + -0x2e) + *(uint *)(unaff_BP + -0x2a) != 0 &&
        (CARRY2(*(uint *)(unaff_BP + -0x2e),*(uint *)(unaff_BP + -0x2a)))))) {
      *(undefined2 *)(unaff_BP + -2) = 0;
    }
    else {
      *(undefined2 *)(unaff_BP + -2) = 0xffff;
    }
  }
  else {
    iVar4 = (*(int *)(unaff_BP + -0x2e) + *(int *)(unaff_BP + -0x44)) - *(int *)(unaff_BP + -0x46);
    if (*(int *)(unaff_BP + -2) == 0) {
      iVar4 = iVar4 + -0x8000;
      *(int *)(unaff_BP + -0x2c) = *(int *)(unaff_BP + -0x2c) + 0x800;
    }
    *(int *)(unaff_BP + -0x2e) = iVar4;
  }
  if (*(int *)(unaff_BP + -0x28) == 0) {
    if (*(uint *)(unaff_BP + -0x2a) == 0) {
      return in_AX;
    }
    if (!CARRY2(*(uint *)(unaff_BP + -0x2a),*(uint *)(unaff_BP + -0x2e))) {
      iVar4 = *(int *)(unaff_BP + -0x2a);
      goto LAB_1000_0a45;
    }
  }
  iVar4 = -0x10;
  if (*(int *)(unaff_BP + -2) == 0) {
    iVar4 = -(*(int *)(unaff_BP + -0x2e) + -0x8000);
  }
LAB_1000_0a45:
  *(int *)(unaff_BP + -0x46) = iVar4;
  *(int *)(unaff_BP + -0x44) = iVar4;
  return in_AX;
}



undefined4 __cdecl16near FUN_1000_0a57(void)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 in_AX;
  uint uVar6;
  uint uVar7;
  undefined2 in_DX;
  int iVar8;
  uint uVar9;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 unaff_SS;
  long lVar12;
  
  uVar6 = *(int *)(unaff_BP + -0x48) - *(int *)(unaff_BP + -0x4a);
  puVar1 = (uint *)(unaff_BP + -0x36);
  uVar7 = *puVar1;
  *puVar1 = *puVar1 - uVar6;
  *(int *)(unaff_BP + -0x34) = *(int *)(unaff_BP + -0x34) - (uint)(uVar7 < uVar6);
  *(int *)(unaff_BP + -0x20) = *(int *)(unaff_BP + -0x20) + uVar6;
  puVar1 = (uint *)(unaff_BP + -0x3a);
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + uVar6;
  if (CARRY2(uVar7,uVar6)) {
    *(int *)(unaff_BP + -0x3a) = *(int *)(unaff_BP + -0x3a) + -0x8000;
    *(int *)(unaff_BP + -0x38) = *(int *)(unaff_BP + -0x38) + 0x800;
  }
  if ((*(uint *)(unaff_BP + -0x36) | *(uint *)(unaff_BP + -0x34)) == 0) {
    if ((*(uint *)(unaff_BP + -6) & 0x100) != 0) {
      return CONCAT22(in_DX,in_AX);
    }
    if ((*(uint *)(unaff_BP + -6) & 0x200) != 0) {
      uVar4 = *(undefined2 *)(unaff_BP + -0x52);
      uVar5 = *(undefined4 *)(unaff_BP + -0x3a);
      uVar7 = *(uint *)(unaff_BP + -0x14);
      puVar10 = (undefined2 *)((int)uVar5 - uVar7);
      puVar11 = *(undefined2 **)(unaff_BP + -0x1e);
      *(undefined2 **)(unaff_BP + -0x20) = puVar11;
      for (uVar7 = uVar7 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        puVar2 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar3 = *puVar2;
      }
      *(uint *)(unaff_BP + -6) = *(uint *)(unaff_BP + -6) & 0xf900;
    }
    lVar12 = (**(code **)(unaff_BP + -0x32))(0x1000,unaff_BP + -0x42);
    if (lVar12 != 0) {
      *(undefined2 *)(unaff_BP + -0x3e) = (int)lVar12;
      *(undefined2 *)(unaff_BP + -0x3c) = (int)((ulong)lVar12 >> 0x10);
    }
    *(undefined2 *)(unaff_BP + -0x3a) = *(undefined2 *)(unaff_BP + -0x42);
    *(undefined2 *)(unaff_BP + -0x38) = *(undefined2 *)(unaff_BP + -0x40);
    *(undefined2 *)(unaff_BP + -0x36) = *(undefined2 *)(unaff_BP + -0x3e);
    iVar8 = *(int *)(unaff_BP + -0x3c);
    *(int *)(unaff_BP + -0x34) = iVar8;
    if ((iVar8 != 0) ||
       ((*(uint *)(unaff_BP + -0x42) + *(uint *)(unaff_BP + -0x3e) != 0 &&
        (CARRY2(*(uint *)(unaff_BP + -0x42),*(uint *)(unaff_BP + -0x3e)))))) {
      *(undefined2 *)(unaff_BP + -4) = 0;
    }
    else {
      *(undefined2 *)(unaff_BP + -4) = 0xffff;
    }
  }
  if ((*(int *)(unaff_BP + -4) == 0) &&
     (*(int *)(unaff_BP + -0x14) + 0x8000U <= *(uint *)(unaff_BP + -0x3a))) {
    *(int *)(unaff_BP + -0x3a) = *(int *)(unaff_BP + -0x3a) + -0x8000;
    *(int *)(unaff_BP + -0x38) = *(int *)(unaff_BP + -0x38) + 0x800;
  }
  if (((*(uint *)(unaff_BP + -6) & 0x300) == 0) &&
     (uVar7 = *(int *)(unaff_BP + -0x20) - *(int *)(unaff_BP + -0x1e),
     *(uint *)(unaff_BP + -0x14) <= uVar7)) {
    *(int *)(unaff_BP + -0x20) = (uVar7 & *(uint *)(unaff_BP + -0x12)) + *(int *)(unaff_BP + -0x1e);
  }
  uVar7 = 0xffff;
  if (((*(uint *)(unaff_BP + -6) & 0x300) == 0) &&
     ((((*(int *)(unaff_BP + -0x3c) != 0 ||
        (*(uint *)(unaff_BP + -0x14) < *(uint *)(unaff_BP + -0x3e) >> 1)) &&
       (uVar6 = *(uint *)(unaff_BP + -0x3e) - *(uint *)(unaff_BP + -0x36),
       *(int *)(unaff_BP + -0x3c) - *(int *)(unaff_BP + -0x34) ==
       (uint)(*(uint *)(unaff_BP + -0x3e) < *(uint *)(unaff_BP + -0x36)))) &&
      (uVar7 = *(uint *)(unaff_BP + -0x14) - uVar6,
      *(uint *)(unaff_BP + -0x14) < uVar6 || uVar7 == 0)))) {
    uVar7 = 0xffff;
    *(uint *)(unaff_BP + -6) = *(uint *)(unaff_BP + -6) | 0x200;
    *(uint *)(unaff_BP + -6) = *(uint *)(unaff_BP + -6) & 0xfb00;
  }
  uVar6 = 0xfff0;
  if (*(int *)(unaff_BP + -4) == 0) {
    uVar6 = (*(int *)(unaff_BP + -0x14) + -0x8000) - *(int *)(unaff_BP + -0x3a);
  }
  if (((*(uint *)(unaff_BP + -6) & 0x300) == 0) &&
     (iVar8 = (*(int *)(unaff_BP + -0x20) - *(int *)(unaff_BP + -0x1e)) - *(int *)(unaff_BP + -0x14)
     , uVar9 = -iVar8, uVar9 < uVar6 || -uVar6 == iVar8)) {
    uVar6 = uVar9;
  }
  if ((*(int *)(unaff_BP + -0x34) == 0) && (*(uint *)(unaff_BP + -0x36) <= uVar6)) {
    uVar6 = *(uint *)(unaff_BP + -0x36);
  }
  if (uVar7 <= uVar6) {
    uVar6 = uVar7;
  }
  *(uint *)(unaff_BP + -0x4a) = uVar6;
  *(uint *)(unaff_BP + -0x48) = uVar6;
  return CONCAT22(in_DX,in_AX);
}



void __cdecl16near FUN_1000_0bda(void)

{
  int *piVar1;
  byte bVar2;
  undefined extraout_AH;
  uint uVar3;
  int iVar4;
  byte in_CH;
  char cVar5;
  uint *puVar6;
  int unaff_BP;
  int unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  undefined uVar8;
  
  bVar2 = ('\x01' << (in_CH & 0x1f)) - 1;
  if (bVar2 == 0) {
    return;
  }
  uVar3 = (uint)(bVar2 & *unaff_DI);
  cVar5 = '\0';
  puVar6 = (uint *)((in_CH - 1) * 8 + *(int *)(unaff_SI + 0xe));
  do {
    bVar7 = uVar3 < *puVar6;
    if (!bVar7) {
      for (puVar6 = puVar6 + -3; (in_CH = in_CH - 1, in_CH != 0 && (*puVar6 <= uVar3));
          puVar6 = puVar6 + -4) {
        uVar3 = uVar3 >> 1;
        cVar5 = cVar5 + '\x01';
      }
      uVar8 = false;
      if (cVar5 == '\0') {
        piVar1 = (int *)(unaff_BP + -0x46);
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && (FUN_1000_09af(), (bool)uVar8)) {
          uVar8 = 0;
        }
      }
      iVar4 = FUN_1000_1097();
      if ((bool)uVar8) {
        FUN_1000_0ebe();
        iVar4 = FUN_1000_0de5();
      }
      if (iVar4 == *(int *)(unaff_SI + 0x18)) {
        FUN_1000_0c81();
        FUN_1000_0e37();
        FUN_1000_0de5();
      }
      return;
    }
    uVar8 = (undefined)uVar3;
    unaff_DI = unaff_DI + 1;
    piVar1 = (int *)(unaff_BP + -0x46);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1000_09af();
      unaff_ES = (undefined2)((ulong)*(byte **)(unaff_BP + -0x2e) >> 0x10);
      unaff_DI = (byte *)*(byte **)(unaff_BP + -0x2e);
      uVar8 = extraout_AH;
      if (bVar7) {
        return;
      }
    }
    uVar3 = CONCAT11(uVar8,*unaff_DI);
    in_CH = in_CH + 8;
    puVar6 = puVar6 + 0x20;
  } while( true );
}



uint __cdecl16near FUN_1000_0c81(void)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte in_CL;
  byte in_CH;
  byte bVar5;
  int unaff_BP;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined uVar6;
  
  bVar3 = ('\x01' << (in_CH & 0x1f)) - 1;
  if (bVar3 == 0) {
    return (uint)bVar3;
  }
  bVar3 = bVar3 & *unaff_DI;
  uVar4 = (uint)bVar3;
  uVar6 = in_CH < in_CL;
  bVar5 = in_CH - in_CL;
  if ((bool)uVar6 || bVar5 == 0) {
    if ((bVar5 != 0) && (uVar6 = bVar5 < 0xf8, bVar5 < 0xf9)) {
      uVar6 = bVar5 < 0xf0;
      if (bVar5 < 0xf1) {
        unaff_DI = unaff_DI + 1;
        piVar1 = (int *)(unaff_BP + -0x46);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          uVar4 = FUN_1000_09af();
          if ((bool)uVar6) {
            return uVar4;
          }
          unaff_ES = (undefined2)((ulong)*(byte **)(unaff_BP + -0x2e) >> 0x10);
          unaff_DI = (byte *)*(byte **)(unaff_BP + -0x2e);
        }
      }
      unaff_DI = unaff_DI + 1;
      piVar1 = (int *)(unaff_BP + -0x46);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        uVar4 = FUN_1000_09af();
        if ((bool)uVar6) {
          return uVar4;
        }
        pbVar2 = *(byte **)(unaff_BP + -0x2e);
        unaff_ES = (undefined2)((ulong)pbVar2 >> 0x10);
        unaff_DI = (byte *)pbVar2;
        bVar3 = *pbVar2;
      }
      else {
        bVar3 = *unaff_DI;
      }
    }
    piVar1 = (int *)(unaff_BP + -0x46);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar4 = FUN_1000_09af();
      bVar3 = (byte)(uVar4 >> 8);
      if ((bool)uVar6) {
        if ((bVar5 & 7) != 0) {
          return uVar4;
        }
        return (uint)bVar3;
      }
      uVar4 = CONCAT11(bVar3,*(undefined *)*(undefined4 *)(unaff_BP + -0x2e));
    }
    else {
      uVar4 = CONCAT11(bVar3,unaff_DI[1]);
    }
  }
  if ((bVar5 & 7) != 0) {
    return uVar4 >> (bVar5 & 7) & 0xff;
  }
  return uVar4 >> 8;
}



void __cdecl16near FUN_1000_0d2d(void)

{
  int *piVar1;
  char in_CH;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if ((char)(in_CH + -1) < '\0') {
    return;
  }
  if (in_CH == '\x01') {
    piVar1 = (int *)(unaff_BP + -0x46);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1000_09af();
    }
    return;
  }
  return;
}



void __cdecl16near FUN_1000_0d5e(void)

{
  undefined2 uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  long lVar2;
  
  if (*(int *)(unaff_BP + -0x22) != 1) {
    lVar2 = (**(code **)(unaff_BP + -0x32))(0x1000,unaff_BP + -0x42);
    uVar1 = (undefined2)((ulong)lVar2 >> 0x10);
    if (lVar2 != 0) {
      *(undefined2 *)(unaff_BP + -0x3e) = (int)lVar2;
      *(undefined2 *)(unaff_BP + -0x36) = (int)lVar2;
      *(undefined2 *)(unaff_BP + -0x3c) = uVar1;
      *(undefined2 *)(unaff_BP + -0x34) = uVar1;
    }
  }
  return;
}



undefined2 __cdecl16near FUN_1000_0daa(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint in_CX;
  int iVar3;
  int unaff_SI;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  undefined in_CF;
  
  uVar2 = FUN_1000_10a8();
  if ((!(bool)in_CF) && (0xbf < in_CX)) {
    *(int *)(unaff_SI + 0x18) = 1 << ((byte)*(undefined2 *)(unaff_SI + 6) & 0x1f);
    puVar4 = *(undefined2 **)(unaff_SI + 0xe);
    for (iVar3 = 0x60; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = 0;
    }
  }
  return uVar2;
}



undefined4 __cdecl16near FUN_1000_0de5(void)

{
  undefined2 in_AX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 in_DX;
  int in_BX;
  uint uVar4;
  int *piVar5;
  int unaff_SI;
  int *piVar6;
  undefined2 unaff_DS;
  
  uVar4 = in_BX - *(int *)(unaff_SI + 0x16);
  piVar5 = (int *)(uVar4 + *(int *)(unaff_SI + 0xc));
  piVar6 = (int *)(uVar4 * 4 + *(int *)(unaff_SI + 0xe));
  iVar1 = 1;
  if (uVar4 >> 1 != 0) {
    iVar1 = piVar6[-4];
  }
  iVar3 = -((uVar4 >> 1) - *(int *)(unaff_SI + 4));
  if (iVar3 != 0) {
    iVar1 = iVar1 << 1;
    do {
      iVar2 = iVar1 - *piVar5;
      *piVar6 = iVar2;
      iVar1 = iVar2 * 2;
      piVar6[1] = iVar1;
      piVar6[2] = iVar2 * 4;
      piVar6[3] = iVar2 * 0x10;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return CONCAT22(in_DX,in_AX);
}



void __cdecl16near FUN_1000_0e37(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_AX;
  int iVar4;
  undefined2 *puVar5;
  int *piVar6;
  int *piVar7;
  int unaff_SI;
  undefined2 unaff_DS;
  
  puVar5 = (undefined2 *)(in_AX * 2 + *(int *)(unaff_SI + 0x12));
  *puVar5 = 1;
  LOCK();
  *(undefined2 **)(*(int *)(unaff_SI + 8) * 2 + *(int *)(unaff_SI + 0x14)) = puVar5;
  UNLOCK();
  *(int *)(unaff_SI + 8) = *(int *)(unaff_SI + 8) + 1;
  if (*(int *)(unaff_SI + 8) != 2) {
    uVar2 = *(uint *)(unaff_SI + 10);
    if (uVar2 < *(uint *)(unaff_SI + 4)) {
      piVar6 = (int *)((uVar2 - 1) * 2 + *(int *)(unaff_SI + 0xc));
      *(int *)(unaff_SI + 10) = *(int *)(unaff_SI + 10) + 1;
    }
    else {
      for (piVar6 = (int *)((uVar2 - 2) * 2 + *(int *)(unaff_SI + 0xc)); *piVar6 == 0;
          piVar6 = piVar6 + -1) {
      }
    }
    iVar4 = -((((uint)((int)piVar6 - *(int *)(unaff_SI + 0xc)) >> 1) + 1) - *(int *)(unaff_SI + 4));
    *piVar6 = *piVar6 + -1;
    piVar6[1] = piVar6[1] + 2;
    iVar3 = *(int *)(unaff_SI + 0x16) - *(int *)(unaff_SI + 0xc);
    piVar7 = (int *)((int)piVar6 + iVar3 + 4);
    piVar1 = (int *)((int)piVar6 + iVar3 + 2);
    *piVar1 = *piVar1 + -2;
    do {
      *piVar7 = *piVar7 + 2;
      piVar7 = piVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



undefined4 __cdecl16near FUN_1000_0ebe(void)

{
  int *piVar1;
  uint *puVar2;
  uint **ppuVar3;
  undefined2 in_AX;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 in_DX;
  uint uVar7;
  uint **ppuVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined2 *unaff_SI;
  uint **ppuVar12;
  undefined2 unaff_DS;
  uint uStack_10;
  
  unaff_SI[0xf] = (unaff_SI[2] + -1) * 2 + unaff_SI[0xb];
  unaff_SI[0x13] = 0;
  ppuVar8 = (uint **)unaff_SI[10];
  iVar5 = unaff_SI[4];
  iVar6 = unaff_SI[0xd];
  unaff_SI[0xd] = iVar6 + -1;
  uVar4 = 0;
  do {
    uVar7 = **ppuVar8;
    if (iVar6 + -1 == 0) {
      uVar7 = uVar7 >> 1;
      **ppuVar8 = uVar7;
    }
    if (uVar4 < uVar7) {
      uVar4 = uVar7;
    }
    ppuVar8 = ppuVar8 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (uVar4 != 0) {
    for (uVar7 = 0x8000; (uVar7 & uVar4) == 0; uVar7 = (int)uVar7 >> 1) {
    }
    ppuVar8 = (uint **)unaff_SI[10];
    uStack_10 = unaff_SI[4];
    do {
      if (((**ppuVar8 & uVar7) == 0) && (iVar5 = uStack_10 - 1, ppuVar3 = ppuVar8, iVar5 != 0)) {
        do {
          ppuVar12 = ppuVar3 + 1;
          if ((**ppuVar12 & uVar7) != 0) {
            LOCK();
            puVar2 = *ppuVar12;
            *ppuVar12 = *ppuVar8;
            UNLOCK();
            *ppuVar8 = puVar2;
            if (ppuVar3 == ppuVar8) goto LAB_1000_0f52;
            uStack_10 = uStack_10 - 1;
            ppuVar8 = ppuVar8 + 1;
          }
          iVar5 = iVar5 + -1;
          ppuVar3 = ppuVar12;
        } while (iVar5 != 0);
        uVar7 = (int)uVar7 >> 1;
        uVar4 = uVar7 & 1;
      }
      else {
LAB_1000_0f52:
        ppuVar8 = ppuVar8 + 1;
        uStack_10 = uStack_10 - 1;
        uVar4 = uStack_10;
      }
    } while (uVar4 != 0);
  }
LAB_1000_0f58:
  uVar4 = unaff_SI[5];
  unaff_SI[0x10] = (uVar4 - 1) * 2 + unaff_SI[0xb];
  piVar9 = (int *)unaff_SI[0xb];
  iVar5 = unaff_SI[6] - (int)piVar9;
LAB_1000_0f73:
  if (*(int *)((int)piVar9 + iVar5) != 0) {
    if (((2 < *(uint *)((int)piVar9 + iVar5)) && (piVar9 != (int *)unaff_SI[0xf])) &&
       (-1 < (**(int **)*piVar9 - **(int **)(piVar9[1] + -2)) - **(int **)(piVar9[1] + -4)))
    goto LAB_1000_1072;
    if (2 < uVar4) {
      iVar6 = uVar4 - 2;
      uVar7 = **(uint **)(piVar9[1] + -2);
      piVar10 = piVar9 + 2;
      while( true ) {
        uVar7 = uVar7 - **(int **)*piVar10;
        if ((1 < *(uint *)((int)piVar10 + iVar5)) &&
           (((int)uVar7 < 0 || (uVar7 < (uint)*((int **)*piVar10)[1])))) break;
        piVar10 = piVar10 + 1;
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) goto LAB_1000_0fd4;
      }
      unaff_SI[0x13] = unaff_SI[0x13] + 1;
      *(int *)((int)piVar9 + iVar5) = *(int *)((int)piVar9 + iVar5) + -1;
      piVar9[1] = piVar9[1] + -2;
      piVar11 = piVar9 + 1;
      *(int *)((int)piVar11 + iVar5) = *(int *)((int)piVar11 + iVar5) + 2;
      piVar9[2] = piVar9[2] + 2;
      for (; piVar11 != piVar10 + -1; piVar11 = piVar11 + 1) {
        piVar11[2] = piVar11[2] + 2;
      }
      *(int *)((int)piVar11 + iVar5) = *(int *)((int)piVar11 + iVar5) + 1;
      piVar11[1] = piVar11[1] + 2;
      piVar1 = (int *)((int)piVar11 + iVar5 + 2);
      *piVar1 = *piVar1 + -2;
      if (*(int *)(unaff_SI[0x10] + iVar5) == 0) {
        unaff_SI[5] = unaff_SI[5] + -1;
      }
      goto LAB_1000_0f58;
    }
  }
LAB_1000_0fd4:
  piVar9 = piVar9 + 1;
  uVar4 = uVar4 - 1;
  if (uVar4 == 0) {
    if ((uint)unaff_SI[0x13] < 0x10) {
      if (((uint)unaff_SI[0x13] < 8) && (unaff_SI[0xe] != 1)) {
        unaff_SI[1] = unaff_SI[1] << 1;
        unaff_SI[0xe] = (uint)unaff_SI[0xe] >> 1;
        unaff_SI[0xd] = (uint)unaff_SI[0xd] >> 1;
      }
    }
    else {
      unaff_SI[1] = unaff_SI[0x12];
      unaff_SI[0xe] = unaff_SI[0x11];
    }
    *unaff_SI = unaff_SI[1];
    if (unaff_SI[0xd] == 0) {
      unaff_SI[0xd] = unaff_SI[0xe];
    }
    return CONCAT22(in_DX,in_AX);
  }
  goto LAB_1000_0f73;
LAB_1000_1072:
  unaff_SI[0x13] = unaff_SI[0x13] + 1;
  piVar1 = (int *)((int)piVar9 + iVar5 + -2);
  *piVar1 = *piVar1 + 1;
  *(int *)((int)piVar9 + iVar5) = *(int *)((int)piVar9 + iVar5) + -3;
  piVar1 = (int *)((int)piVar9 + iVar5 + 2);
  *piVar1 = *piVar1 + 2;
  *piVar9 = *piVar9 + 2;
  piVar9[1] = piVar9[1] + -4;
  if (piVar9 == (int *)unaff_SI[0x10]) {
    unaff_SI[5] = unaff_SI[5] + 1;
  }
  goto LAB_1000_0f58;
}



void __cdecl16near FUN_1000_1097(void)

{
  int *piVar1;
  int in_AX;
  int *unaff_SI;
  undefined2 unaff_DS;
  
  piVar1 = (int *)(in_AX * 2 + unaff_SI[9]);
  *piVar1 = *piVar1 + 1;
  *unaff_SI = *unaff_SI + -1;
  return;
}



undefined4 __cdecl16near FUN_1000_10a8(void)

{
  undefined2 *puVar1;
  int *piVar2;
  uint in_AX;
  int iVar3;
  uint in_CX;
  int iVar4;
  undefined2 in_DX;
  uint uVar5;
  undefined2 in_BX;
  undefined2 *unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  if (2 < in_CX) {
    *unaff_SI = in_DX;
    unaff_SI[1] = in_DX;
    unaff_SI[0xd] = in_BX;
    unaff_SI[0xe] = in_BX;
    unaff_SI[0x12] = in_DX;
    unaff_SI[0x11] = in_BX;
    unaff_SI[3] = in_AX & 0xff;
    unaff_SI[2] = in_AX >> 8;
    if (((1 << ((byte)unaff_SI[3] & 0x1f)) + (in_AX >> 8)) * 4 + 0x32 <= in_CX) {
      uVar5 = 2 << ((byte)unaff_SI[3] & 0x1f);
      iVar3 = unaff_SI[2];
      puVar6 = unaff_SI + 0x14;
      unaff_SI[6] = puVar6;
      puVar6 = puVar6 + iVar3;
      unaff_SI[0xb] = puVar6;
      unaff_SI[10] = puVar6 + iVar3 + 1;
      iVar3 = (int)(puVar6 + iVar3 + 1) + uVar5 + 4;
      unaff_SI[9] = iVar3;
      iVar3 = iVar3 + uVar5 + 4;
      unaff_SI[7] = iVar3;
      unaff_SI[8] = iVar3;
      unaff_SI[4] = 1;
      unaff_SI[5] = 1;
      puVar6 = (undefined2 *)unaff_SI[6];
      *puVar6 = 2;
      iVar3 = unaff_SI[2];
      while( true ) {
        puVar6 = puVar6 + 1;
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) break;
        *puVar6 = 0;
      }
      piVar2 = (int *)unaff_SI[0xb];
      iVar3 = unaff_SI[10];
      *piVar2 = iVar3;
      for (iVar4 = unaff_SI[2]; piVar2 = piVar2 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar2 = iVar3 + 4;
      }
      piVar2 = (int *)unaff_SI[10];
      iVar3 = unaff_SI[9];
      *piVar2 = iVar3 + uVar5;
      for (iVar4 = (uVar5 >> 1) + 1; piVar2 = piVar2 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar2 = iVar3 + uVar5 + 2;
      }
      puVar6 = (undefined2 *)unaff_SI[9];
      for (uVar5 = uVar5 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = 0x8000;
      }
      *puVar6 = 0;
      puVar6[1] = 0;
    }
  }
  return CONCAT22(in_DX,in_AX);
}


