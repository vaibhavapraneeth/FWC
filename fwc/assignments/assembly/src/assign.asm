

.include "/home/vaibhava_108/fwc/assembly/hello/m328Pdef.inc"


ldi r17, 0b11000011 ;identifying output pins 2,3,4,5
out DDRD,r17	

ldi r17,0b11111111  ;  activating pull ups
out PORTD,r17

ldi r16,0b00000001
out DDRB,r16            ;declaring 8th pin as output

start:                   ;loop for reading the input from pins 2,3,4 ,5 continously

        in r17,PIND             ;reading the data from pins 2,3,4,5
;Taking z
        ldi r24,0b00000100
        mov r18,r17
        and r18,r24
        ldi r25,0b00000010
        loopx:  lsr r18
        dec r25
        brne    loopx
        .DEF Z = r18
;Taking y
        mov r19,r17
        ldi r24,0b00001000
        and r19,r24
        ldi r25,0b00000011
        loopy:  lsr r19
        dec r25 
        brne	loopy

        .DEF Y = r19
;Taking x
        ldi r24,0b00010000
        mov r20,r17
        and r20,r24
         ldi r25,0b00000100
        loopz:  lsr r20
        dec r25
        brne    loopz
        .DEF X = r20
;Taking w
        ldi r24,0b00100000
        mov r21,r17
        and r21,r24
         ldi r25,0b00000101
        loopw:  lsr r21
        dec r25
        brne    loopw
        .DEF W = r21
        
        ldi r26,0x00
        ldi r27,0x00
        ldi r28,0x00
        ldi r29,0x00
        .DEF T1 = r26
        .DEF T2 = r27
        .DEF T3 = r28
        .DEF T4 = r29

        ;POS expression
        ;F = WY'+XY'Z'+WXY'  

        mov T1,Y	;T1 = Y    
        com T1
        and T1,W	;T1 = WY'
        
        mov T2,Y
        com T2
        mov T3,Z
        com T3
        and T2,T3
        and T2,X	;T2 = XY'Z'
        
        mov T4,Z
        com T4
        and T4,X
        and T4,W 	;T4 = WXZ'
         
        or T2,T4
        or T1,T2	;WY'+XY'Z'+WXY'
        
        out PORTB,T1

        rjmp start
