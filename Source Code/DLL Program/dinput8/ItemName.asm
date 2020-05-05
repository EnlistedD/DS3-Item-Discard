.data

.code

getNameFunc dq 01407AFD30h

getItemName PROC

	mov r8,00000004
	push r10
	push r11
	sub rsp,28
	call getNameFunc
	add rsp,28
	pop r11
	pop r10
	ret

getItemName ENDP

END