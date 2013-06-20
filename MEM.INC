;
; !File!
;   mem.inc
;
; !Desc!
;   Epoc Services for Psion Series 3/3a
;
; !Authors!
;   Krister Wombell
;
; !Date!
;   22:03-25/09/93
;

; SegManager
SegFreeMemory		EPOC	$00,$80
SegCreate		EPOC	$01,$80,al,bx,cx
SegDelete		EPOC	$02,$80,bx
SegOpen			EPOC	$03,$80,bx
SegClose		EPOC	$04,$80,bx
SegSize			EPOC	$05,$80,bx
SegAdjustSize		EPOC	$06,$80,bx,cx
SegFind			EPOC	$07,$80,bx,di,si
SegCopyTo		EPOC	$08,$80,bx,cx,si,dx,di
SegCopyFrom		EPOC	$09,$80,bx,cx,si,dx,di
SegLock			EPOC	$0A,$80,bx
SegUnLock		EPOC	$0B,$80,bx
SegRamDiskUsed		EPOC	$0C,$80
SegCloseLockedOrDevice	EPOC	$0D,$80,bx

; HeapManager
HeapAllocateCell	EPOC	$00,$81,cx
HeapReAllocateCell	EPOC	$01,$81,bx,cx
HeapAdjustCellSize	EPOC	$02,$81,bx,cx,dx
HeapFreeCell		EPOC	$03,$81,bx
HeapCellSize		EPOC	$04,$81,bx
HeapSetGranularity	EPOC	$05,$81,bx
HeapFreeMemory		EPOC	$06,$81


