.data

.code

validateItem PROC

	push r10
	push r11
	sub rsp,098h
	call r8
	add rsp,098h
	pop r11
	pop r10
	ret

validateItem ENDP

END