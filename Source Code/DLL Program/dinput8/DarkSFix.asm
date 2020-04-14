.data

.code

baseAddr dq 014473A9C8h
callAddr dq 0140491BC0h

fixDarkSun PROC

	sub rsp,068h
	mov rcx,[baseAddr]
	mov rcx,[rcx]
	mov rdx,[rdx+08h]
	mov rcx,[rcx+018h]
	mov r8d,3701953
	mov r9d,3701953
	mov dword ptr[rsp+020h],000000000h
	call callAddr
	add rsp,068h
	ret

fixDarkSun ENDP

END