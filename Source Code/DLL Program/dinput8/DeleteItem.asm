.data

.code

chrBase dq 0144740178h
deleteItemAddr dq 0140A28190h

deleteItem PROC

	;Delete Item
	push r10
	sub rsp,028h
	call deleteItemAddr
	add rsp,028h
	pop r10

	;Dec Item Count
	push rax
	mov rax,[chrBase]
	mov rax,[rax]
	mov rax,[rax+010h]
	mov rax,[rax+0470h]
	mov rax,[rax+010h]
	dec dword ptr[rax+01C8h]
	pop rax
	ret

deleteItem ENDP

END