typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned long    undefined4;
typedef unsigned int    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct OLD_IMAGE_DOS_RELOC OLD_IMAGE_DOS_RELOC, *POLD_IMAGE_DOS_RELOC;

struct OLD_IMAGE_DOS_RELOC {
    word offset;
    word segment;
};

typedef struct OLD_IMAGE_DOS_HEADER OLD_IMAGE_DOS_HEADER, *POLD_IMAGE_DOS_HEADER;

struct OLD_IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
};




void entry(void);
void FUN_1020_0002(void);
void FUN_1020_000d(void);
void FUN_1020_005a(void);
void __cdecl16far FUN_1027_0000(void);
undefined2 FUN_1027_018e(undefined2 param_1_00,char param_1,undefined2 *param_2,undefined *param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,undefined4 *param_12,undefined4 *param_13,undefined4 *param_14,undefined4 *param_15,undefined4 *param_16,undefined4 *param_17);
undefined2 __cdecl16far FUN_1079_0000(void);
undefined2 __cdecl16far FUN_1079_0018(void);
undefined2 __cdecl16far FUN_1079_002d(void);
undefined2 __cdecl16far FUN_1079_0046(void);
void __cdecl16far FUN_1079_0065(uint *param_1,uint *param_2);
undefined2 __cdecl16far FUN_1079_007e(void);
void __cdecl16far FUN_1079_0085(void);
undefined2 __cdecl16far FUN_1079_0088(undefined2 param_1,int param_2);
undefined2 __cdecl16far FUN_1079_00ce(undefined2 param_1,undefined2 param_2,int param_3);
void __cdecl16far FUN_1079_0112(int param_1);
void __cdecl16far FUN_108f_0002(void);
int __cdecl16far FUN_108f_081f(char *param_1);
void __cdecl16far FUN_108f_0846(char *param_1,char *param_2);
void __cdecl16far FUN_108f_0863(undefined4 param_1,undefined2 param_3,undefined2 param_4);
char * __cdecl16far FUN_108f_088a(char *param_1,char param_2);
int __cdecl16far FUN_108f_08b4(byte *param_1,byte *param_2);
void __cdecl16far FUN_108f_08ea(undefined *param_1,undefined *param_2,int param_3);
int __cdecl16far FUN_108f_090e(byte *param_1,byte *param_2,int param_3);
int __cdecl16far FUN_108f_0945(char *param_1);
int __cdecl16far FUN_108f_0a06(int param_1);
undefined2 __cdecl16far FUN_108f_0a48(char *param_1);
char * __cdecl16far FUN_108f_0a96(char *param_1,char param_2);
char * __cdecl16far FUN_108f_0ae3(char *param_1,undefined2 param_3);
char * __cdecl16far FUN_108f_0b3e(char *param_1,undefined2 param_2);
undefined2 __cdecl16far FUN_108f_0b73(char *param_1,char *param_2);
undefined2 __cdecl16far FUN_108f_0bab(byte param_1);
int __cdecl16far FUN_108f_0bec(byte *param_1,byte *param_2);
char * __cdecl16far FUN_1153_0006(char *param_1,char param_2);

