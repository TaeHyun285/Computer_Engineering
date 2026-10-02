.global _main
.align 4

_main:
    ; write(1, msg, 14)
    mov     x0, #1              ; stdout (fd = 1)
    adrp    x1, msg@PAGE        ; msg 주소의 페이지
    add     x1, x1, msg@PAGEOFF ; msg 주소의 오프셋
    mov     x2, #14             ; 문자열 길이
    mov     x16, #4             ; sys_write 시스템 콜 번호 (macOS)
    svc     #0x80               ; 시스템 콜 실행

    ; exit(0)
    mov     x0, #0              ; status = 0
    mov     x16, #1             ; sys_exit 시스템 콜 번호
    svc     #0x80               ; 시스템 콜 실행

.data
msg:
    .ascii  "Hello, World!\n"
