	include	\inc\win.inc
	include	\inc\mem.inc

	image

windata	dw	$200	;flags
	dw	0	;extent
	dw	0
	dw	240
	dw	60
	dw	0	;mouse hdl
	db	0	;bckgnd
	db	0	;filler

winbitstruct
bitid	dw	0	;bitmap
	dw	0	;pos
	dw	0
	dw	0	;rect
	dw	0
	dw	240
	dw	60
	dw	4	;mode
	dw	0	;time
	dw	0

bitstruct
ppnt	dw	240
	dw	60
sname	db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

bitseg	dw	0
drawpt	dw	0
wid	dw	0
fill	dw	$1
wservpt	dw	0


	code
start
	call	init
loop	call	display
	jmp	loop


display	mov	di,[drawpt]
	mov	cx,1800
	mov	ax,[fill]
dlp	stosw
	loop	dlp

	segcopyto	[bitseg],3600,[drawpt],0,0
	winvalidatewin	[wid]
	wflush
	ror	word ptr [fill],1
	ret

err	xor	bx,bx
	idiv	bx
	ret



init
	heapallocatecell	3600
	jc	err
	mov	[drawpt],ax

	heapallocatecell	1024
	jc	err
	mov	[wservpt],ax

	wconnect		[wservpt],0,$40

	gcreatebit		6,offset bitstruct,offset bitstruct
	jc	err
	mov	[bitid],ax

	wcreatewindow		0,$5200,offset windata,1
	jc	err
	mov	[wid],ax

	wsetwinbitmap		[wid],1,offset winbitstruct

	winitialisewindowtree	[wid]

	segopen	offset sname
	mov	[bitseg],ax
	ret

