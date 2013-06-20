;
; !File!
;   buffers.inc
;
; !Desc!
;   Epoc Services for Psion Series 3/3a
;
; !Authors!
;   Krister Wombell
;
; !Date!
;   23:09-25/09/93
;

; TimManager
TimSleepForTenths	EPOC	$00,$89,cx,dx
TimSleepForTicks	EPOC	$01,$89,cx,dx
TimGetSystemTime	EPOC	$02,$89
TimSetSystemTime	EPOC	$03,$89,cx,dx
TimSystemTimeToDaySeconds EPOC	$04,$89,cx,dx,si
TimDaySecondsToSystemTime EPOC	$05,$89,si
TimDaySecondsToDate	EPOC	$06,$89,si,di
TimDateToDaySeconds	EPOC	$07,$89,si,di
TimDaysInMonth		EPOC	$08,$89,ch,cl
TimDayOfWeek		EPOC	$09,$89,cx,dx
TimNameOfDay		EPOC	$0A,$89,al,bx
TimNameOfMonth		EPOC	$0B,$89,al,bx
TimWaitAbsolute		EPOC	$0C,$89,cx,dx
TimWeekNumber		EPOC	$0D,$89,cx,dx

; ConvManager
ConvUnsignedIntToBuffer	EPOC	$00,$8A,bx,cx,di
ConvUnsignedLongIntToBuffer EPOC	$01,$8A,dx,bx,cx,di
ConvIntToBuffer		EPOC	$02,$8A,bx,di
ConvLongIntToBuffer	EPOC	$03,$8A,dx,bx,di
ConvArgumentsToBuffer	EPOC	$04,$8A,bx,di,si
ConvStringToUnsignedInt	EPOC	$05,$8A,cx,si
ConvStringToUnsignedLongInt EPOC	$06,$8A,cx,si
ConvStringToInt	EPOC	$07,$8A,si
ConvStringToLongInt	EPOC	$08,$8A,si
ConvFloatToBuffer	EPOC	$09,$8A,si,dx,di
ConvStringToFloat	EPOC	$0A,$8A,si,dx,di

LongIntCompare		EPOC	-1,$BB,ax,bx,cx,dx
LongIntMultiply		EPOC	-1,$BC,ax,bx,cx,dx
LongIntDivide		EPOC	-1,$BD,ax,bx,cx,dx
LongUnsignedIntCompare	EPOC	-1,$BE,ax,bx,cx,dx
LongUnsignedIntMultiply	EPOC	-1,$BF,ax,bx,cx,dx
LongUnsignedIntDivide	EPOC	-1,$C0,ax,bx,cx,dx
LongUnsignedIntRandom	EPOC	$04,$8B,bx

; FloatManager
FloatAdd		EPOC	-1,$C1,di,si
FloatSubtract		EPOC	-1,$C2,di,si
FloatMultiply		EPOC	-1,$C3,di,si
FloatDivide		EPOC	-1,$C4,di,si
FloatCompare		EPOC	-1,$C5,di,si
FloatNegate		EPOC	-1,$C6,di
FloatToInt		EPOC	-1,$C7,si
FloatToUnsignedInt	EPOC	-1,$C8,si
FloatToLong		EPOC	-1,$C9,si
FloatToUnsignedLong	EPOC	-1,$CA,si
IntToFloat		EPOC	-1,$CB,ax,di
UnsignedIntToFloat	EPOC	-1,$CC,ax,di
LongToFloat		EPOC	-1,$CD,ax,bx,di
UnsignedLongToFloat	EPOC	-1,$CE,di,ax,bx

FloatSin		EPOC	$00,$8C,di,si
FloatCos		EPOC	$01,$8C,di,si
FloatTan		EPOC	$02,$8C,di,si
FloatASin		EPOC	$03,$8C,di,si
FloatACos		EPOC	$04,$8C,di,si
FloatATan		EPOC	$05,$8C,di,si
FloatExp		EPOC	$06,$8C,di,si
FloatLn			EPOC	$07,$8C,di,si
FloatLog		EPOC	$08,$8C,di,si
FloatSqrt		EPOC	$09,$8C,di,si
FloatPow		EPOC	$0A,$8C,di,si,dx
FloatRand		EPOC	$0B,$8C,di,si
FloatMod		EPOC	$0C,$8C,di,si,dx
FloatInt		EPOC	$0D,$8C,di,si

; Buffer/String Manager
CharIsDigit		EPOC	-1,$93,al
CharIsHexDigit		EPOC	-1,$94,al
CharIsPrintable		EPOC	-1,$95,al
CharIsAlphabetic	EPOC	-1,$96,al
CharIsAlphaNumeric	EPOC	-1,$97,al
CharIsUpperCase		EPOC	-1,$98,al
CharIsLowerCase		EPOC	-1,$99,al
CharIsSpace		EPOC	-1,$9A,al
CharIsPunctuation	EPOC	-1,$9B,al
CharIsGraphic		EPOC	-1,$9C,al
CharIsControl		EPOC	-1,$9D,al
CharToUpperChar		EPOC	-1,$9E,al,ah
CharToLowerChar		EPOC	-1,$9F,al,ah
CharToFoldedChar	EPOC	-1,$A0,al,ah

BufferCopy		EPOC	-1,$A1,si,di,cx
BufferSwap		EPOC	-1,$A2,si,di,cx
BufferCompare		EPOC	-1,$A3,si,di,cx,bx
BufferCompareFolded	EPOC	-1,$A4,si,di,cx,bx
BufferMatch		EPOC	-1,$A5,si,cx,di,dx
BufferMatchFolded	EPOC	-1,$A6,si,cx,di,dx
BufferLocate		EPOC	-1,$A7,ah,si,cx
BufferLocateFolded	EPOC	-1,$A8,ah,si,cx
BufferSubBuffer		EPOC	-1,$A9,si,di,cx,bx
BufferSubBufferFolded	EPOC	-1,$AA,si,di,cx,bx
BufferJustify		EPOC	-1,$AB,si,cx,di,bx,dl,dh

StringCopy		EPOC	-1,$AC,si,di
StringCopyFolded	EPOC	-1,$AD,si,di
StringConvertToFolded	EPOC	-1,$AE,si
StringCompare		EPOC	-1,$AF,si,di
StringCompareFolded	EPOC	-1,$B0,si,di
StringMatch		EPOC	-1,$B1,si,di
StringMatchFolded	EPOC	-1,$B2,si,di
StringLocate		EPOC	-1,$B3,ah,si
StringLocateFolded	EPOC	-1,$B4,ah,si
StringLocateInReverse	EPOC	-1,$B5,ah,si
StringLocateInReverseFolded EPOC	-1,$B6,ah,si
StringSubString		EPOC	-1,$B7,si,di
StringSubStringFolded	EPOC	-1,$B8,si,di
StringLength		EPOC	-1,$B9,di
StringValidateName	EPOC	-1,$BA,al,ah
StringCapitalise	EPOC	-1,$DB,si


