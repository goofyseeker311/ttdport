typedef unsigned char   undefined;

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
void __cdecl16near FUN_1000_0045(void);
undefined2 __cdecl16far FUN_1000_02e3(undefined2 *param_1,uint param_2);
undefined2 __cdecl16far FUN_1000_031c(undefined2 *param_1);
undefined2 __cdecl16far FUN_1000_05d4(void);
void __cdecl16near FUN_1000_07a0(void);
void __cdecl16near FUN_1000_0829(void);
undefined2 __cdecl16near FUN_1000_09af(void);
undefined4 __cdecl16near FUN_1000_0a57(void);
void __cdecl16near FUN_1000_0bda(void);
uint __cdecl16near FUN_1000_0c81(void);
void __cdecl16near FUN_1000_0d2d(void);
void __cdecl16near FUN_1000_0d5e(void);
undefined2 __cdecl16near FUN_1000_0daa(void);
undefined4 __cdecl16near FUN_1000_0de5(void);
void __cdecl16near FUN_1000_0e37(void);
undefined4 __cdecl16near FUN_1000_0ebe(void);
void __cdecl16near FUN_1000_1097(void);
undefined4 __cdecl16near FUN_1000_10a8(void);

