.data

.code

deleteItemAddr dq 0140A28190h

deleteItem PROC

	push r10
	sub rsp,028h
	call deleteItemAddr
	add rsp,028h
	pop r10
	ret

deleteItem ENDP

END