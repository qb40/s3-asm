;
; !File!
;   io.inc
;
; !Desc!
;   Epoc Services for Psion Series 3/3a
;
; !Authors!
;   Krister Wombell
;
; !Date!
;   21:31-25/09/93
;

; LibManager
LibLoad			EPOC	$00,$84,bx,cl
LibUnLoad		EPOC	$01,$84,bx
LibLink			EPOC	$02,$84,bx
LibFind			EPOC	$03,$84,bx
LibHandle		EPOC	$04,$84,bx
LibCreate		EPOC	$05,$84,bx,cx
LibCreateByHandle	EPOC	$06,$84,bx,cx
LibDestroy		EPOC	$07,$84,bx
LibCopy			EPOC	$08,$84,bx,cx,di,si
LibOpen			EPOC	$09,$84,bx
LibLoadFile		EPOC	$0A,$84,bx,ch,cl
LibReClass		EPOC	$0B,$84,bx,cx,di
LibReClassByHandle	EPOC	$0C,$84,bx,cx,di
LibSend			EPOC	-1,$CF,bx,cl,dx,si,di
LibSendSuper		EPOC	-1,$D0,bx,cl,dx,si,di
LibEnter		EPOC	-1,$D2,ax,bx,cx,dx,si,di
LibLeave		EPOC	-1,$D3,ax
LibSendExit		EPOC	-1,$D7,ax

; DevManager
IoOpen			EPOC	$00,$85,bx,cx,dx
DevOpenPDD		EPOC	$01,$85,bx
DevGetPDDAddress	EPOC	$02,$85,bx
DevInstall		EPOC	$03,$85,bx,cx,dx
DevHold			EPOC	$04,$85,cl
DevResume		EPOC	$05,$85
DevLoadLDD		EPOC	$06,$85,bx
DevLoadPDD		EPOC	$07,$85,bx
DevDelete		EPOC	$08,$85,bx,dx
DevQueryUnits		EPOC	$09,$85,bx
DevFind			EPOC	$0A,$85,bx,dx,di,si
DevRemove		EPOC	$0B,$85,bx,dx
DevVector		EPOC	$0C,$85,cl,ch,di,bx,dx,si

; IOManager
IoAsynchronous		EPOC	$00,$86,al,bx,cx,dx,di
IoAsynchronousNoError	EPOC	$01,$86,al,bx,cx,dx,di
IoWithWait		EPOC	$02,$86,al,bx,cx,dx
IoRoot			EPOC	$03,$86,bx,si
IoSuper			EPOC	$04,$86,bx,si
IoWaitForSignal		EPOC	$05,$86
IoWaitForStatus		EPOC	$06,$86,di
IoYield			EPOC	$07,$86
IoSignal		EPOC	$08,$86
IoSignalByPid		EPOC	$09,$86,bx
IoSignalByPidNoReSched	EPOC	$0A,$86,bx
IoAddHandler		EPOC	$0B,$86,al,bx,es
IoRemoveHandler		EPOC	$0C,$86,bx
IoEnableHandler		EPOC	$0D,$86,bx,cl
IoRequestReset		EPOC	$0E,$86,bx
IoRequestResetCancel	EPOC	$0F,$86,bx,cx
IoClose			EPOC	$10,$86,bx
IoRead			EPOC	$11,$86,bx,cx,dx
IoWrite			EPOC	$12,$86,bx,cx,dx
IoSeek			EPOC	$13,$86,bx,cx,dx
IoKeyAndMouseWithWait	EPOC	$14,$86,bx
IoAddApplicationHandler	EPOC	$15,$86,bx,cx,dx
IoRemoveApplicationHandler EPOC	$16,$86,bx
IoEnableApplicationHandler EPOC	$17,$86,bx,cl
IoShiftStates		EPOC	$18,$86
IoWaitForSignalNoHandler EPOC	$19,$86
IoSignalKillAsynchronous EPOC	$1A,$86,bx,di
IoSignalKillCancel	EPOC	$1B,$86,bx
IoKeyAndMouseAsynchronous EPOC	$1C,$86,bx
IoNextHalfSecond	EPOC	$1D,$86
IoKeyAndMouseStatus	EPOC	-1,$DA
IoNextHalfSecondStatus	EPOC	-1,$DD

; FilManager
FilConnect		EPOC	$00,$87,al,dx
FilExecute		EPOC	$01,$87,al,dx,bx,cx,di
FilParse		EPOC	$02,$87,al,dx,bx,cx,di,si
FilPathGet		EPOC	$03,$87,al,dx,bx
FilPathSet		EPOC	$04,$87,al,dx,bx
FilPathTest		EPOC	$05,$87,al,dx,bx
FilDelete		EPOC	$06,$87,al,dx,bx
FilRename		EPOC	$07,$87,al,dx,bx,cx
FilStatusGet		EPOC	$08,$87,al,dx,bx,cx
FilStatusSet		EPOC	$09,$87,al,dx,bx,cx,di
FilStatusDevice		EPOC	$0A,$87,al,dx,bx,cx
FilStatusSystem		EPOC	$0B,$87,al,dx,bx,cx
FilMakeDirectory	EPOC	$0C,$87,al,dx,bx
FilOpenUnique		EPOC	$0D,$87,al,dx,bx,cx
FilSystemAttach		EPOC	$0E,$87,al,dx,bx
FilSystemDetach		EPOC	$0F,$87,al,dx,bx
FilPathGetById		EPOC	$10,$87,al,dx,bx,cx
FilChangeDirectory	EPOC	$11,$87,al,dx,bx,cx,di,si
FilSetInitialPath	EPOC	$12,$87,al,dx,bx
FilSetFileDate		EPOC	$13,$87,al,dx,bx
FilLocChanged		EPOC	$14,$87,bx

