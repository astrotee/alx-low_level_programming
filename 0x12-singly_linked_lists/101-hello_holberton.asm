          global    main
          extern    printf
main:
	  mov   edi, mystr
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
mystr: db 'Hello, Holberton',10,0
