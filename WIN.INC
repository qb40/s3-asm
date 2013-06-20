;
; !File!
;   win.inc
;
; !Desc!
;   Epoc Services for Psion Series 3/3a
;
; !Authors!
;   Krister Wombell
;
; !Date!
;   22:32-25/09/93
;

; Wlib
gFreeTempGC		EPOC	$03,$8d
gCopyRect		EPOC	$1E,$8d,bx,cx,dx
gPeekBit		EPOC	$9f,$8d,bx,cx,dx,si
gFillpattern		EPOC	$21,$8d,bx,cx,dx
gCreateTempGC		EPOC	$22,$8d,bx,cx,dx
gCreateGC		EPOC	$a3,$8d,bx,cx,dx
gSetGC			EPOC	$24,$8d,bx,cx,dx
gDrawLine		EPOC	$27,$8d,bx,cx,dx,di
gPrintText		EPOC	$28,$8d,bx,cx,dx,di
gCopybit		EPOC	$29,$8d,bx,cx,dx,di
gPrintClipText		EPOC	$2c,$8d,bx,cx,dx,di,si
gPrintBoxText		EPOC	$2D,$8d,bx,si,ax,cx,dx,di
gOpenBit		EPOC	$ae,$8d,bx,cx,dx,si
gOpenFont		EPOC	$b0,$8d,bx
gDrawbox		EPOC	$31,$8d,bx
gCreateBit		EPOC	$b3,$8d,bx,cx,si
gSaveBit		EPOC	$b9,$8d,bx,cx
gClrRect		EPOC	$3A,$8d,bx,cx
gBorder			EPOC	$49,$8d,bx
gBorderRect		EPOC	$4A,$8d,bx,cx
gXprintText		EPOC	$4B,$8d,bx,cx,dx,di,si
gInvObloid		EPOC	$4C,$8d,bx
gSetOpenAddress		EPOC	$5F,$8d,bx,cx
gTextWidth		EPOC	$0b,$d6,dx,si,di,cx
gFontInfo		EPOC	$0c,$d6,dx,cx,di
gCheckBitmapID		EPOC	$0e,$d6,dx
gTextCount		EPOC	$11,$d6,dx,si,di,cx,ax
gGetWidthTable		EPOC	$12,$d6,dx,si,di
gPlayback		EPOC	$01,$d6,dx
gCloseMetafile		EPOC	$02,$d6,bx
gRecordToMetafile	EPOC	$03,$d6,di,cx,dx

wEndRedraw		EPOC	$00,$8d
wEraseTextCursor	EPOC	$01,$8d
wReleaseMouse		EPOC	$02,$8d
wCancel			EPOC	$04,$8d
wDisconnect		EPOC	$85,$8d
wDetachClient		EPOC	$06,$8d
wCleanup		EPOC	$07,$8d
wAttachToForegroundClient EPOC	$08,$8d
wUsermsg		EPOC	$09,$8d
wStartCompute		EPOC	$8a,$8d
wEndCompute		EPOC	$8b,$8d
wClientInfo		EPOC	$0c,$8d,bx
wCloseWindowTree	EPOC	$0D,$8d,bx
wInquireWindow		EPOC	$8e,$8d,bx,si
wCaptureMouse		EPOC	$0F,$8d,bx
wBeginRedrawWin		EPOC	$10,$8d,bx,cx
wFree			EPOC	$11,$8d,bx
wMakeInvisible		EPOC	$12,$8d,bx
wAttachtoClient		EPOC	$93,$8d,bx
wInitialiseWindowTree	EPOC	$14,$8d,bx
wInvalidateWin		EPOC	$15,$8d,bx
wValidateWin		EPOC	$16,$8d,bx
wMakeVisible		EPOC	$17,$8d,bx
wClientIconised		EPOC	$18,$8d,bx
wClientPosition		EPOC	$19,$8d,bx,cx
wInquireWindowOffset	EPOC	$9a,$8d,bx,cx,si
wWindowposition		EPOC	$1B,$8d,bx,cx
wScrollRect		EPOC	$1C,$8d,bx,cx,dx
wRubberBand		EPOC	$1D,$8d,bx,cx,dx
wDrawPolyLine		EPOC	$20,$8d,bx,cx,dx
wSetWindow		EPOC	$25,$8d,bx,cx,dx
wBeginRedrawWinGC	EPOC	$26,$8d,bx,cx,dx
wCreateWindow		EPOC	$aa,$8d,bx,cx,dx,di
wBeginRedrawGC		EPOC	$2B,$8d,bx,cx,dx,di
wOpenMouseIcon		EPOC	$af,$8d,bx,cx
wLoadDYL		EPOC	$b2,$8d,bx
wScrollWin		EPOC	$34,$8d,bx,cx
wDrawTextcursor		EPOC	$35,$8d,bx,cx
wInvalidateRect		EPOC	$36,$8d,bx,cx
wBeginRedraw		EPOC	$37,$8d,bx,cx
wValidateRect		EPOC	$38,$8d,bx,cx
wCallDYL		EPOC	$3B,$8d,bx,cx,dx,di
wCallDYLreply		EPOC	$bc,$8d,bx,cx,dx,di,si
wSetWinBitmap		EPOC	$bd,$8d,bx,cx,dx
wChangeWinBitmap	EPOC	$3E,$8d,bx,cx,dx
wEscapeon		EPOC	$bf,$8d
wEscapeoff		EPOC	$c1,$8d
wSaverect		EPOC	$c3,$8d,bx,cx,dx
wReAssignRootWindow	EPOC	$44,$8d,bx
wCaptureKey		EPOC	$c5,$8d,bx,cx,dx
wCancelCaptureKey	EPOC	$c6,$8d,bx,cx,dx
wSystemModal		EPOC	$47,$8d,bx
wCancelSystemModal	EPOC	$48,$8d,bx
wEnablePauseKey		EPOC	$4D,$8d
wDisablePauseKey	EPOC	$ce,$8d
wInformOn		EPOC	$51,$8d
wsEnable		EPOC	$4f,$8d
wsDisable		EPOC	$50,$8d
wsUpdate		EPOC	$52,$8d,bx
wsCreateClock		EPOC	$d3,$8d,bx,cx,dx,di,si
wsSetClock		EPOC	$54,$8d,bx,cx
wSetBusyMsg		EPOC	$d5,$8d,bx,cx
wsDisableTemp		EPOC	$56,$8d
wsEnableTemp		EPOC	$57,$8d
wSystem			EPOC	$d8,$8d,bx,cx
wGetProcessList		EPOC	$d9,$8d,si
wSendCommand		EPOC	$da,$8d,bx,cx,dx
wGetCommand		EPOC	$db,$8d,si
wTextCursor		EPOC	$5C,$8d,bx,cx
wAppKeyHandler		EPOC	$dd,$8d
wInfoMsg		EPOC	$de,$8d,bx
wDrawbutton		EPOC	$60,$8d,bx,cx,dx
wSetTaskKey		EPOC	$e1,$8d,bx,cx,dx
wSetBackTaskKey		EPOC	$e2,$8d,bx,cx,dx
wCancelTaskKey		EPOC	$e3,$8d,bx,cx,dx
wCancelBackTaskKey	EPOC	$e4,$8d,bx,cx,dx

wConnect		EPOC	$0,$d6,si,di,cx
wFlush			EPOC	$04,$d6
wCloseDown		EPOC	$05,$d6
wSelect			EPOC	$06,$d6,dx
wPanic			EPOC	$07,$d6,dx
wGetEvent		EPOC	$08,$d6,dx
wCheckPoint		EPOC	$0a,$d6

