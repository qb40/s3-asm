;
; !File!
;   dbf.inc
;
; !Desc!
;   Epoc Services for Psion Series 3/3a
;
; !Authors!
;   Krister Wombell
;
; !Date!
;   13:11-25/09/93
;

; DBFManager
DbfOpen			EPOC	$00,$D8,cl,si,di,dx,bx
DbfClose		EPOC	$01,$D8,bx
DbfFlush		EPOC	$02,$D8,bx
DbfTrash		EPOC	$03,$D8,bx
DbfCopyDown		EPOC	$04,$D8,bx,si
DbfCompress		EPOC	$05,$D8,bx,di
DbfCopyFile		EPOC	$06,$D8,bx,cl,ch,dx,di,si
DbfFileSize		EPOC	$07,$D8,bx
DbfExtHeaderRead	EPOC	$08,$D8,al,bx,cx,si
DbfExtHeaderWrite	EPOC	$09,$D8,al,bx,cx,si
DbfVersion		EPOC	$0A,$D8
DbfAbsReadSense		EPOC	$0B,$D8,bx,cx
DbfAbsRead		EPOC	$0C,$D8,bx,cx
DbfNextRead		EPOC	$0D,$D8,bx
DbfBackRead		EPOC	$0E,$D8,bx
DbfFirstRead		EPOC	$0F,$D8,bx
DbfLastRead		EPOC	$10,$D8,bx
DbfAppend		EPOC	$11,$D8,bx,cx
DbfEraseRead		EPOC	$12,$D8,bx,di
DbfUpdate		EPOC	$13,$D8,bx,cx,di
DbfFindRead		EPOC	$14,$D8,al,bx,cx,dl,dh,di,si
DbfSense		EPOC	$15,$D8,bx
DbfCount		EPOC	$16,$D8,bx
DbfDescRecordRead	EPOC	$17,$D8,bx
DbfDescRecordWrite	EPOC	$18,$D8,bx,cx



