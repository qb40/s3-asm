;
; !File!
;   proc.inc
;
; !Desc!
;   Epoc Services for Psion Series 3/3a
;
; !Authors!
;   Krister Wombell
;
; !Date!
;   21:00-25/09/93
;

; SemManager
SemCreate		EPOC	$00,$82,bx
SemDelete		EPOC	$01,$82,bx
SemWait			EPOC	$02,$82,bx
SemSignalOnce		EPOC	$03,$82,bx
SemSignalMany		EPOC	$04,$82,bx,cx
SemSignalOnceNoReSched	EPOC	$05,$82,bx

; MessManager
MessInit		EPOC	$00,$83,bl,bh
MessReceiveAsynchronous	EPOC	$01,$83,bx,di
MessReceiveWithWait	EPOC	$02,$83,bx
MessReceiveCancel	EPOC	$03,$83
MessSend		EPOC	$04,$83,bx,cx,si
MessSendReceiveAsynchronous EPOC	$05,$83,bx,cx,di
MessSendReceiveWithWait	EPOC	$06,$83,bx,cx,si
MessFree		EPOC	$07,$83,bx,cx
MessSignal		EPOC	$08,$83,bx,cx
MessSignalCancel	EPOC	$09,$83,bx,cx

; ProcManager
ProcId			EPOC	$00,$88
ProcIdByName		EPOC	$01,$88,bx
ProcGetPriority		EPOC	$02,$88,bx
ProcSetPriority		EPOC	$03,$88,bx,al
ProcCreate		EPOC	$04,$88,bx
ProcCreateTask		EPOC	$05,$88,bx,cl,di,si
ProcResume		EPOC	$06,$88,bx
ProcSuspend		EPOC	$07,$88,bx
ProcKill		EPOC	$08,$88,al,bx
ProcPanicById		EPOC	$09,$88,al,bx
ProcNameById		EPOC	$0A,$88,bx,di
ProcFind		EPOC	$0B,$88,bx,di,si
ProcRename		EPOC	$0C,$88,bx,di
ProcTerminate		EPOC	$0D,$88,al,bx
ProcOnTerminate		EPOC	$0E,$88,bx
ProcWatchAllExits	EPOC	$0F,$88,bx
ProcGetOwner		EPOC	$10,$88,bx
ProcPanic		EPOC	-1,$90,al
ProcCopyFromById	EPOC	-1,$91,bx,cx,di
ProcCopyToById		EPOC	-1,$92,bx,cx,di
ProcIndStringCopyFromById EPOC	-1,$DC,bx,cx,di,si

