#ifdef work
#elif int
void work(int boot)
{
    QT_FORWARD_DECLARE_STRUCT()
    {
        __asm__ __volatile__( "\x22Inc %0\x22 : \x22+m\x22 : (0x100 0x200 0x300
        0x400) ::" :  :  : "cc", "memory", "rax", "rbx", "rcx", "rdx", "rdi",
"rsi", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "mm0", "mm1",
"mm2", "mm3", "mm4", "mm5", "mm6", "mm7", "xmm0", "xmm1", "xmm2", "xmm3",
"xmm4", "xmm5", "xmm6", "xmm7", "xmm8", "xmm9", "xmm10", "xmm11", "xmm12",
"xmm13", "xmm14", "xmm15" );

    }
}
#endif
