.data

.code

getNameFunc dq 01407AFD30h

getItemName PROC

	mov r8,00000004
	sub rsp,28
	call getNameFunc
	add rsp,28
	ret

getItemName ENDP

END