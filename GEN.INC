;
; !File!
;   gen.inc
;
; !Desc!
;   Epoc Services for Psion Series 3/3a
;
; !Authors!
;   Krister Wombell
;
; !Date!
;   00:01-26/09/93
;

; GenManager
GenVersion		EPOC	$00,$8B
GenLcdType		EPOC	$01,$8B
GenStartReason		EPOC	$02,$8B
GenParse		EPOC	$03,$8B,bx
GenGetCountryData	EPOC	$05,$8B,bx
GenGetErrorText		EPOC	$06,$8B,al,bx
GenGetOsData		EPOC	$07,$8B,di,si,cx
GenDeferredMode		EPOC	$08,$8B,al
GenNotify		EPOC	$09,$8B,bx,cx,dx,di,si
GenNotifyError		EPOC	$0A,$8B,al,bx,dx,di,si
GenNotifyHook		EPOC	$0B,$8B,bx
GenNotifyUnHook		EPOC	$0C,$8B
GenGetRamSizeInParas	EPOC	$0D,$8B
GenGetCommandLine	EPOC	$0E,$8B
GenGetSoundFlags	EPOC	$0F,$8B
GenSetSoundFlags	EPOC	$10,$8B,ax
GenSound		EPOC	$11,$8B,bx,cx
GenMarkActive		EPOC	$12,$8B
GenMarkNonActive	EPOC	$13,$8B
GenGetText		EPOC	$14,$8B,al,bx
GenGetNotifyState	EPOC	$15,$8B
GenSetNotifyState	EPOC	$16,$8B,al
GenGetAutoSwitchOffValue EPOC	$17,$8B,ax
GenSetAutoSwitchOffValue EPOC	$18,$8B
GenSetRevector		EPOC	$19,$8B,al,cx,bx
GenResetRevector	EPOC	$1A,$8B,al
GenGetLanguageCode	EPOC	$1B,$8B
GenGetSuffixes		EPOC	$1C,$8B,al,bx
GenGetAmPmText		EPOC	$1D,$8B,bx
GenSetCountryData	EPOC	$1E,$8B,bx
GenGetBatteryType	EPOC	$1F,$8B
GenSetBatteryType	EPOC	$20,$8B,al
GenEnvBufferGet		EPOC	$21,$8B,di,dl,si
GenEnvBufferSet		EPOC	$22,$8B,di,dl,si,cl
GenEnvBufferDelete	EPOC	$23,$8B,di,dl
GenEnvBufferFind	EPOC	$24,$8B,bx,di,dl,si
GenEnvStringGet		EPOC	$25,$8B,di,si
GenEnvStringSet		EPOC	$26,$8B,di,si
GenEnvStringDelete	EPOC	$27,$8B,di
GenEnvStringFind	EPOC	$28,$8B,bx,di,si,cx
GenCrc			EPOC	$29,$8B,cx,dx,si
GenRomVersion		EPOC	$2A,$8B
GenAlarmHook		EPOC	$2B,$8B,bx
GenAlarmUnHook		EPOC	$2C,$8B
GenAlarmId		EPOC	$2D,$8B
GenPasswordSet		EPOC	$2E,$8B
GenPasswordTest		EPOC	$2F,$8B
GenPasswordControl	EPOC	$30,$8B
GenPasswordQuery	EPOC	$31,$8B
GenTickle		EPOC	$32,$8B
GenSetConfig		EPOC	$33,$8B
GenMaskInit		EPOC	$34,$8B
GenMaskEncrypt		EPOC	$35,$8B
GenMaskDecrypt		EPOC	$36,$8B
GenSetOnEvents		EPOC	$37,$8B,al
GenDataSegment		EPOC	-1,$8F
Dummy			EPOC	-1,$D4
GenIntByNumber		EPOC	-1,$D5,al,si,di
HwComboOn		EPOC	$00,$8E
HwComboOff		EPOC	$01,$8E
HwPacksOn		EPOC	$02,$8E
HwPacksOff		EPOC	$03,$8E
HwSetA2Control1Bits	EPOC	$04,$8E,al
HwClearA2Control1Bits	EPOC	$05,$8E,al
HwReadA2Control1	EPOC	$06,$8E
HwWriteA2Control1	EPOC	$07,$8E,al
HwSetA2Control2Bits	EPOC	$08,$8E,al
HwClearA2Control2Bits	EPOC	$09,$8E,al
HwReadA2Control2	EPOC	$0A,$8E
HwWriteA2Control2	EPOC	$0B,$8E,al
HwSetA2Control3Bits	EPOC	$0C,$8E,al
HwClearA2Control3Bits	EPOC	$0D,$8E,al
HwReadA2Control3	EPOC	$0E,$8E
HwWriteA2Control3	EPOC	$0F,$8E,al
HwSelectChannel		EPOC	$10,$8E,al
HwGetSupplyStatus	EPOC	$11,$8E,bx
HwLcdContrastDelta	EPOC	$12,$8E,al
HwReadLcdContrast	EPOC	$13,$8E
HwSwitchOff		EPOC	$14,$8E,cx
HwNullFrame		EPOC	$15,$8E
HwExit			EPOC	$16,$8E
HwGetCombo		EPOC	$17,$8E
HwFreeCombo		EPOC	$18,$8E
HwGetChannel		EPOC	$19,$8E,al
HwFreeChannel		EPOC	$1A,$8E,al
HwGetPsuType		EPOC	$1B,$8E
HwSupplyWarnings	EPOC	$1C,$8E
HwForceSupplyReading	EPOC	$1D,$8E
HwGetBackLight		EPOC	$1E,$8E
HwSetBackLight		EPOC	$1F,$8E,bx
HwBackLight		EPOC	$20,$8E,al

