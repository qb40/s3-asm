;
;Window server example program.
; (c)1993 Krister Wombell
;

	include	\inc\win.inc
	include	\inc\mem.inc

	mov	si,offset ftab
	callr	word ptr [bx+si]
	retf
ftab	dw	offset init
	dw	offset display

bitseg	dw	0
drawpt	dw	0
wid	dw	0
aspt	dw	0
fill	dw	$1


init	mov	si,ax
	mov	ax,0[si]
	mov	[wid],ax
	mov	ax,2[si]
	mov	[aspt],ax

	heapallocatecell 9600
	jc	err
	mov	[drawpt],ax

	call	attachbit

	winfomsg	offset testtxt
	ret

err	xor	bx,bx
	idiv	bx
	ret

display	mov	di,[drawpt]
	mov	cx,4800
	mov	ax,[fill]
ilp	stosw
	loop	ilp

	segcopyto	[bitseg],9600,[drawpt],0,0
	winvalidatewin	[wid]
	ror	word ptr [fill],1
	ror	word ptr [fill],1
	ret



attachbit
	gcreatebit	6,offset bitstruct,offset bitstruct
	jc	err
	mov	[bitid],ax
	wsetwinbitmap	[wid],1,offset winbitstruct

	segopen	offset sname
	jc	err
	mov	[bitseg],ax
	ret


winbitstruct
bitid	dw	0	;bitmap
	dw	0	;pos
	dw	0
	dw	0	;rect
	dw	0
	dw	480
	dw	160
	dw	4	;mode
	dw	0	;time
	dw	0

bitstruct
ppnt	dw	480
	dw	160
sname	db	0,0,0,0,0,0,0,0,0,0,0,0,0,0

testtxt	db	"Test...",0


