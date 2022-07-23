.global lab2, And_op, Or_op, Xor_op
And_op:
AND X0,X0,X1
RET

Or_op:
ORR X0,X0,X1
RET

Xor_op:
EOR X0,X0,X1
RET

lab2:
mov x4, x0
mov x5, x1
mov x6, x2
mov x7, x3
mov x19, x4

Loop:
cmp x19,x5
b.ge Else
and x9, x6, x7
orr x10, x6,x7
eor x11,x6,x7
cmp x10, x9
b.ge Exit
add x19, x19, #1
b Loop

Exit:
LSR X0,X9,#4
ret

Else:
LSL X0,X10,#4
ret
