;======================================================================
; Include File for the TI-83 Plus
; Last Updated 10/27/1999 
;
; Copyright (c) 1999 Texas Instruments: The Licensed Materials are
; copyrighted by TI. LICENSEE agrees that it will 
; not delete the copyright notice, trademarks or
; protective notices from any copy made by LICENSEE.
;
; Warranty: TI does not warrant that the Licensed Materials will
; be free from errors or will meet your specific requirements.
; The Licensed Materials are made available "AS IS" to LICENSEE.
;
; Limitations: TI MAKES NO WARRANTY OR CONDITION, EITHER EXPRESS
; OR IMPLIED, INCLUDING BUT NOT LIMITED TO ANY IMPLIED
; WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE,
; REGARDING THE LICENSED MATERIALS.  IN NO EVENT SHALL
; TI OR ITS SUPPLIERS BE LIABLE FOR ANY INDIRECT, INCIDENTAL
; OR CONSEQUENTIAL DAMAGES, LOSS OF PROFITS, LOSS OF USE OR DATA, 
; OR INTERRUPTION OF BUSINESS, WHETHER THE ALLEGED DAMAGES ARE
; LABELED IN TORT, CONTRACT OR INDEMNITY.
;
;

DEFC		Entry =			$9D95 - $02
; Syntax Enhancers

;======================================================================
;           System Variable Equates
;======================================================================
;       Entry Points : RclSysTok, StoSysTok
;
DEFC  XSCLt =		2
DEFC  YSCLt =		3
DEFC  XMINt =		$0A
DEFC  XMAXt =		$0B
DEFC  YMINt =		$0C
DEFC  YMAXt =		$0D
DEFC  TMINt =		$0E
DEFC  TMAXt =		$0F
DEFC  THETMINt =	$10
DEFC  THETMAXt =	$11
DEFC  TBLMINt =		$1A
DEFC  PLOTSTARTt =	$1B
DEFC  NMAXt =		$1D
DEFC  NMINt =		$1F
DEFC  TBLSTEPt =	$21
DEFC  TSTEPt =		$22
DEFC  THETSTEPt =	$23
DEFC  DELTAXt =		$26
DEFC  DELTAYt =		$27
DEFC  XFACTt =		$28
DEFC  YFACTt =		$29
DEFC  FINNt =		$2B
DEFC  FINIt =		$2C
DEFC  FINPVt =		$2D
DEFC  FINPMTt =		$2E
DEFC  FINFVt =		$2F
DEFC  FINPYt =		$30
DEFC  FINCYt =		$31
DEFC  PLOTSTEPt =	$34
DEFC  XRESt =		$36
;

;======================================================================
;           Run indicators
;======================================================================
;
DEFC	busyPause =	@10101010
DEFC	busyNormal =	@11110000
;

;======================================================================
;           Common subroutine RST numbers  
;======================================================================
;
DEFC  rOP1TOOP2 =	$08
DEFC  rFINDSYM =	$10
DEFC  rPUSHREALO1 =	$18
DEFC  rMOV9TOOP1 =	$20
DEFC  rFPADD =		$30
;

;SYMBOLIC_DEBUG_START
;======================================================================
;           Entry points  
;======================================================================
;
DEFC _HomeUp =		$4558
DEFC _AbsO1O2Cp =	$410E
DEFC _AbsO1PAbsO2 =	$405A
DEFC _ACos =		$40DE
DEFC _ACosH =		$40F0
DEFC _ACosRad =	$40D2
DEFC _AdrLEle =	$462D
DEFC _AdrMEle =	$4609
DEFC _AdrMRow =	$4606
DEFC _AllEq =		$4876
DEFC _AllocFPS =	$43A5
DEFC _AllocFPS1 =	$43A8
DEFC _Angle =		$4102
DEFC _AnsName =	$4B52
DEFC _ApdSetup =	$4C93
DEFC _AppGetCalc =	$4C78
DEFC _AppGetCbl =	$4C75
DEFC _Arc_Unarc =	$4FD8
DEFC _ASin =		$40E4
DEFC _ASinH =		$40ED
DEFC _ASinRad =	$40DB
DEFC _ATan =		$40E1
DEFC _ATan2 =		$40E7
DEFC _ATan2Rad =	$40D8
DEFC _ATanH =		$40EA
DEFC _ATanRad =	$40D5

DEFC _BinOPExec =	$4663
DEFC _Bit_VertSplit =	$4FA8
DEFC _BufClr =		$5074
DEFC _BufCpy =		$5071

DEFC _CAbs =		$4E97
DEFC _CAdd =		$4E88
DEFC _CanAlphIns =	$4C69
DEFC _CDiv =		$4E94
DEFC _CDivByReal =	$4EBB
DEFC _CEtoX =		$4EA9
DEFC _CFrac =		$4EC1
DEFC _CheckSplitFlag =	$49F0
DEFC _ChkFindSym =	$42F1
DEFC _CIntgr =		$4EC4
DEFC _CircCmd =	$47D4
DEFC _CkInt =		$4234
DEFC _CkOdd =		$4237
DEFC _CkOP1C0 =	$4225
DEFC _CkOP1Cplx =	$40FC
DEFC _CkOP1FP0 =	$4228
DEFC _CkOP1Pos =	$4258
DEFC _CkOP1Real =	$40FF
DEFC _CkOP2FP0 =	$422B
DEFC _CkOP2Pos =	$4255
DEFC _CkOP2Real =	$42DF
DEFC _CkPosInt =	$4231
DEFC _CkValidNum =	$4270
DEFC _CleanAll =	$4A50
DEFC _ClearRect =	$4D5C
DEFC _ClearRow =	$4CED
DEFC _CLine =		$4798
DEFC _CLineS =		$479B
DEFC _CLN =		$4EA0
DEFC _CLog =		$4EA3
DEFC _CloseEditBufNoR =	$476E
DEFC _CloseProg =	$4A35
DEFC _ClrGraphRef =	$4A38
DEFC _ClrLCD =		$4543
DEFC _ClrLCDFull =	$4540
DEFC _ClrLp =		$41D1
DEFC _ClrOP1S =	$425E
DEFC _ClrOP2S =	$425B
DEFC _ClrScrn =	$4549
DEFC _ClrScrnFull =	$4546
DEFC _ClrTxtShd =	$454C
DEFC _CMltByReal =	$4EB8
DEFC _CmpSyms =	$4A4A
DEFC _CMult =		$4E8E
DEFC _Conj =		$4EB5
DEFC _ConvDim =	$4B43
DEFC _ConvDim00 =	$4B46
DEFC _ConvLcToLr =	$4A23
DEFC _ConvLrToLc =	$4A56
DEFC _ConvOP1 =	$4AEF
DEFC _COP1Set0 =	$4105
DEFC _Cos =		$40C0
DEFC _CosH =		$40CC
DEFC _CpHLDE =		$400C
DEFC _CPoint =		$4DC8
DEFC _CPointS =	$47F5
DEFC _CpOP1OP2 =	$4111
DEFC _CpOP4OP3 =	$4108
DEFC _CpyO1ToFPS1 =	$445C
DEFC _CpyO1ToFPS2 =	$446B
DEFC _CpyO1ToFPS3 =	$4477
DEFC _CpyO1ToFPS4 =	$4489
DEFC _CpyO1ToFPS5 =	$4483
DEFC _CpyO1ToFPS6 =	$447D
DEFC _CpyO1ToFPS7 =	$4480
DEFC _CpyO1ToFPST =	$444A
DEFC _CpyO2ToFPS1 =	$4459
DEFC _CpyO2ToFPS2 =	$4462
DEFC _CpyO2ToFPS3 =	$4474
DEFC _CpyO2ToFPS4 =	$4486
DEFC _CpyO2ToFPST =	$4444
DEFC _CpyO3ToFPS1 =	$4453
DEFC _CpyO3ToFPS2 =	$4465
DEFC _CpyO3ToFPST =	$4441
DEFC _CpyO5ToFPS1 =	$4456
DEFC _CpyO5ToFPS3 =	$4471
DEFC _CpyO6ToFPS2 =	$4468
DEFC _CpyO6ToFPST =	$4447
DEFC _CpyStack =	$4429
DEFC _CpyTo1FPS1 =	$4432
DEFC _CpyTo1FPS10 =	$43F3
DEFC _CpyTo1FPS11 =	$43D8
DEFC _CpyTo1FPS2 =	$443B
DEFC _CpyTo1FPS3 =	$4408
DEFC _CpyTo1FPS4 =	$440E
DEFC _CpyTo1FPS5 =	$43DE
DEFC _CpyTo1FPS6 =	$43E4
DEFC _CpyTo1FPS7 =	$43EA
DEFC _CpyTo1FPS8 =	$43ED
DEFC _CpyTo1FPS9 =	$43F6
DEFC _CpyTo1FPST =	$4423
DEFC _CpyTo2FPS1 =	$442F
DEFC _CpyTo2FPS2 =	$4438
DEFC _CpyTo2FPS3 =	$4402
DEFC _CpyTo2FPS4 =	$43F9
DEFC _CpyTo2FPS5 =	$43DB
DEFC _CpyTo2FPS6 =	$43E1
DEFC _CpyTo2FPS7 =	$43E7
DEFC _CpyTo2FPS8 =	$43F0
DEFC _CpyTo2FPST =	$4420
DEFC _CpyTo3FPS1 =	$442C
DEFC _CpyTo3FPS2 =	$4411
DEFC _CpyTo3FPST =	$441D
DEFC _CpyTo4FPST =	$441A
DEFC _CpyTo5FPST =	$4414
DEFC _CpyTo6FPS2 =	$43FF
DEFC _CpyTo6FPS3 =	$43FC
DEFC _CpyTo6FPST =	$4417
DEFC _CpyToFPS1 =	$445F
DEFC _CpyToFPS2 =	$446E
DEFC _CpyToFPS3 =	$447A
DEFC _CpyToFPST =	$444D
DEFC _CpyToStack =	$4450
DEFC _Create0Equ =	$432A
DEFC _CreateAppVar =	$4E6A
DEFC _CreateCList =	$431B
DEFC _CreateCplx =	$430C
DEFC _CreateEqu =	$4330
DEFC _CreatePair =	$4B0D
DEFC _CreatePict =	$4333
DEFC _CreateProg =	$4339
DEFC _CreateProtProg =	$4E6D
DEFC NewProg =		$4E6D
DEFC _CreateReal =	$430F
DEFC _CreateRList =	$4315
DEFC _CreateRMat =	$4321
DEFC _CreateStrng =	$4327
DEFC _CRecip =		$4E91
DEFC _CSqRoot =	$4E9D
DEFC _CSquare =	$4E8B
DEFC _CSub =		$4E85
DEFC _CTenX =		$4EA6
DEFC _CTrunc =		$4EBE
DEFC _Cube =		$407B
DEFC _CursorOff =	$45BE
DEFC _CursorOn =	$45C4
DEFC _CXrootY =	$4EAC
DEFC _CYtoX =		$4EB2

DEFC _DarkLine =	$47DD
DEFC _DarkPnt =	$47F2
DEFC _DataSize =	$436C
DEFC _DataSizeA =	$4369
DEFC _DeallocFPS =	$439F
DEFC _DeallocFPS1 =	$43A2
DEFC _DecO1Exp =	$4267
DEFC _DelListEl =	$4A2F
DEFC DeleteMem =	$4357
DEFC _DelRes =		$4A20
DEFC _DelVar =		$4351
DEFC _DelVarArc =	$4FC6
DEFC _DelVarNoArc =	$4FC9
DEFC _DisableApd =	$4C84
DEFC _Disp =		$4F45
DEFC _DispDone =	$45B5
DEFC _DispEOL =	$45A6
DEFC _DispHL =		$4507
DEFC _DisplayImage =	$4D9B
DEFC _DispOP1A =	$4BF7
DEFC _DivHLBy10 =	$400F
DEFC _DivHLByA =	$4012
DEFC _DrawCirc2 =	$4C66
DEFC _DrawCmd =	$48C1
DEFC _DrawRectBorder =	$4D7D
DEFC _DrawRectBorderClear =	$4D8C
DEFC _DToR =		$4075

DEFC _EditProg =	$4A32
DEFC _EnableApd =	$4C87
DEFC _EnoughMem =	$42FD
DEFC _EOP1NotReal =	$4279
DEFC _Equ_or_NewEqu =	$42C4
DEFC _EraseEOL =	$4552
DEFC _EraseRectBorder =	$4D86
DEFC _ErrArgument =	$44AD
DEFC _ErrBadGuess =	$44CB
DEFC _ErrBreak =	$44BF
DEFC _ErrD_OP1_0 =	$42D3
DEFC _ErrD_OP1_LE_0 =	$42D0
DEFC _ErrD_OP1Not_R =	$42CA
DEFC _ErrD_OP1NotPos =	$42C7
DEFC _ErrD_OP1NotPosInt =	$42CD


DEFC _ErrDataType =	$44AA
DEFC _ErrDimension =	$44B3
DEFC _ErrDimMismatch =	$44B0
DEFC _ErrDivBy0 =	$4498
DEFC _ErrDomain =	$449E
DEFC _ErrIncrement =	$44A1
DEFC _ErrInvalid =	$44BC
DEFC _ErrIterations =	$44C8
DEFC _ErrLinkXmit =	$44D4
DEFC _ErrMemory =	$44B9
DEFC _ErrNon_Real =	$44A4
DEFC _ErrNonReal =	$4A8C
DEFC _ErrNotEnoughMem =	$448C
DEFC _ErrOverflow =	$4495
DEFC _ErrSignChange =	$44C5
DEFC _ErrSingularMat =	$449B
DEFC _ErrStat =	$44C2
DEFC _ErrStatPlot =	$44D1
DEFC _ErrSyntax =	$44A7
DEFC _ErrTolTooSmall =	$44CE
DEFC _ErrUndefined =	$44B6
DEFC _EToX =		$40B4
DEFC _Exch9 =		$43D5
DEFC _ExLp =		$4222
DEFC _ExpToHex =	$424F

DEFC _Factorial =	$4B85
DEFC _FillRect =	$4D62
DEFC _FillRectPattern =	$4D89
DEFC _Find_Parse_Formula =	$4AF2
DEFC _FindAlphaDn =	$4A47
DEFC _FindAlphaUp =	$4A44
DEFC _FindApp =		$4C4E
DEFC _FindAppDn =		$4C4B
DEFC _FindAppNumPages =	$509B
DEFC _FindAppUp =		$4C48
DEFC _FindSym =	$42F4
DEFC _FiveExec =	$467E
DEFC _FixTempCnt =	$4A3B
DEFC _FlashToRam =	$5017
DEFC _ForceFullScreen =	$508F
DEFC _FormBase =	$50AA
DEFC _FormDCplx =	$4996
DEFC _FormEReal =	$4990
DEFC _FormReal =	$4999
DEFC _FourExec =	$467B
DEFC _FPAdd =		$4072
DEFC _FPDiv =		$4099
DEFC _FPMult =		$4084
DEFC _FPRecip =	$4096
DEFC _FPSquare =	$4081
DEFC _FPSub =		$406F
DEFC _Frac =		$4093

DEFC _GetBaseVer =	$4C6F
DEFC _GetCSC =		$4018
DEFC _GetKey =		$4972
DEFC _GetLToOP1 =	$4636
DEFC _GetMToOP1 =	$4615
DEFC _GetTokLen =	$4591
DEFC _GrBufClr =	$4BD0
DEFC ClearPlots =	_GrBufClr
DEFC _GrBufCpy =	$486A
DEFC _GrphCirc =	$47D7

DEFC _HLTimes9 =	$40F9
DEFC _HorizCmd =	$48A6
DEFC _HTimesL =	$4276

DEFC _IBounds =	$4C60
DEFC _IBoundsFull =	$4D98
DEFC _ILine =		$47E0
DEFC _IncLstSize =	$4A29
DEFC _InsertList =	$4A2C
DEFC InsertMem =	$42F7
DEFC _Int =		$40A5
DEFC _Intgr =		$405D
DEFC _InvCmd =		$48C7
DEFC _InvertRect =	$4D5F
DEFC _InvOP1S =	$408D
DEFC _InvOP1SC =	$408A
DEFC _InvOP2S =	$4090
DEFC _InvSub =		$4063
DEFC _IOffset =	$4C63
DEFC _IPoint =		$47E3

DEFC _JError =		$44D7
DEFC _JErrorNo =	$4000
DEFC _JForceCmdNoChar =	$4027
DEFC _JForceGraphKey =	$5005
DEFC _JForceGraphNoKey =	$5002

DEFC _KeyToString =	$45CA

DEFC _LineCmd =	$48AC
DEFC _LnX =		$40AB
DEFC _Load_SFont =	$4783
DEFC _LoadCIndPaged =	$501D
DEFC _LoadDEIndPaged =	$501A
DEFC _LoadPattern =	$4CB1
DEFC _LogX =		$40AE

DEFC _Max =		$4057
DEFC	MemFree =		$42E5
DEFC _MemClear =	$4C30
DEFC _MemSet =		$4C33
DEFC _Min =		$4054
DEFC _Minus1 =		$406C
DEFC _Mov10B =		$415C
DEFC _Mov18B =		$47DA
DEFC _Mov7B =		$4168
DEFC _Mov8B =		$4165
DEFC _Mov9B =		$415F
DEFC _Mov9OP1OP2 =	$417D
DEFC _Mov9OP2Cp =	$410B
DEFC _Mov9ToOP1 =	$417A
DEFC _Mov9ToOP2 =	$4180
DEFC _MovFrOP1 =	$4183

DEFC _OneVar =		$4BA3
DEFC _OP1ExOP2 =	$421F
DEFC _OP1ExOP3 =	$4219
DEFC _OP1ExOP4 =	$421C
DEFC _OP1ExOP5 =	$420D
DEFC _OP1ExOP6 =	$4210
DEFC _OP1ExpToDec =	$4252
DEFC _OP1Set0 =	$41BF
DEFC _OP1Set1 =	$419B
DEFC _OP1Set2 =	$41A7
DEFC _OP1Set3 =	$41A1
DEFC _OP1Set4 =	$419E
DEFC _OP1ToOP2 =	$412F
DEFC _OP1ToOP3 =	$4123
DEFC _OP1ToOP4 =	$4117
DEFC _OP1ToOP5 =	$4153
DEFC _OP1ToOP6 =	$4150
DEFC _OP2ExOP4 =	$4213
DEFC _OP2ExOP5 =	$4216
DEFC _OP2ExOP6 =	$4207
DEFC _OP2Set0 =	$41BC
DEFC _OP2Set1 =	$41AD
DEFC _OP2Set2 =	$41AA
DEFC _OP2Set3 =	$4198
DEFC _OP2Set4 =	$4195
DEFC _OP2Set5 =	$418F
DEFC _OP2Set60 =	$4AB0
DEFC _OP2Set8 =	$418C
DEFC _OP2SetA =	$4192
DEFC _OP2ToOP1 =	$4156
DEFC _OP2ToOP3 =	$416E
DEFC _OP2ToOP4 =	$411A
DEFC _OP2ToOP5 =	$414A
DEFC _OP2ToOP6 =	$414D
DEFC _OP3Set0 =	$41B9
DEFC _OP3Set1 =	$4189
DEFC _OP3Set2 =	$41A4
DEFC _OP3ToOP1 =	$413E
DEFC _OP3ToOP2 =	$4120
DEFC _OP3ToOP4 =	$4114
DEFC _OP3ToOP5 =	$4147
DEFC _OP4Set0 =	$41B6
DEFC _OP4Set1 =	$4186
DEFC _OP4ToOP1 =	$4138
DEFC _OP4ToOP2 =	$411D
DEFC _OP4ToOP3 =	$4171
DEFC _OP4ToOP5 =	$4144
DEFC _OP4ToOP6 =	$4177
DEFC _OP5ExOP6 =	$420A
DEFC _OP5Set0 =	$41B3
DEFC _OP5ToOP1 =	$413B
DEFC _OP5ToOP2 =	$4126
DEFC _OP5ToOP3 =	$4174
DEFC _OP5ToOP4 =	$412C
DEFC _OP5ToOP6 =	$4129
DEFC _OP6ToOP1 =	$4135
DEFC _OP6ToOP2 =	$4132
DEFC _OP6ToOP5 =	$4141
DEFC _OutputExpr =	$4BB2

DEFC _PagedGet =	$5023
DEFC _ParseInp =	$4A9B
DEFC _PDspGrph =	$48A3
DEFC _PixelTest =	$48B5
DEFC _Plus1 =		$4069
DEFC _PointCmd =	$48B2
DEFC _PointOn =	$4C39
DEFC _PopOP1 =		$437E
DEFC _PopOP3 =		$437B
DEFC _PopOP5 =		$4378
DEFC _PopReal =	$4393
DEFC _PopRealO1 =	$4390
DEFC _PopRealO2 =	$438D
DEFC _PopRealO3 =	$438A
DEFC _PopRealO4 =	$4387
DEFC _PopRealO5 =	$4384
DEFC _PopRealO6 =	$4381
DEFC _PosNo0Int =	$422E
DEFC _PtoR =		$40F3
DEFC _PushOP1 =	$43C9
DEFC _PushOP3 =	$43C3
DEFC _PushOP5 =	$43C0
DEFC _PushReal =	$43BD
DEFC _PushRealO1 =	$43BA
DEFC _PushRealO2 =	$43B7
DEFC _PushRealO3 =	$43B4
DEFC _PushRealO4 =	$43B1
DEFC _PushRealO5 =	$43AE
DEFC _PushRealO6 =	$43AB
DEFC _PutC =		$4504
DEFC _PutMap =		$4501
DEFC _PutPS =		$4510
DEFC _PutS =		$450A
DEFC _PutTokString =	$4960
DEFC _PutToL =		$4645
DEFC _PutToMat =	$461E

DEFC _RandInit =	$4B7F
DEFC _Random =		$4B79
DEFC _Rcl_StatVar =	$42DC
DEFC _RclAns =		$4AD7
DEFC _RclGDB2 =	$47D1
DEFC _RclN =		$4ADD
DEFC _RclSysTok =	$4AE6
DEFC _RclVarSym =	$4AE3
DEFC _RclX =		$4AE0
DEFC _RclY =		$4ADA
DEFC _Rec1stByte =	$4EFA
DEFC _Rec1stByteNC =	$4EFD
DEFC _RecAByteIO =	$4F03
DEFC _RedimMat =	$4A26
DEFC _Regraph =	$488E
DEFC _ReloadAppEntryVecs =	$4C36
DEFC _RestoreDisp =	$4870
DEFC _RName =		$427F
DEFC _RndGuard =	$409F
DEFC _RnFx =		$40A2
DEFC _Round =		$40A8
DEFC _RToD =		$4078
DEFC _RToP =		$40F6
DEFC _RunIndicOff =	$4570
DEFC _RunIndicOn =	$456D

DEFC _SaveDisp =	$4C7B
DEFC _SendAByte =	$4EE5
DEFC _SetAllPlots =	$4FCC
DEFC _SetFuncM =	$4840
DEFC _SetNorm_Vals =	$49FC
DEFC _SetParM =	$4849
DEFC _SetPolM =	$4846
DEFC _SetSeqM =	$4843
DEFC _SetTblGraphDraw =	$4C00
DEFC _SetupPagedPtr =	$5020
DEFC _SetXXOP1 =	$478C
DEFC _SetXXOP2 =	$478F
DEFC _SetXXXXOP2 =	$4792
DEFC _SFont_Len =	$4786
DEFC _Sin =		$40BD
DEFC _SinCosRad =	$40BA
DEFC _SinH =		$40CF
DEFC _SinHCosH =	$40C6
DEFC _SqRoot =		$409C
DEFC _SrchVLstDn =	$4F12
DEFC _SrchVLstUp =	$4F0F
DEFC _SStringLength =	$4CB4
DEFC _StMatEl =	$4AE9
DEFC _StoAns =		$4ABF
DEFC _StoGDB2 =	$47CE
DEFC _StoN =		$4ACB
DEFC _StoOther =	$4AD4
DEFC _StoR =		$4AC5
DEFC _StoRand =	$4B7C
DEFC _StoSysTok =	$4ABC
DEFC _StoT =		$4ACE
DEFC _StoTheta =	$4AC2
DEFC _StoX =		$4AD1
DEFC _StoY =		$4AC8
DEFC _StrCopy =	$44E3
DEFC _StrLength =	$4C3F   

DEFC _Tan =		$40C3
DEFC _TanH =		$40C9
DEFC _TanLnF =		$48BB
DEFC _TenX =		$40B7
DEFC _ThetaName =	$427C
DEFC _ThreeExec =	$4675
DEFC _Times2 =		$4066
DEFC _TimesPt5 =	$407E
DEFC _TName =		$428E
DEFC _ToFrac =		$4657
DEFC _Trunc =		$4060

DEFC _UCLineS =	$4795
DEFC _UnLineCmd =	$48AF
DEFC _UnOPExec =	$4672

DEFC _VertCmd =	$48A9
DEFC _VPutMap =	$455E
DEFC _VPutS =		$4561
DEFC _VPutSN =		$4564
DEFC _VtoWHLDE =	$47FB


DEFC _XftoI =		$4804
DEFC _Xitof =		$47FE
DEFC _XName =		$4288
DEFC _XRootY =		$479E

DEFC _YftoI =		$4801
DEFC _YName =		$428B
DEFC _YToX =		$47A1

DEFC _Zero16D =	$41B0
DEFC _ZeroOP =		$41CE
DEFC _ZeroOP1 =	$41C5
DEFC _ZeroOP2 =	$41C8
DEFC _ZeroOP3 =	$41CB
DEFC _ZmDecml =	$484F
DEFC _ZmFit =		$485B
DEFC _ZmInt =		$484C
DEFC _ZmPrev =		$4852
DEFC _ZmSquare =	$485E
DEFC _ZmStats =	$47A4
DEFC _ZmTrig =		$4861
DEFC _ZmUsr =		$4855
DEFC _ZooDefault =	$4867
;
;======================================================================
;           System-defined RAM Variable Address Equates
;======================================================================
;

DEFC  ramStart =             $8000
DEFC  appData =              $8000
DEFC  ramCode =              $8100
DEFC  ramCodeEnd =           $822F
DEFC  baseAppBrTab =         $8230
DEFC  bootTemp =             $8251
DEFC  appSearchPage =        $82A3
DEFC  tempSwapArea =         $82A5
DEFC  appID =                $838D
DEFC  ramReturnData =        $83ED
DEFC  arcInfo =              $83EE
DEFC  savedArcInfo =         $8406
DEFC  appInfo =              $8432
DEFC  appBank_jump =         $843C
DEFC  appPage =              $843E
DEFC  kbdScanCode =          $843F
DEFC  kbdKey =               $8444
DEFC  kbdGetKy =             $8445
DEFC  keyExtend =            $8446
DEFC  contrast =             $8447
DEFC  apdSubTimer =          $8448
DEFC  apdTimer =             $8449
DEFC  curTime =              $844A
DEFC  curRow =               $844B
DEFC  curCol =               $844C
DEFC  curOffset =            $844D
DEFC  curUnder =             $844E
DEFC  curY =                 $844F
DEFC  curType =              $8450
DEFC  curXRow =              $8451
DEFC  prevDData =            $8452
DEFC  lFont_record =         $845A
DEFC  sFont_record =         $8462
DEFC  tokVarPtr =            $846A
DEFC  tokLen =               $846C
DEFC  indicMem =             $846E
DEFC  indicCounter =         $8476
DEFC  indicBusy =            $8477
DEFC  OP1 =                  $8478
DEFC  OP1M =                 $847A
DEFC  OP2 =                  $8483
DEFC  OP2M =                 $8485
DEFC  OP2EXT =               $848C
DEFC  OP3 =                  $848E
DEFC  OP3M =                 $8490
DEFC  OP4 =                  $8499
DEFC  OP4M =                 $849B
DEFC  OP5 =                  $84A4
DEFC  OP5M =                 $84A6
DEFC  OP6 =                  $84AF
DEFC  OP6M =                 $84B1
DEFC  OP6EXT =               $84B8
DEFC  progToEdit =           $84BF
DEFC  nameBuff =             $84C7
DEFC  equ_edit_save =        $84D2
DEFC  iMathPtr1 =            $84D3
DEFC  iMathPtr2 =            $84D5
DEFC  iMathPtr3 =            $84D7
DEFC  iMathPtr4 =            $84D9
DEFC  iMathPtr5 =            $84DB
DEFC  chkDelPtr1 =           $84DD
DEFC  chkDelPtr2 =           $84DF
DEFC  insDelPtr =            $84E1
DEFC  upDownPtr =            $84E3
DEFC  fOutDat =              $84E5
DEFC  asm_data_ptr1 =        $84EB
DEFC  asm_data_ptr2 =        $84ED
DEFC  asm_sym_ptr1 =         $84EF
DEFC  asm_sym_ptr2 =         $84F1
DEFC  asm_ram =              $84F3
DEFC  asm_ind_call =         $8507
DEFC  textShadow =           $8508
DEFC  textShadCur =          $8588
DEFC  textShadTop =          $858A
DEFC  textShadAlph =         $858B
DEFC  textShadIns =          $858C
DEFC  cxMain =               $858D
DEFC  cxPPutAway =           $858F
DEFC  cxPutAway =            $8591
DEFC  cxRedisp =             $8593
DEFC  cxErrorEP =            $8595
DEFC  cxSizeWind =           $8597
DEFC  cxPage =               $8599
DEFC  cxCurApp =             $859A
DEFC  cxPrev =               $859B
DEFC  monQH =                $85AA
DEFC  monQT =                $85AB
DEFC  monQueue =             $85AC
DEFC  onSP =                 $85BC
DEFC  promptRow =            $85C0
DEFC  promptCol =            $85C1
DEFC  promptIns =            $85C2
DEFC  promptShift =          $85C3
DEFC  promptRet =            $85C4
DEFC  promptValid =          $85C6
DEFC  promptTop =            $85C8
DEFC  promptCursor =         $85CA
DEFC  promptTail =           $85CC
DEFC  promptBtm =            $85CE
DEFC  varType =              $85D0
DEFC  varCurrent =           $85D1
DEFC  varClass =             $85D9
DEFC  menuActive =           $85DC
DEFC  menuAppDepth =         $85DD
DEFC  MenuCurrent =          $85DE
DEFC  ProgCurrent =          $85E8
DEFC  userMenuSA =           $85FE
DEFC  ioPrompt =             $865F
DEFC  dImageWidth =          $8660
DEFC  ioFlag =               $8670
DEFC  sndRecState =          $8672
DEFC  ioErrState =           $8673
DEFC  header =               $8674
DEFC  ioData =               $867D
DEFC  ioNewData =            $8689
DEFC  bakHeader =            $868B
DEFC  penCol =               $86D7
DEFC  penRow =               $86D8
DEFC  rclQueue =             $86D9
DEFC  rclQueueEnd =          $86DB
DEFC  errNo =                $86DD
DEFC  errSP =                $86DE
DEFC  errOffset =            $86E0
DEFC  saveScreen =           $86EC
DEFC  bstCounter =           $89EE
DEFC  flags =                $89F0
DEFC  statVars =             $8A3A
DEFC  anovaf_vars =          $8C17
DEFC  infVars =              $8C4D
DEFC  curGStyle =            $8D17
DEFC  curGY =                $8D18
DEFC  curGX =                $8D19
DEFC  curGY2 =               $8D1A
DEFC  curGX2 =               $8D1B
DEFC  freeSaveY =            $8D1C
DEFC  freeSaveX =            $8D1D
DEFC  XOffset =              $8DA1
DEFC  YOffset =              $8DA2
DEFC  lcdTallP =             $8DA3
DEFC  pixWideP =             $8DA4
DEFC  pixWide_m_1 =          $8DA5
DEFC  pixWide_m_2 =          $8DA6
DEFC  lastEntryPTR =         $8DA7
DEFC  lastEntryStk =         $8DA9
DEFC  numLastEntries =       $8E29
DEFC  currLastEntry =        $8E2A
DEFC  curInc =               $8E67
DEFC  uXmin =                $8E7E
DEFC  uXmax =                $8E87
DEFC  uXscl =                $8E90
DEFC  uYmin =                $8E99
DEFC  uYmax =                $8EA2
DEFC  uYscl =                $8EAB
DEFC  uThetMin =             $8EB4
DEFC  uThetMax =             $8EBD
DEFC  uThetStep =            $8EC6
DEFC  uTmin =                $8ECF
DEFC  uTmax =                $8ED8
DEFC  uTStep =               $8EE1
DEFC  uPlotStart =           $8EEA
DEFC  unMax =                $8EF3
DEFC  uu0 =                  $8EFC
DEFC  uv0 =                  $8F05
DEFC  unMin =                $8F0E
DEFC  uu02 =                 $8F17
DEFC  uv02 =                 $8F20
DEFC  uw0 =                  $8F29
DEFC  uPlotStep =            $8F32
DEFC  uXres =                $8F3B
DEFC  uw02 =                 $8F44
DEFC  Xmin =                 $8F50
DEFC  Xmax =                 $8F59
DEFC  Xscl =                 $8F62
DEFC  Ymin =                 $8F6B
DEFC  Ymax =                 $8F74
DEFC  Yscl =                 $8F7D
DEFC  ThetaMin =             $8F86
DEFC  ThetaMax =             $8F8F
DEFC  ThetaStep =            $8F98
DEFC  TminPar =              $8FA1
DEFC  TmaxPar =              $8FAA
DEFC  Tstep =                $8FB3
DEFC  PlotStart =            $8FBC
DEFC  nMax =                 $8FC5
DEFC  u0 =                   $8FCE
DEFC  v0 =                   $8FD7
DEFC  nMin =                 $8FE0
DEFC  u02 =                  $8FE9
DEFC  v02 =                  $8FF2
DEFC  w0 =                   $8FFB
DEFC  PlotStep =             $9004
DEFC  XresO =                $900D
DEFC  w02 =                  $9016
DEFC  un1 =                  $901F
DEFC  un2 =                  $9028
DEFC  vn1 =                  $9031
DEFC  vn2 =                  $903A
DEFC  wn1 =                  $9043
DEFC  wn2 =                  $904C
DEFC  fin_N =                $9055
DEFC  fin_I =                $905E
DEFC  fin_PV =               $9067
DEFC  fin_PMT =              $9070
DEFC  fin_FV =               $9079
DEFC  fin_PY =               $9082
DEFC  fin_CY =               $908B
DEFC  cal_N =                $9094
DEFC  cal_I =                $909D
DEFC  cal_PV =               $90A6
DEFC  cal_PMT =              $90AF
DEFC  cal_FV =               $90B8
DEFC  cal_PY =               $90C1
DEFC  smallEditRAM =         $90D3
DEFC  XFact =                $913F
DEFC  YFact =                $9148
DEFC  Xres_int =             $9151
DEFC  deltaX =               $9152
DEFC  deltaY =               $915B
DEFC  shortX =               $9164
DEFC  shortY =               $916D
DEFC  lower =                $9176
DEFC  upper =                $917F
DEFC  XOutSym =              $918C
DEFC  XOutDat =              $918E
DEFC  YOutSym =              $9190
DEFC  YOutDat =              $9192
DEFC  inputSym =             $9194
DEFC  inputDat =             $9196
DEFC  prevData =             $9198
DEFC  TblMin =               $92B3
DEFC  TblStep =              $92BC
DEFC  plotScreen =          $9340
DEFC  seed1 =                $9640
DEFC  seed2 =                $9649
DEFC  cmdShadow =            $966E
DEFC  cmdShadCur =           $96EE
DEFC  cmdShadAlph =          $96F0
DEFC  cmdShadIns =           $96F1
DEFC  cmdCursor =            $96F2
DEFC  editTop =              $96F4
DEFC  editCursor =           $96F6
DEFC  editTail =             $96F8
DEFC  editBtm =              $96FA
DEFC  editSym =              $9706
DEFC  editDat =              $9708
DEFC  winTop =               $97A5
DEFC  winBtm =               $97A6
DEFC  winLeftEdge =          $97A7
DEFC  winLeft =              $97A8
DEFC  winAbove =             $97AA
DEFC  winRow =               $97AC
DEFC  winCol =               $97AE
DEFC  fmtDigits =            $97B0
DEFC  fmtString =            $97B1
DEFC  fmtConv =              $97F2
DEFC  fmtLeft =              $9804
DEFC  fmtIndex =             $9806
DEFC  fmtMatSym =            $9808
DEFC  fmtMatMem =            $980A
DEFC  EQS =                  $980C
DEFC  tSymPtr1 =             $9818
DEFC  tSymPtr2 =             $981A
DEFC  chkDelPtr3 =           $981C
DEFC  chkDelPtr4 =           $981E
DEFC  tempMem =              $9820
DEFC  fpBase =               $9822
DEFC  FPS =                  $9824
DEFC  OPBase =               $9826
DEFC  OPS =                  $9828
DEFC  pTempCnt =             $982A
DEFC  cleanTmp =             $982C
DEFC  pTemp =                $982E
DEFC  progPtr =              $9830
DEFC  newDataPtr =           $9832
DEFC  pagedCount =           $9834
DEFC  pagedPN =              $9835
DEFC  pagedGetPtr =          $9836
DEFC  pagedPutPtr =          $9838
DEFC  pagedBuf =             $983A
DEFC  appErr1 =              $984D
DEFC  appErr2 =              $985A
DEFC  flashByte1 =           $9867
DEFC  flashByte2 =           $9868
DEFC  freeArcBlock =         $9869
DEFC  arcPage =              $986B
DEFC  arcPtr =               $986C
DEFC  appRawKeyHandle =      $9870
DEFC  appBackUpScreen =      $9872
DEFC  customHeight =         $9B72
DEFC  localLanguage =        $9B73
DEFC  cursorHookPtr =        $9B7C
DEFC  rawKeyHookPtr =        $9B84
DEFC  getKeyHookPtr =        $9B88
DEFC  fontHookPtr =          $9B9C
DEFC  restartClr =           $9BD0
DEFC  localTokStr =          $9D65
DEFC  keyForStr =            $9D76
DEFC  keyToStrRam =          $9D77
DEFC  sedMonSp =             $9D88
DEFC  bpSave =               $9D8A
DEFC  userMem =              $9D95
DEFC  symTable =             $FE66

;SYMBOLIC_DEBUG_END
;
;======================================================================
;           Error handler equates/macros 
;======================================================================
;

;#Define		OnError(xxxx)	LD	HL, xxxx	\	CALL	APP_PUSH_ERRORH
;#Define		OffError	CALL	APP_POP_ERRORH
; Syntax Enhancers

DEFC	APP_PUSH_ERRORH = $59
DEFC	APP_POP_ERRORH =	$5C
;

;======================================================================
;           System and State Flags
;======================================================================
;

DEFC  trigFlags =	0		;Trigonometry mode settings
DEFC    trigDeg = 	2	; 1=degrees, 0=radians

DEFC  kbdFlags =	0		;Keyboard scan
DEFC    kbdSCR =		3	; 1=scan code ready
DEFC    kbdKeyPress =	4	; 1=key has been pressed

DEFC  doneFlags =	0		;display "Done"
DEFC    donePrgm =	5	; 1=display "Done" after prgm

DEFC  ioDelFlag =	0
DEFC    inDelete =	0	;1 = DELETE SCREEN 

;----------------------------------------------------------------------
DEFC  editFlags =	1
DEFC    editOpen =	2	; 1=edit buffer is open

DEFC  monFlags =	1		;monitor flags
DEFC    monAbandon =	4	; 1=don't start any long process
				; in put away (#715)
;----------------------------------------------------------------------
DEFC  plotFlags =	2		;plot generation flags
DEFC    plotLoc = 	1	; 0=bkup & display, 1=display only
DEFC    plotDisp =	2	; 1=plot is in display, 0=text in display


DEFC  grfModeFlags =	2		;graph mode settings
DEFC    grfFuncM =	4	; 1=function graph
DEFC    grfPolarM =	5	; 1=polar graph
DEFC    grfParamM =	6	; 1=parametric graph
DEFC    grfRecurM =       7        ; 1=RECURSION graph

DEFC  graphFlags =	3
DEFC    graphDraw =	0	; 0=graph is valid, 1=redraw graph

DEFC  grfDBFlags =	4
DEFC    grfDot =		0	; 0=line, 1=dot
DEFC    grfSimul =	1	; 0=sequential, 1=simultaneous
DEFC    grfGrid = 	2	; 0=no grid, 1=grid
DEFC    grfPolar =	3	; 0=rectangular, 1=polar coordinates
DEFC    grfNoCoord =	4	; 0=display coordinates, 1=off
DEFC    grfNoAxis =	5	; 0=axis, 1=no axis
DEFC    grfLabel =	6	; 0=off, 1=axis label

DEFC  textFlags =	5		;Text output flags
DEFC    textEraseBelow =	1	; 1=erase line below small char
DEFC    textScrolled =	2	; 1=screen scrolled
DEFC    textInverse =	3	; 1=display inverse bit-map
DEFC    textInsMode =	4	; 0=overstrike, 1=insert mode

DEFC  ParsFlag2 =	7		;PARSER flags
DEFC    numOP1 =		0	; 1=RESULT IN OP1, 0=NO RESULT

DEFC  newDispF =        8		;Derivative mode flags
DEFC    preClrForMode =   0	; 1=HELP BLINK ON MODE SCREEN

DEFC  apdFlags =	8		;Automatic power-down
DEFC    apdAble = 	2	; 1=APD enabled
DEFC    apdRunning =	3	; 1=APD clock running


DEFC  web_err_mask =    $60

DEFC  onFlags = 	9		;on key flags
DEFC    onInterrupt =	4	; 1=on key interrupt request

DEFC  statFlags =	9		;statistics flags
DEFC    statsValid =	6	; 1=stats are valid

DEFC  fmtFlags =	10		;numeric format flags
DEFC    fmtExponent =	0	; 1=show exponent, 0=no exponent
DEFC    fmtEng =		1	; 1=engineering notion, 0=scientific
DEFC    fmtHex =		2	; 1=hexadecimal
DEFC    fmtOct =		3	; 1=octal
DEFC    fmtBin =		4	; 1=binary
;
DEFC  numMode =         10
DEFC    fmtReal =         5
DEFC    fmtRect =         6
DEFC    fmtPolar =        7

DEFC    realMode =        5
DEFC    rectMode =        6
DEFC    polarMode =       7
;					;   if Hex and Oct both = 1
;					;   then Bin=0 means >Frac
;					;	 Bin=1 means >DMS
DEFC  fmtBaseMask =     @00011100		; mask to base flags
DEFC  fmtBaseShift =    2			; offset to base flags
;
;       CHECK IF THESE ARE USED BY NUMFORM,
;
;               EQU  6
;               EQU  7

DEFC  fmtOverride =	11		;copy of fmtFlags with conversion override

DEFC  fmtEditFlags =	12		;numeric editing flags
DEFC    fmtEdit = 	0	; 1=format number for editing

DEFC  curFlags =	12		;Cursor
DEFC    curAble = 	2	; 1=cursor flash is enabled
DEFC    curOn =		3	; 1=cursor is showing
DEFC    curLock = 	4	; 1=cursor is locked off

DEFC  appFlags =	13		;application flags
DEFC    appWantIntrpt =	0		; 1=want ON key interrupts
DEFC    appTextSave =	1		; 1=save characters in textShadow
DEFC    appAutoScroll =	2		; 1=auto-scroll text on last line
DEFC    appMenus =	3		; 1=process keys that bring up menus
					; 0=check Lock menu flag
DEFC    appLockMenus =	4		; 1=ignore menu keys
					; 0=switch to home screen and bring up menu
DEFC    appCurGraphic =	5		; 1=graphic cursor
DEFC    appCurWord =	6		; 1=text cursor covers entire word
DEFC    appExit = 	7		; 1=application handles [EXIT] key itself

;DEFC	appWantIntrptF =	1<<appWantIntrpt
;DEFC	appTextSaveF =	1<<appTextSave
;DEFC	appAutoScrollF =	1<<appAutoScroll
;DEFC	appMenusF =	1<<appMenus
;DEFC	appLockMenusF =	1<<appLockMenus
;DEFC	appCurGraphicF =	1<<appCurGraphic
;DEFC	appCurWordF =	1<<appCurWord
;DEFC	appExitF =	1<<appExit


DEFC  seqFlags =        15              ; Sequential Graph flags
DEFC    webMode =         0             ; 0 = NORMAL SEQ MODE, 1 = WEB MODE
DEFC    webVert =         1             ;
DEFC    sequv =           2             ; U vs V
DEFC    seqvw =           3             ; V vs W
DEFC    sequw =           4             ; U vs W


DEFC  promptFlags =	17		;prompt line flags
DEFC    promptEdit =	0	; 1=editing in prompt buffer

DEFC  indicFlags =	18		;Indicator flags
DEFC    indicRun =	0	; 1=run indicator ON
DEFC    indicInUse =	1	; indicator save area in use=1, free=0
DEFC    indicOnly =	2	; interrupt handler only checks run indicator

DEFC  shiftFlags =	18		;[2nd] and [ALPHA] flags
DEFC    shift2nd =	3	; 1=[2nd] has been pressed
DEFC    shiftAlpha =	4	; 1=[ALPHA] has been pressed
DEFC    shiftLwrAlph =	5	; 1=lower case, 0=upper case
DEFC    shiftALock =	6	; 1=alpha lock has been pressed
DEFC    shiftKeepAlph =	7	; 1=cannot cancel alpha shift


DEFC  tblFlags =        19		;table flags.
DEFC    autoFill =        4	; 1=prompt, 0=fillAuto
DEFC    autoCalc =        5	; 1=prompt, 0=CalcAuto
DEFC    reTable =         6	; 0=table is ok, 1=must recompute table.

DEFC  sGrFlags =	20
DEFC    grfSplit =        0	; 1=Split Graph, 0=Normal
DEFC    vertSplit =       1	; 1=Vertical (left-right) Split
DEFC    grfSChanged =     2	; 1=Graph just changed Split <-> normal
DEFC   grfSplitOverride = 3	; 1 = ignore graph split flag if set
DEFC    write_on_graph =  4	; 1 = TEXT OR EQU WRITING TO GRAPH SCREEN
DEFC    g_style_active =  5	; 1 = GRAPH STYLES ARE ENABLED, USE THEM
DEFC    cmp_mod_box =     6	; 1 = DOING MOD BOX PLOT COMPUTATION
DEFC    textWrite =       7
;

DEFC  newIndicFlags =   21
DEFC    extraIndic =      0
DEFC    saIndic =         1

DEFC  smartFlags =      23
;
;----------------------------------------------------------------------
; Note: Fix these Equates if smartFlags are moved                            
;----------------------------------------------------------------------
;
DEFC  smarter_mask =    3
DEFC  smarter_test =    1
DEFC  smartGraph =      0
DEFC  smartGraph_inv =  1                                                 

;----------------------------------------------------------------------
;           Available for ASM programming
;----------------------------------------------------------------------

DEFC  asm_Flag1 =       33          ; ASM CODING
DEFC  asm_Flag2 =       34          ; ASM CODING
DEFC  asm_Flag3 =       35          ; ASM CODING

;----------------------------------------------------------------------
;
DEFC  getSendFlg =	36
DEFC  comFailed =	1	      ; 1 = Get/Send Communication Failed
;
DEFC  appLwrCaseFlag =  36
DEFC  lwrCaseActive =   3
;
DEFC  apiFlg3 =		42 
;
DEFC  apiFlg4 =		43
DEFC    fullScrnDraw =	2	; DRAW INTO LAST ROW/COL OF SCREEN

DEFC  groupFlags =	38
DEFC  inGroup =		1		;1 = IN GROUP CONTEXT


DEFC  xapFlag0 =        46      ; external app flags
DEFC  xapFlag1 =        47
DEFC  xapFlag2 =        48
DEFC  xapFlag3 =        49

DEFC  fontFlags =	50
DEFC    fracDrawLFont =	2
DEFC    fracTallLFont =	3
DEFC    customFont =	7  

DEFC  plotFlag3 =	60  
DEFC    bufferOnly =	0
DEFC    useFastCirc =	4

;
DEFC  varTypeMask =	$1F
DEFC    varGraphRef =	6

;
;======================================================================
;           Character Font equates  
;======================================================================
;
DEFC     LrecurN =         $01
DEFC	LrecurU = 	$02
DEFC	LrecurV = 	$03
DEFC	LrecurW =		$04
DEFC	Lconvert =	$05
DEFC	LsqUp =		$06
DEFC	LsqDown =		$07
DEFC	Lintegral =	$08
DEFC	Lcross =		$09
DEFC     LboxIcon = 	$0A
DEFC     LcrossIcon = 	$0B
DEFC     LdotIcon = 	$0C
DEFC     LsubT =   	$0D		;small capital T for parametric mode.
DEFC     LcubeR =  	$0E		;slightly different 3 for cubed root.
DEFC	LhexF =		$0F
DEFC	Lroot =		$10
DEFC	Linverse =	$11
DEFC	Lsquare =		$12
DEFC	Langle =		$13
DEFC	Ldegree =		$14
DEFC	Lradian =		$15
DEFC	Ltranspose =	$16
DEFC	LLE =		$17
DEFC	LNE =		$18
DEFC	LGE =		$19
DEFC	Lneg =		$1A
DEFC	Lexponent =	$1B
DEFC	Lstore =		$1C
DEFC	Lten =		$1D
DEFC	LupArrow =	$1E
DEFC	LdownArrow =	$1F
DEFC	Lspace =		$20
DEFC	Lexclam =		$21
DEFC	Lquote =		$22
DEFC	Lpound =		$23
DEFC     Lfourth =		$24
DEFC	Lpercent =	$25
DEFC	Lampersand =	$26
DEFC	Lapostrophe =	$27
DEFC	LlParen =		$28
DEFC	LrParen =		$29
DEFC	Lasterisk =	$2A
DEFC	LplusSign =	$2B
DEFC	Lcomma =		$2C
DEFC	Ldash =		$2D
DEFC	Lperiod =		$2E
DEFC	Lslash =		$2F
DEFC	L0 =		$30
DEFC	L1 =		$31
DEFC	L2 =		$32
DEFC	L3 =		$33
DEFC	L4 =		$34
DEFC	L5 =		$35
DEFC	L6 =		$36
DEFC	L7 =		$37
DEFC	L8 =		$38
DEFC	L9 =		$39
DEFC	Lcolon =		$3A
DEFC	Lsemicolon =	$3B
DEFC	LLT =		$3C
DEFC	LEQ =		$3D
DEFC	LGT =		$3E
DEFC	Lquestion =	$3F
DEFC	LatSign =		$40
DEFC	LcapA =	$41
DEFC	LcapB =	$42
DEFC	LcapC =	$43
DEFC	LcapD =	$44
DEFC	LcapE =	$45
DEFC	LcapF =	$46
DEFC	LcapG =	$47
DEFC	LcapH =	$48
DEFC	LcapI =	$49
DEFC	LcapJ =	$4A
DEFC	LcapK =	$4B
DEFC	LcapL =	$4C
DEFC	LcapM =	$4D
DEFC	LcapN =	$4E
DEFC	LcapO =	$4F
DEFC	LcapP =	$50
DEFC	LcapQ =	$51
DEFC	LcapR =	$52
DEFC	LcapS =	$53
DEFC	LcapT =	$54
DEFC	LcapU =	$55
DEFC	LcapV =	$56
DEFC	LcapW =	$57
DEFC	LcapX =	$58
DEFC	LcapY =	$59
DEFC	LcapZ =	$5A
DEFC     Ltheta =  $5B
DEFC	Lbackslash =	$5C
DEFC	LrBrack =		$5D
DEFC	Lcaret =		$5E
DEFC	Lunderscore =	$5F
DEFC	Lbackquote =	$60
DEFC	La =	$61
DEFC	Lb =	$62
DEFC	Lc =	$63
DEFC	Ld =	$64
DEFC	Le =	$65
DEFC	Lf =	$66
DEFC	Lg =	$67
DEFC	Lh =	$68
DEFC	Li =	$69
DEFC	Lj =	$6A
DEFC	Lk =	$6B
DEFC	Ll =	$6C
DEFC	Lm =	$6D
DEFC	Ln =	$6E
DEFC	Lo =	$6F
DEFC	Lp =	$70
DEFC	Lq =	$71
DEFC	Lr =	$72
DEFC	Ls =	$73
DEFC	Lt =	$74
DEFC	Lu =	$75
DEFC	Lv =	$76
DEFC	Lw =	$77
DEFC	Lx =	$78
DEFC	Ly =	$79
DEFC	Lz =	$7A
DEFC	LlBrace =	$7B
DEFC	Lbar =	$7C
DEFC	LrBrace =	$7D
DEFC	Ltilde =	$7E
DEFC	LinvEQ =	$7F
DEFC	Lsub0 =	$80
DEFC	Lsub1 =	$81
DEFC	Lsub2 =	$82
DEFC	Lsub3 =	$83
DEFC	Lsub4 =	$84
DEFC	Lsub5 =	$85
DEFC	Lsub6 =	$86
DEFC	Lsub7 =	$87
DEFC	Lsub8 =	$88
DEFC	Lsub9 =	$89
DEFC	LcapAAcute =	$8A
DEFC	LcapAGrave =	$8B
DEFC	LcapACaret =	$8C
DEFC	LcapADier =	$8D
DEFC	LaAcute =		$8E
DEFC	LaGrave =		$8F
DEFC	LaCaret =		$90
DEFC	LaDier =		$91
DEFC	LcapEAcute =	$92
DEFC	LcapEGrave =	$93
DEFC	LcapECaret =	$94
DEFC	LcapEDier =	$95
DEFC	LeAcute =		$96
DEFC	LeGrave =		$97
DEFC	LeCaret =		$98
DEFC	LeDier =		$99
DEFC	LcapIAcute =	$9A
DEFC	LcapIGrave =	$9B
DEFC	LcapICaret =	$9C
DEFC	LcapIDier =	$9D
DEFC	LiAcute =		$9E
DEFC	LiGrave =		$9F
DEFC	LiCaret =		$A0
DEFC	LiDier =		$A1
DEFC	LcapOAcute =	$A2
DEFC	LcapOGrave =	$A3
DEFC	LcapOCaret =	$A4
DEFC	LcapODier =	$A5
DEFC	LoAcute =		$A6
DEFC	LoGrave =		$A7
DEFC	LoCaret =		$A8
DEFC	LoDier =		$A9
DEFC	LcapUAcute =	$AA
DEFC	LcapUGrave =	$AB
DEFC	LcapUCaret =	$AC
DEFC	LcapUDier =	$AD
DEFC	LuAcute =		$AE
DEFC	LuGrave =		$AF
DEFC	LuCaret =		$B0
DEFC	LuDier =		$B1
DEFC	LcapCCed =	$B2
DEFC	LcCed =		$B3
DEFC	LcapNTilde =	$B4
DEFC	LnTilde =		$B5
DEFC	Laccent =		$B6
DEFC	Lgrave =		$B7
DEFC	Ldieresis =	$B8
DEFC	LquesDown =	$B9
DEFC	LexclamDown =	$BA
DEFC	Lalpha =		$BB
DEFC	Lbeta =		$BC
DEFC	Lgamma =		$BD
DEFC	LcapDelta =	$BE
DEFC	Ldelta =		$BF
DEFC	Lepsilon =	$C0
DEFC     LlBrack = 	$C1
DEFC	Llambda =		$C2
DEFC	Lmu =		$C3
DEFC	Lpi =		$C4
DEFC	Lrho =		$C5
DEFC	LcapSigma =	$C6
DEFC	Lsigma =		$C7
DEFC	Ltau =		$C8
DEFC	Lphi =		$C9
DEFC	LcapOmega =	$CA
DEFC	LxMean =		$CB
DEFC	LyMean =		$CC
DEFC	LsupX =		$CD
DEFC	Lellipsis =	$CE
DEFC	Lleft =		$CF
DEFC	Lblock =		$D0
DEFC	Lper =		$D1
DEFC	Lhyphen =		$D2
DEFC	Larea =		$D3
DEFC	Ltemp =		$D4
DEFC	Lcube =		$D5
DEFC	Lenter =		$D6
DEFC	LimagI =		$D7
DEFC	Lphat =		$D8
DEFC	Lchi =		$D9
DEFC     LstatF =		$DA
DEFC	Llne =		$DB
DEFC	LlistL =		$DC
DEFC	LfinanN = 	$DD
DEFC	L2_r_paren = 	$DE
DEFC     LblockArrow =     $DF
DEFC     LcurO =   	$E0
DEFC     LcurO2 =  	$E1
DEFC     LcurOcapA =       $E2
DEFC     LcurOa =  	$E3
DEFC     LcurI =   	$E4
DEFC     LcurI2 =  	$E5
DEFC     LcurIcapA =       $E6
DEFC     LcurIa =  	$E7
DEFC     LGline =          $E8    ; = 0
DEFC     LGthick =         $E9    ; = 1
DEFC     LGabove =         $EA    ; = 2
DEFC     LGbelow =         $EB    ; = 3
DEFC     LGpath =          $EC    ; = 4
DEFC     LGanimate =       $ED    ; = 5
DEFC     LGdot =           $EE    ; = 6
DEFC     LUpBlk =          $EF    ;Up arrow and Block in solver
DEFC     LDnBlk =          $F0    ;Down arrow and Block in solver
DEFC     LcurFull =        $F1    ;note: must be last char (PutMap checks)
;
;======================================================================
;           Keypress Equates
;======================================================================
;           Keyboard key names
;
;
;kRight          EQU       $01
;kLeft           EQU       $02
;kUp             EQU       $03
;kDown           EQU       $04
DEFC       kEnter =          $05
DEFC       kAlphaEnter =     $06
DEFC       kAlphaUp =        $07
DEFC       kAlphaDown =      $08
DEFC       kClear =          $09
DEFC       kDel =            $0A
DEFC       kIns =            $0B
DEFC       kRecall =         $0C
DEFC       kLastEnt =        $0D
DEFC       kBOL =            $0E
DEFC       kEOL =            $0F
;
DEFC       kSelAll =         $10
DEFC       kUnselAll =       $11
DEFC       kLtoTI82 =        $12
DEFC       kBackup =         $13
DEFC       kRecieve =        $14
DEFC       kLnkQuit =        $15
DEFC       kTrans =          $16
DEFC       kRename =         $17
DEFC       kOverw =          $18
DEFC       kOmit =           $19
DEFC       kCont =           $1A
DEFC       kSendID =         $1B
DEFC       kSendSW =         $1C
DEFC       kYes =            $1D
DEFC       kNoWay =          $1E
DEFC       kvSendType =      $1F
DEFC       kOverWAll =       $20
;
DEFC       kNo =             $25
DEFC       kKReset =         $26
DEFC       kApp =            $27
;
DEFC       kDoug =           $28
DEFC       kListflag =       $29
DEFC       menuStart =       $2B
;
DEFC       kAreYouSure =     $2B
DEFC       kAppsMenu =       $2C
DEFC       kPrgm =           $2D
DEFC       kZoom =           $2E
DEFC       kDraw =           $2F
DEFC       kSPlot =          $30
DEFC       kStat =           $31
DEFC       kMath =           $32
DEFC       kTest =           $33
DEFC       kChar =           $34
DEFC       kVars =           $35
DEFC       kMem =            $36
DEFC       kMatrix =         $37
DEFC       kDist =           $38
DEFC       kAngle =          $39
DEFC       kList =           $3A
DEFC       kCalc =           $3B
DEFC       kFin =            $3C
;
DEFC       menuEnd =         kFin
;
DEFC       kCatalog =        $3E
DEFC       kInputDone =      $3F
DEFC       kOff =            kInputDone
;
DEFC       kQuit =           $40
DEFC       appStart =        kQuit

;
DEFC       kLinkIO =         $41
DEFC       kMatrixEd =       $42
DEFC       kStatEd =         $43
DEFC       kGraph =          $44
DEFC       kMode =           $45
DEFC       kPrgmEd =         $46        ; PROGRAM EDIT
DEFC       kPrgmCr =         $47        ; PROGRAM CREATE
DEFC       kWindow =         $48        ; RANGE EDITOR
DEFC       kYequ =           $49        ; EQUATION EDITOR
DEFC       kTable =          $4A        ; TABLE EDITOR
DEFC       kTblSet =         $4B        ; TABLE SET
DEFC       kChkRAM =         $4C        ; CHECK RAM
DEFC       kDelMem =         $4D        ; DELETE MEM
DEFC       kResetMem =       $4E        ; RESET MEM
DEFC	  kResetDef =	$4F        ; RESET DEFAULT
DEFC       kPrgmInput =      $50        ; PROGRAM INPUT
DEFC       kZFactEd =        $51        ; ZOOM FACTOR EDITOR
DEFC       kError =          $52        ; ERROR
DEFC       kSolveTVM =       $53        ; TVM SOLVER
DEFC	  kSolveRoot =	$54        ; SOLVE EDITOR
DEFC       kStatP =          $55        ; stat plot
DEFC	  kInfStat = 	$56	      ; Inferential Statistic
DEFC       kFormat =         $57        ; FORMAT
DEFC       kExtApps =        $58        ; External Applications.     NEW
DEFC       kNewApps =        $59        ; New Apps for Cerberus.
;
DEFC       append =          kNewApps
;
DEFC       echoStart1 =      $5A
;
DEFC       kTrace =          $5A
DEFC       kZFit =           $5B
DEFC       kZIn =            $5C
DEFC       kZOut =           $5D
DEFC       kZPrev =          $5E
DEFC       kBox =            $5F
DEFC       kDecml =          $60
DEFC       kSetZm =          $61
DEFC       kSquar =          $62
DEFC       kStd =            $63
DEFC       kTrig =           $64
DEFC       kUsrZm =          $65
DEFC       kZSto =           $66
DEFC       kZInt =           $67
DEFC       kZStat =          $68
;
DEFC       echoStart2 =      $69
;
;kSelect         EQU       $69
DEFC       kCircl =          $6A
DEFC       kClDrw =          $6B
DEFC       kLine =           $6C
DEFC       kPen =            $6D
DEFC       kPtChg =          $6E
DEFC       kPtOff =          $6F
DEFC       kPtOn =           $70
DEFC       kVert =           $71
DEFC       kHoriz =          $72
DEFC       kText =           $73
DEFC       kTanLn =          $74
;
DEFC       kEval =           $75
DEFC       kInters =         $76
DEFC       kDYDX =           $77
DEFC       kFnIntg =         $78
DEFC       kRootG =          $79
DEFC       kDYDT =           $7A
DEFC       kDXDT =           $7B
DEFC       kDRDo =           $7C
DEFC       KGFMin =          $7D
DEFC       KGFMax =          $7E
;
;
DEFC       EchoStart =       $7F
;
DEFC       kListName =       $7F
DEFC       kAdd =            $80
DEFC       kSub =            $81
DEFC       kMul =            $82
DEFC       kDiv =            $83
DEFC       kExpon =          $84
DEFC       kLParen =         $85
DEFC       kRParen =         $86
DEFC       kLBrack =         $87
DEFC       kRBrack =         $88
DEFC       kShade =          $89
DEFC       kStore =          $8A
DEFC       kComma =          $8B
DEFC       kChs =            $8C
DEFC       kDecPnt =         $8D
DEFC       k0 =              $8E
DEFC       k1 =              $8F
DEFC       k2 =              $90
DEFC       k3 =              $91
DEFC       k4 =              $92
DEFC       k5 =              $93
DEFC       k6 =              $94
DEFC       k7 =              $95
DEFC       k8 =              $96
DEFC       k9 =              $97
DEFC       kEE =             $98
DEFC       kSpace =          $99
DEFC       kCapA =           $9A
DEFC       kCapB =           $9B
DEFC       kCapC =           $9C
DEFC       kCapD =           $9D
DEFC       kCapE =           $9E
DEFC       kCapF =           $9F
DEFC       kCapG =           $A0
DEFC       kCapH =           $A1
DEFC       kCapI =           $A2
DEFC       kCapJ =           $A3
DEFC       kCapK =           $A4
DEFC       kCapL =           $A5
DEFC       kCapM =           $A6
DEFC       kCapN =           $A7
DEFC       kCapO =           $A8
DEFC       kCapP =           $A9
DEFC       kCapQ =           $AA
DEFC       kCapR =           $AB
DEFC       kCapS =           $AC
DEFC       kCapT =           $AD
DEFC       kCapU =           $AE
DEFC       kCapV =           $AF
DEFC       kCapW =           $B0
DEFC       kCapX =           $B1
DEFC       kCapY =           $B2
DEFC       kCapZ =           $B3
DEFC       kVarx =           $B4
DEFC       kPi =             $B5
DEFC       kInv =            $B6
DEFC       kSin =            $B7
DEFC       kASin =           $B8
DEFC       kCos =            $B9
DEFC       kACos =           $BA
DEFC       kTan =            $BB
DEFC       kATan =           $BC
DEFC       kSquare =         $BD
DEFC       kSqrt =           $BE
DEFC       kLn =             $BF
DEFC       kExp =            $C0
DEFC       kLog =            $C1
DEFC       kALog =           $C2
DEFC       kToABC =          $C3
;
DEFC       kClrTbl =         $C4
;
DEFC       kAns =            $C5
DEFC       kColon =          $C6
;
DEFC       kNDeriv =         $C7
DEFC       kFnInt =          $C8
DEFC       kRoot =           $C9
;
DEFC       kQuest =          $CA
DEFC       kQuote =          $CB
DEFC       kTheta =          $CC
DEFC       kIf =             $CD
DEFC       kThen =           $CE
DEFC       kElse =           $CF
DEFC       kFor =            $D0
DEFC       kWhile =          $D1
DEFC       kRepeat =         $D2
DEFC       kEnd =            $D3
DEFC       kPause =          $D4
DEFC       kLbl =            $D5
DEFC       kGoto =           $D6
DEFC       kISG =            $D7
DEFC       kDSL =            $D8
DEFC       kMenu =           $D9
DEFC       kExec =           $DA
DEFC       kReturn =         $DB
DEFC       kStop =           $DC
DEFC       kInput =          $DD
DEFC       kPrompt =         $DE
DEFC       kDisp =           $DF
DEFC       kDispG =          $E0
DEFC       kDispT =          $E1
DEFC       kOutput =         $E2
DEFC       kGetKey =         $E3
DEFC       kClrHome =        $E4
DEFC       kPrtScr =         $E5
DEFC       kSinH =           $E6
DEFC       kCosH =           $E7
DEFC       kTanH =           $E8
DEFC       kASinH =          $E9
DEFC       kACosH =          $EA
DEFC       kATanH =          $EB
DEFC       kLBrace =         $EC
DEFC       kRBrace =         $ED
DEFC       kI =              $EE
DEFC       kCONSTeA =        $EF
DEFC       kPlot3 =          $F0
DEFC       kFMin =           $F1
DEFC       kFMax =           $F2
DEFC       kL1A =            $F3
DEFC       kL2A =            $F4
DEFC       kL3A =            $F5
DEFC       kL4A =            $F6
DEFC       kL5A =            $F7
DEFC       kL6A =            $F8
DEFC       kunA =            $F9
DEFC       kvnA =            $FA
DEFC       kwnA =            $FB
;
;======================================================================
;       THIS KEY MEANS THAT IT IS A 2 BYTE KEYCODE
;       THERE ARE 2 OF THESE KEYS; BE CAREFUL WITH USAGE
;======================================================================
;
DEFC       kExtendEcho2 =    $FC
;
;======================================================================;
;       THIS KEY MEANS THAT THE KEY PRESS IS ONE THAT $ECOS
;       INTO A BUFFER, AND IT IS A 2 BYTE KEY CODE, GO LOOK AT
;       (EXTECHO) FOR THE KEY VALUE 
;======================================================================
;
DEFC       kExtendEcho =     $FE
;

DEFC       kE1BT =           0

DEFC       kDrawInv =        kE1BT
DEFC       kDrawF =          kE1BT+1
DEFC       kPixelOn =        kE1BT+2
DEFC       kPixelOff =       kE1BT+3
DEFC       kPxlTest =        kE1BT+4
DEFC       kRCGDB =          kE1BT+5
DEFC       kRCPic =          kE1BT+6
DEFC       kSTGDB =          kE1BT+7
DEFC       kSTPic =          kE1BT+8
DEFC       kAbs =            kE1BT+9
DEFC       kTEqu =           kE1BT+10    ; ==
DEFC       kTNoteQ =         kE1BT+11    ; <>
DEFC       kTGT =            kE1BT+12    ; >
DEFC       kTGTE =           kE1BT+13    ; > =
DEFC       kTLT =            kE1BT+14    ; <
DEFC       kTLTE =           kE1BT+15    ; < =

DEFC       kAnd =            kE1BT+16
DEFC       kOr =             kE1BT+17
DEFC       kXor =            kE1BT+18
DEFC       kNot =            kE1BT+19

DEFC       kLR1 =            kE1BT+20

DEFC       kXRoot =          kE1BT+21
DEFC       kCube =           kE1BT+22
DEFC       kCbRt =           kE1BT+23    ; Cube ROOT
DEFC       kToDec =          kE1BT+24
;
DEFC       kCubicR =         kE1BT+25
DEFC       kQuartR =         kE1BT+26
;
DEFC       kPlot1 =          kE1BT+27
DEFC       kPlot2 =          kE1BT+28
;

DEFC       kRound =          kE1BT+29
DEFC       kIPart =          kE1BT+30
DEFC       kFPart =          kE1BT+31
DEFC       kInt =            kE1BT+32

DEFC       kRand =           kE1BT+33
DEFC       kNPR =            kE1BT+34
DEFC       kNCR =            kE1BT+35
DEFC       kXFactorial =     kE1BT+36

DEFC       kRad =            kE1BT+37
DEFC       kDegr =           kE1BT+38    ; DEGREES CONV
DEFC       kAPost =          kE1BT+39
DEFC       kToDMS =          kE1BT+40
DEFC       kRToPo =          kE1BT+41    ; R
DEFC       kRToPr =          kE1BT+42
DEFC       kPToRx =          kE1BT+43
DEFC       kPToRy =          kE1BT+44

DEFC       kRowSwap =        kE1BT+45
DEFC       kRowPlus =        kE1BT+46
DEFC       kTimRow =         kE1BT+47
DEFC       kTRowP =          kE1BT+48

DEFC       kSortA =          kE1BT+49
DEFC       kSortD =          kE1BT+50
DEFC       kSeq =            kE1BT+51

DEFC       kMin =            kE1BT+52
DEFC       kMax =            kE1BT+53
DEFC       kMean =           kE1BT+54
DEFC       kMedian =         kE1BT+55
DEFC       kSum =            kE1BT+56
DEFC       kProd =           kE1BT+57

DEFC       kDet =            kE1BT+58
DEFC       kTransp =         kE1BT+59
DEFC       kDim =            kE1BT+60
DEFC       kFill =           kE1BT+61
DEFC       kIdent =          kE1BT+62
DEFC       kRandm =          kE1BT+63
DEFC       kAug =            kE1BT+64

DEFC       kOneVar =         kE1BT+65
DEFC       kTwoVar =         kE1BT+66
DEFC       kLR =             kE1BT+67
DEFC       kLRExp =          kE1BT+68
DEFC       kLRLn =           kE1BT+69
DEFC       kLRPwr =          kE1BT+70
DEFC       kMedMed =         kE1BT+71
DEFC       kQuad =           kE1BT+72
DEFC       kClrLst =         kE1BT+73
DEFC       kHist =           kE1BT+74
DEFC       kxyLine =         kE1BT+75
DEFC       kScatter =        kE1BT+76

DEFC       kmRad =           kE1BT+77
DEFC       kmDeg =           kE1BT+78
DEFC       kmNormF =         kE1BT+79
DEFC       kmSci =           kE1BT+80
DEFC       kmEng =           kE1BT+81
DEFC       kmFloat =         kE1BT+82

DEFC       kFix =            kE1BT+83
DEFC       kSplitOn =        kE1BT+84
DEFC       kFullScreen =     kE1BT+85
DEFC       kStndrd =         kE1BT+86
DEFC       kParam =          kE1BT+87
DEFC       kPolar =          kE1BT+88
DEFC       kSeqG =           kE1BT+89
DEFC       kAFillOn =        kE1BT+90
DEFC       kAFillOff =       kE1BT+91
DEFC       kACalcOn =        kE1BT+92
DEFC       kACalcOff =       kE1BT+93
DEFC       kFNOn =           kE1BT+94
DEFC       kFNOff =          kE1BT+95

DEFC       kPlotsOn =        kE1BT+96
DEFC       kPlotsOff =       kE1BT+97

DEFC       kPixelChg =       kE1BT+98

DEFC       kSendMBL =        kE1BT+99
DEFC       kRecvMBL =        kE1BT+100

DEFC       kBoxPlot =        kE1BT+101
DEFC       kBoxIcon =        kE1BT+102
DEFC       kCrossIcon =      kE1BT+103
DEFC       kDotIcon =        kE1BT+104

DEFC       kE2BT =           kE1BT+105

DEFC       kSeqential =      kE2BT
DEFC       kSimulG =         kE2BT+1
DEFC       kPolarG =         kE2BT+2
DEFC       kRectG =          kE2BT+3
DEFC       kCoordOn =        kE2BT+4
DEFC       kCoordOff =       kE2BT+5
DEFC       kDrawLine =       kE2BT+6
DEFC       kDrawDot =        kE2BT+7
DEFC       kAxisOn =         kE2BT+8
DEFC       kAxisOff =        kE2BT+9
DEFC       kGridOn =         kE2BT+10
DEFC       kGridOff =        kE2BT+11
DEFC       kLblOn =          kE2BT+12
DEFC       kLblOff =         kE2BT+13

DEFC       kL1 =             kE2BT+14
DEFC       kL2 =             kE2BT+15
DEFC       kL3 =             kE2BT+16
DEFC       kL4 =             kE2BT+17
DEFC       kL5 =             kE2BT+18
DEFC       kL6 =             kE2BT+19

;
;======================================================================
;           These keys are layed on top of existing keys to
;           enable localization in the inferential stats editor
;======================================================================
;
DEFC       kinfData =        kL1
DEFC       kinfStats =       kL1+1
DEFC       kinfYes =         kL1+2
DEFC       kinfNo =          kL1+3
DEFC       kinfCalc =        kL1+4
DEFC       kinfDraw =        kL1+5
DEFC       kinfAlt1ne =      kL1+6
DEFC       kinfAlt1lt =      kL1+7
DEFC       kinfAlt1gt =      kL1+8
DEFC       kinfAlt2ne =      kL1+9
DEFC       kinfAlt2lt =      kL1+10
DEFC       kinfAlt2gt =      kL1+11
DEFC       kinfAlt3ne =      kL1+12
DEFC       kinfAlt3lt =      kL1+13
DEFC       kinfAlt3gt =      kL1+14
DEFC       kinfAlt4ne =      kL1+15
DEFC       kinfAlt4lt =      kL1+16
DEFC       kinfAlt4gt =      kL1+17
DEFC       kinfAlt5ne =      kL1+18
DEFC       kinfAlt5lt =      kL1+19
DEFC       kinfAlt5gt =      kL1+20
DEFC       kinfAlt6ne =      kL1+21
DEFC       kinfAlt6lt =      kL1+22
DEFC       kinfAlt6gt =      kL1+23
;
;
DEFC       kMatA =           kE2BT+20
DEFC       kMatB =           kE2BT+21
DEFC       kMatC =           kE2BT+22
DEFC       kMatD =           kE2BT+23
DEFC       kMatE =           kE2BT+24

DEFC       kXmin =           kE2BT+25
DEFC       kXmax =           kE2BT+26
DEFC       kXscl =           kE2BT+27
DEFC       kYmin =           kE2BT+28
DEFC       kYmax =           kE2BT+29
DEFC       kYscl =           kE2BT+30
DEFC       kTmin =           kE2BT+31
DEFC       kTmax =           kE2BT+32
DEFC       kTStep =          kE2BT+33
DEFC       kOmin =           kE2BT+34
DEFC       kOmax =           kE2BT+35
DEFC       kOStep =          kE2BT+36
DEFC       ku0 =             kE2BT+37
DEFC       kv0 =             kE2BT+38
DEFC       knMin =           kE2BT+39
DEFC       knMax =           kE2BT+40
DEFC       kDeltaY =         kE2BT+41
DEFC       kDeltaX =         kE2BT+42

DEFC       kZXmin =          kE2BT+43
DEFC       kZXmax =          kE2BT+44
DEFC       kZXscl =          kE2BT+45
DEFC       kZYmin =          kE2BT+46
DEFC       kZYmax =          kE2BT+47
DEFC       kZYscl =          kE2BT+48
DEFC       kZTmin =          kE2BT+49
DEFC       kZTmax =          kE2BT+50
DEFC       kZTStep =         kE2BT+51
DEFC       kZOmin =          kE2BT+52
DEFC       kZOmax =          kE2BT+53
DEFC       kZOStep =         kE2BT+54
DEFC       kZu0 =            kE2BT+55
DEFC       kZv0 =            kE2BT+56
DEFC       kZnMin =          kE2BT+57
DEFC       kZnMax =          kE2BT+58

DEFC       kDelLast =        kE2BT+59
DEFC       kSinReg =         kE2BT+60
DEFC       kConstE =         kE2BT+61

DEFC       kPic1 =           kE2BT+62
DEFC       kPic2 =           kE2BT+63
DEFC       kPic3 =           kE2BT+64

DEFC       kDelVar =         kE2BT+65
DEFC       kGetCalc =        kE2BT+66
DEFC       kRealM =          kE2BT+67
DEFC       kPolarM =         kE2BT+68
DEFC       kRectM =          kE2BT+69
DEFC       kuv =             kE2BT+70    ; U vs V
DEFC       kvw =             kE2BT+71    ; V vs W
DEFC       kuw =             kE2BT+72    ; U vs W
DEFC       kFinPMTend =      kE2BT+73
DEFC       kFinPMTbeg =      kE2BT+74
;
DEFC       kGraphStyle =     kE2BT+75
;
DEFC       kExprOn =         kE2BT+76
DEFC       kExprOff =        kE2BT+77
DEFC       kStatA =          kE2BT+78
DEFC       kStatB =          kE2BT+79
DEFC       kStatC =          kE2BT+80
DEFC       kCorr =           kE2BT+81
DEFC       kStatD =          kE2BT+82
DEFC       kStatE =          kE2BT+83
DEFC       kRegEq =          kE2BT+84
DEFC       kMinX =           kE2BT+85
DEFC       kQ1 =             kE2BT+86
DEFC       kMD =             kE2BT+87
DEFC       kQ3 =             kE2BT+88
DEFC       kMaxX =           kE2BT+89
DEFC       kStatX1 =         kE2BT+90
DEFC       kStatY1 =         kE2BT+91
DEFC       kStatX2 =         kE2BT+92
DEFC       kStatY2 =         kE2BT+93
DEFC       kStatX3 =         kE2BT+94
DEFC       kStatY3 =         kE2BT+95
DEFC       kTblMin =         kE2BT+96
DEFC       kTblStep =        kE2BT+97
DEFC       kSetupLst =       kE2BT+98
DEFC       kClrAllLst =      kE2BT+99
DEFC       kLogistic =       kE2BT+100
DEFC       kZTest =          kE2BT+101
DEFC       kTTest =          kE2BT+102
DEFC       k2SampZTest =     kE2BT+103
DEFC       k2SampTTest =     kE2BT+104
DEFC       k1PropZTest =     kE2BT+105
DEFC       k2PropZTest =     kE2BT+106
DEFC       kChiTest =        kE2BT+107
DEFC       k2SampFTest =     kE2BT+108
DEFC       kZIntVal =        kE2BT+109
DEFC       kTIntVal =        kE2BT+110
DEFC       k2SampTInt =      kE2BT+111
DEFC       k2SampZInt =      kE2BT+112
DEFC       k1PropZInt =      kE2BT+113
DEFC       k2PropZInt =      kE2BT+114
DEFC       kDNormal =        kE2BT+115
DEFC       kInvNorm =        kE2BT+116
DEFC       kDT =             kE2BT+117
DEFC       kChi =            kE2BT+118
DEFC       kDF =             kE2BT+119
DEFC       kBinPDF =         kE2BT+120
DEFC       kBinCDF =         kE2BT+121
DEFC       kPoiPDF =         kE2BT+122
DEFC       kPoiCDF =         kE2BT+123
DEFC       kun =             kE2BT+124
DEFC       kvn =             kE2BT+125
DEFC       kwn =             kE2BT+126
DEFC       kRecn =           kE2BT+127
DEFC       kPlotStart =      kE2BT+128
DEFC       kZPlotStart =     kE2BT+129   ; recursion n
DEFC       kXFact =          kE2BT+130   ; PlotStart
DEFC       kYFact =          kE2BT+131   ; ZPlotStart
DEFC       kANOVA =          kE2BT+132   ; XFact
DEFC       kMaxY =           kE2BT+133   ; YFact
DEFC       kWebOn =          kE2BT+134   ; MinY
DEFC       kWebOff =         kE2BT+135   ; MaxY
DEFC       kTblInput =       kE2BT+136   ; WEB ON
DEFC       kGeoPDF =         kE2BT+137   ; WEB OFF
DEFC       kGeoCDF =         kE2BT+138   ; WEB OFF
DEFC       kShadeNorm =      kE2BT+139
DEFC       kShadeT =         kE2BT+140
DEFC       kShadeChi =       kE2BT+141
DEFC       kShadeF =         kE2BT+142
DEFC       kPlotStep =       kE2BT+143
DEFC       kZPlotStep =      kE2BT+144
DEFC       kLinRegtTest =    kE2BT+145
DEFC	  KMGT =		kE2BT+146   ; VERT SPLIT
DEFC       kSelectA =        kE2BT+147
DEFC       kZFitA =          kE2BT+148
DEFC       kE2BT_End =       kZFitA
;
;
;======================================================================
;           More 2 Byte Keys 
;======================================================================

DEFC       kE2BT2 =		0

DEFC       kGDB1 =		kE2BT2
DEFC       kGDB2 =		kE2BT2+1
DEFC       kGDB3 =		kE2BT2+2
DEFC       kY1 =		kE2BT2+3
DEFC       kY2 =		kE2BT2+4
DEFC       kY3 =		kE2BT2+5
DEFC       kY4 =		kE2BT2+6
DEFC       kY5 =		kE2BT2+7
DEFC       kY6 =		kE2BT2+8
DEFC       kY7 =		kE2BT2+9
DEFC       kY8 =		kE2BT2+10
DEFC       kY9 =		kE2BT2+11
DEFC       kY0 =		kE2BT2+12
DEFC       kX1T =		kE2BT2+13
DEFC       kY1T =		kE2BT2+14
DEFC       kX2T =		kE2BT2+15
DEFC       kY2T =		kE2BT2+16
DEFC       kX3T =		kE2BT2+17
DEFC       kY3T =		kE2BT2+18
DEFC       kX4T =		kE2BT2+19
DEFC       kY4T =		kE2BT2+20
DEFC       kX5T =		kE2BT2+21
DEFC       kY5T =		kE2BT2+22
DEFC       kX6T =		kE2BT2+23
DEFC       kY6T =		kE2BT2+24
DEFC       kR1 =		kE2BT2+25
DEFC       kR2 =		kE2BT2+26
DEFC       kR3 =		kE2BT2+27
DEFC       kR4 =		kE2BT2+28
DEFC       kR5 =		kE2BT2+29
DEFC       kR6 =		kE2BT2+30
DEFC       kGDB4 =		kE2BT2+31
DEFC       kGDB5 =		kE2BT2+32
DEFC       kGDB6 =		kE2BT2+33
DEFC       kPic4 =		kE2BT2+34
DEFC       kPic5 =		kE2BT2+35
DEFC       kPic6 =		kE2BT2+36
DEFC       kGDB7 =		kE2BT2+37
DEFC       kGDB8 =		kE2BT2+38
DEFC       kGDB9 =		kE2BT2+39
DEFC       kGDB0 =		kE2BT2+40
DEFC       kPic7 =		kE2BT2+41
DEFC       kPic8 =		kE2BT2+42
DEFC       kPic9 =		kE2BT2+43
DEFC       kPic0 =		kE2BT2+44
DEFC       kStatN =		kE2BT2+45
DEFC       kXMean =		kE2BT2+46
DEFC       kConj =		kE2BT2+47
DEFC       kReal =		kE2BT2+48
DEFC       kFAngle =		kE2BT2+49
DEFC       kLCM =		kE2BT2+50
DEFC       kGCD =		kE2BT2+51
DEFC       kRandInt =	kE2BT2+52
DEFC       kRandNorm =	kE2BT2+53
DEFC       kToPolar =	kE2BT2+54
DEFC       kToRect =		kE2BT2+55
DEFC       kYMean =		kE2BT2+56
DEFC       kStdX =		kE2BT2+57
DEFC       kStdX1 =		kE2BT2+58
DEFC       kw0 =		kE2BT2+59
DEFC       kMatF =		kE2BT2+60
DEFC       kMatG =		kE2BT2+61
DEFC       kMatRH =		kE2BT2+62
DEFC       kMatI =		kE2BT2+63
DEFC       kMatJ =		kE2BT2+64
DEFC       kYMean1 =		kE2BT2+65
DEFC       kStdY =		kE2BT2+66
DEFC       kStdY1 =		kE2BT2+67
DEFC       kMatToLst =	kE2BT2+68
DEFC       kLstToMat =	kE2BT2+69
DEFC       kCumSum =		kE2BT2+70
DEFC       kDeltaLst =	kE2BT2+71
DEFC       kStdDev =		kE2BT2+72
DEFC       kVariance =	kE2BT2+73
DEFC       kLength =		kE2BT2+74
DEFC       kEquToStrng =	kE2BT2+75
DEFC       kStrngToEqu =	kE2BT2+76
DEFC       kExpr =		kE2BT2+77
DEFC       kSubStrng =	kE2BT2+78
DEFC       kInStrng =	kE2BT2+79
DEFC       kStr1 =		kE2BT2+80
DEFC       kStr2 =		kE2BT2+81
DEFC       kStr3 =		kE2BT2+82
DEFC       kStr4 =           kE2BT2+83
DEFC       kStr5 =           kE2BT2+84
DEFC       kStr6 =           kE2BT2+85
DEFC       kStr7 =           kE2BT2+86
DEFC       kStr8 =           kE2BT2+87
DEFC       kStr9 =           kE2BT2+88
DEFC       kStr0 =           kE2BT2+89
DEFC       kFinN =           kE2BT2+90
DEFC       kFinI =           kE2BT2+91
DEFC       kFinPV =          kE2BT2+92
DEFC       kFinPMT =         kE2BT2+93
DEFC       kFinFV =          kE2BT2+94
DEFC       kFinPY =          kE2BT2+95
DEFC       kFinCY =          kE2BT2+96
DEFC       kFinFPMT =        kE2BT2+97
DEFC       kFinFI =          kE2BT2+98
DEFC       kFinFPV =         kE2BT2+99
DEFC       kFinFN =          kE2BT2+100
DEFC       kFinFFV =         kE2BT2+101
DEFC       kFinNPV =         kE2BT2+102
DEFC       kFinIRR =         kE2BT2+103
DEFC       kFinBAL =         kE2BT2+104
DEFC       kFinPRN =         kE2BT2+105
DEFC       kFinINT =         kE2BT2+106
DEFC       kSumX =           kE2BT2+107
DEFC       kSumX2 =          kE2BT2+108
DEFC       kFinToNom =       kE2BT2+109
DEFC       kFinToEff =       kE2BT2+110
DEFC       kFinDBD =         kE2BT2+111
DEFC       kStatVP =         kE2BT2+112
DEFC       kStatZ =          kE2BT2+113
DEFC       kStatT =          kE2BT2+114
DEFC       kStatChi =        kE2BT2+115
DEFC       kStatF =          kE2BT2+116
DEFC       kStatDF =         kE2BT2+117
DEFC       kStatPhat =       kE2BT2+118
DEFC       kStatPhat1 =      kE2BT2+119
DEFC       kStatPhat2 =      kE2BT2+120
DEFC       kStatMeanX1 =     kE2BT2+121
DEFC       kStatMeanX2 =     kE2BT2+122
DEFC       kStatStdX1 =      kE2BT2+123
DEFC       kStatStdX2 =      kE2BT2+124
DEFC       kStatStdXP =      kE2BT2+125
DEFC       kStatN1 =         kE2BT2+126
DEFC       kStatN2 =         kE2BT2+127
DEFC       kStatLower =      kE2BT2+128
DEFC       kStatUpper =      kE2BT2+129
DEFC       kuw0 =            kE2BT2+130
DEFC       kImag =           kE2BT2+131
DEFC       kSumY =           kE2BT2+132
DEFC       kXres =           kE2BT2+133
DEFC       kStat_s =         kE2BT2+134
DEFC       kSumY2 =          kE2BT2+135
DEFC       kSumXY =          kE2BT2+136
DEFC       kuXres =          kE2BT2+137
DEFC       kModBox =		kE2BT2+138
DEFC       kNormProb =	kE2BT2+139
DEFC       kNormalPDF =      kE2BT2+140
DEFC       kTPDF =           kE2BT2+141
DEFC       kChiPDF =         kE2BT2+142
DEFC       kFPDF =           kE2BT2+143
DEFC       kMinY =           kE2BT2+144   ; MinY
DEFC       kRandBin =        kE2BT2+145
DEFC       kRef =            kE2BT2+146
DEFC       kRRef =           kE2BT2+147
DEFC       kLRSqr =          kE2BT2+148
DEFC       kBRSqr =          kE2BT2+149
DEFC       kDiagOn =         kE2BT2+150
DEFC       kDiagOff =        kE2BT2+151
DEFC       kun1 =            kE2BT2+152   ; FOR RCL USE WHEN GOTTEN FROM 82
DEFC       kvn1 =            kE2BT2+153   ; FOR RCL USE WHEN GOTTEN FROM 82
;
DEFC	k83_00End =       kvn1            ;end of original keys...
DEFC     kArchive =        k83_00End + 1
DEFC     kUnarchive =      k83_00End + 2
DEFC     kAsm =            k83_00End + 3   ; Asm(
DEFC     kAsmPrgm =        k83_00End + 4   ; AsmPrgm
DEFC     kAsmComp =        k83_00End + 5   ; AsmComp(
;
DEFC       kcapAAcute =	k83_00End + 6
DEFC       kcapAGrave =	k83_00End + 7
DEFC       kcapACaret =	k83_00End + 8
DEFC       kcapADier =	k83_00End + 9
DEFC       kaAcute =		k83_00End + 10
DEFC       kaGrave =		k83_00End + 11
DEFC       kaCaret =		k83_00End + 12
DEFC       kaDier =		k83_00End + 13
DEFC       kcapEAcute =	k83_00End + 14
DEFC       kcapEGrave =	k83_00End + 15
DEFC       kcapECaret =	k83_00End + 16
DEFC       kcapEDier =	k83_00End + 17
DEFC       keAcute =		k83_00End + 18
DEFC       keGrave =		k83_00End + 19
DEFC       keCaret =		k83_00End + 20
DEFC       keDier =		k83_00End + 21
DEFC       kcapIAcute =	k83_00End + 22
DEFC       kcapIGrave =	k83_00End + 23
DEFC       kcapICaret =	k83_00End + 24
DEFC       kcapIDier =	k83_00End + 25
DEFC       kiAcute =		k83_00End + 26
DEFC       kiGrave =		k83_00End + 27
DEFC       kiCaret =		k83_00End + 28
DEFC       kiDier =		k83_00End + 29
DEFC       kcapOAcute =	k83_00End + 30
DEFC       kcapOGrave =	k83_00End + 31
DEFC       kcapOCaret =	k83_00End + 32
DEFC       kcapODier =	k83_00End + 33
DEFC       koAcute =		k83_00End + 34
DEFC       koGrave =		k83_00End + 35
DEFC       koCaret =		k83_00End + 36
DEFC       koDier =		k83_00End + 37
DEFC       kcapUAcute =	k83_00End + 38
DEFC       kcapUGrave =	k83_00End + 39
DEFC       kcapUCaret =	k83_00End + 40
DEFC       kcapUDier =	k83_00End + 41
DEFC       kuAcute =		k83_00End + 42
DEFC       kuGrave =		k83_00End + 43
DEFC       kuCaret =		k83_00End + 44
DEFC       kuDier =		k83_00End + 45
DEFC       kcapCCed =	k83_00End + 46
DEFC       kcCed =		k83_00End + 47
DEFC       kcapNTilde =	k83_00End + 48
DEFC       knTilde =		k83_00End + 49
DEFC       kaccent =		k83_00End + 50
DEFC       kgrave =		k83_00End + 51
DEFC       kdieresis =	k83_00End + 52
DEFC       kquesDown =	k83_00End + 53
DEFC       kexclamDown =     k83_00End + 54
DEFC       kalpha =          k83_00End + 55
DEFC      kbeta =           k83_00End +  56
DEFC      kgamma =          k83_00End +  57
DEFC      kcapDelta =       k83_00End +  58
DEFC      kdelta =          k83_00End +  59
DEFC      kepsilon =        k83_00End +  60
DEFC      klambda =         k83_00End +  61
DEFC      kmu =             k83_00End +  62
DEFC      kpi2 =            k83_00End +  63
DEFC      krho =            k83_00End +  64
DEFC      kcapSigma =       k83_00End +  65
DEFC      ksigma =          k83_00End +  66
DEFC      ktau =            k83_00End +  67
DEFC      kphi =            k83_00End +  68
DEFC      kcapOmega =       k83_00End +  69
DEFC      kphat =           k83_00End +  70
DEFC      kchi2 =           k83_00End +  71
DEFC      kstatF2 =         k83_00End +  72
DEFC     kLa =		k83_00End + 73
DEFC     kLb =		k83_00End + 74
DEFC     kLc =		k83_00End + 75
DEFC     kLd =		k83_00End + 76
DEFC     kLe =		k83_00End + 77
DEFC     kLf =		k83_00End + 78
DEFC     kLg =		k83_00End + 79
DEFC     kLh =		k83_00End + 80
DEFC     kLi =		k83_00End + 81
DEFC     kLj =		k83_00End + 82
DEFC     kLk =		k83_00End + 83
DEFC     kLl =		k83_00End + 84
DEFC     kLm =		k83_00End + 85
DEFC    kLsmalln =	k83_00End +  86
DEFC    kLo =		k83_00End +  87
DEFC    kLp =		k83_00End +  88
DEFC    kLq =		k83_00End +  89
DEFC    kLsmallr =	k83_00End +  90
DEFC    kLs =		k83_00End +  91
DEFC    kLt =		k83_00End +  92
DEFC    kLu =		k83_00End +  93
DEFC    kLv =		k83_00End +  94
DEFC    kLw =		k83_00End +  95
DEFC    kLx =		k83_00End +  96
DEFC    kLy =		k83_00End +  97
DEFC    kLz =		k83_00End +  98
DEFC  kGarbageC =	k83_00End +  99 ; GarbageCollect
;
DEFC     kE2BT2_End =	kGarbageC
;
;======================================================================
;           TI-83 Plus Context Equates
;======================================================================
;
DEFC     cxCmd =           kQuit                   ;home screen
DEFC     cxMatEdit =       kMatrixEd               ;matrix editor
DEFC     cxPrgmEdit =      kPrgmEd                 ;program editor
DEFC     cxEquEdit =       kYequ                   ;equation editor
DEFC     cxGrRange =       kWindow                 ;graph range editor
DEFC     cxGrZfact =       kZFactEd                ;graph zoom factors editor
DEFC     cxGraph =         kGraph                  ;graph mode
DEFC     cxStatEdit =      kStatEd                 ;statistics list editor
DEFC     cxPrgmInput =     kPrgmInput              ;programmed input
DEFC     cxError =         kError                  ;error handler
DEFC     cxLinkIO =        kLinkIO                 ;LINK I/O interface
DEFC     cxMem =           kResetMem               ;reset memory
DEFC     cxDefMem =        kResetDef               ;reset default
DEFC     cxRAMApp =        kChkRAM                 ;RAM usage screen
DEFC     cxMode =          kMode                   ;mode settings screen
DEFC     cxErase =         kDelMem                 ;memory erase
DEFC     cxPrgmCreate =    kPrgmCr                 ;PROGRAM CREATE
DEFC     cxTableEditor =   kTable                  ;TABLE EDITOR
DEFC     cxTableSet =      kTblSet                 ;TABLE SET UP
DEFC     cxStatPlot =      kStatP                  ;STAT PLOTS
DEFC	cxInfStat =	kInfStat		;Inferential Statistic
DEFC     cxFormat =        kFormat                 ;FORMAT CONTEXT
DEFC     cxSolveTVM =      kSolveTVM               ;Solve TVM
DEFC     cxSolveRoot =     kSolveRoot              ;Solve Root
DEFC     lastOldApp =      kExtApps                ;external applications
DEFC     cxextapps =       kExtApps
DEFC     cxNewApps =       kNewApps                ;new cerberus applications
DEFC     cxGroup =         cxNewApps+0             ;1st new app.
DEFC     cxUnGroup =       cxNewApps+1             ;2nd new app.
DEFC     lastNewApp =      cxUnGroup               ;last new app for this ver

;
;======================================================================
;           Scan Code Equates
;======================================================================;
DEFC	skDown =          $01
DEFC	skLeft =          $02
DEFC	skRight =         $03
DEFC	skUp =            $04
DEFC	skEnter =         $09
DEFC	skAdd =           $0A
DEFC	skSub =           $0B
DEFC	skMul =           $0C
DEFC	skDiv =           $0D
DEFC	skPower =         $0E
DEFC	skClear =         $0F
DEFC	skChs =           $11
DEFC	sk3 =             $12
DEFC	sk6 =             $13
DEFC	sk9 =             $14
DEFC	skRParen =        $15
DEFC	skTan =           $16
DEFC	skVars =          $17
DEFC	skDecPnt =        $19
DEFC	sk2 =             $1A
DEFC	sk5 =             $1B
DEFC	sk8 =             $1C
DEFC	skLParen =        $1D
DEFC	skCos =           $1E
DEFC	skPrgm =          $1F
DEFC	skStat =          $20
DEFC	sk0 =             $21
DEFC	sk1 =             $22
DEFC	sk4 =             $23
DEFC	sk7 =             $24
DEFC	skComma =         $25
DEFC	skSin =           $26
DEFC	skMatrix =        $27
DEFC	skGraphvar =      $28
DEFC	skStore =         $2A
DEFC	skLn =            $2B
DEFC	skLog =           $2C
DEFC	skSquare =        $2D
DEFC	skRecip =         $2E
DEFC	skMath =          $2F
DEFC	skAlpha =         $30
DEFC	skGraph =         $31
DEFC	skTrace =         $32
DEFC	skZoom =          $33
DEFC	skWindow =        $34
DEFC	skYEqu =          $35
DEFC	sk2nd =           $36
DEFC	skMode =          $37
DEFC	skDel =           $38
;
;======================================================================
;           Tokens
;======================================================================
;
DEFC       EOSSTART =        0
;
;
;   DISPLAY CONVERSIONS COME IMMEDIATELY BEFORE 'TSTORE'
;
DEFC     DCONV =   $01
;
DEFC       tToDMS =          DCONV       ; $01
DEFC       tToDEC =          DCONV+1     ; $02
DEFC       tToAbc =          DCONV+2     ; $03    > A b/c
;
DEFC       tStore =          DCONV+3     ; $04 Lstore                01
;
DEFC       tBoxPlot =        $05
;
DEFC       BRACKS =          $06
;
DEFC       tLBrack =         BRACKS      ; $06 '['
DEFC       tRBrack =         BRACKS+1    ; $07 ']'
DEFC       tLBrace =         BRACKS+2    ; $08 '{'
DEFC       tRBrace =         BRACKS+3    ; $09 '}'
;
DEFC       tPOST1 =          BRACKS+4
;
DEFC       tFromRad =        tPOST1       ; $0A Lradian
DEFC       tFromDeg =        tPOST1+1     ; $0B Ldegree
DEFC       tRecip =          tPOST1+2     ; $0C Linverse
DEFC       tSqr =            tPOST1+3     ; $0D Lsquare
DEFC       tTrnspos =        tPOST1+4     ; $0E Ltranspose
DEFC       tCube =           tPOST1+5     ; $0F '^3'
;
DEFC       tLParen =         $10         ; 10h '('
DEFC       tRParen =         $11         ; 11h ')'
;
;
DEFC       IMUN =            $12
;
DEFC       tRound =          IMUN        ; $12 'round'
DEFC       tPxTst =          IMUN+1      ; $13 'PXL-TEST'
DEFC       tAug =            IMUN+2      ; $14 'aug'
DEFC       tRowSwap =        IMUN+3      ; $15 'rSwap'
DEFC       tRowPlus =        IMUN+4      ; $16 'rAdd'
DEFC       tmRow =           IMUN+5      ; $17 'multR'
DEFC       tmRowPlus =       IMUN+6      ; $18 'mRAdd'
DEFC       tMax =            IMUN+7      ; $19 'max'
DEFC       tMin =            IMUN+8      ; $1A 'min'
DEFC       tRToPr =          IMUN+9      ; $1B 'R>Pr
DEFC       tRToPo =          IMUN+10     ; $1C 'R>Po
DEFC       tPToRx =          IMUN+11     ; $1D 'P>Rx
DEFC       tPToRy =          IMUN+12     ; $1E 'P>Ry
DEFC       tMedian =         IMUN+13     ; $1F 'MEDIAN
DEFC       tRandM =          IMUN+14     ; $20 'randM'
DEFC       tMean =           IMUN+15     ; $21
DEFC       tRoot =           IMUN+16     ; $22 'ROOT'
DEFC       tSeries =         IMUN+17     ; $23 'seq'
DEFC       tFnInt =          IMUN+18     ; $24 'fnInt'
DEFC       tNDeriv =         IMUN+19     ; $25 'fnIr'
DEFC       tEvalF =          IMUN+20     ; $26
DEFC       tFmin =           IMUN+21     ; $27
DEFC       tFmax =           IMUN+22     ; $28
;
DEFC       tEOSEL =          IMUN+23
;
DEFC       tSpace =          tEOSEL       ; $29   ' '
DEFC       tString =         tEOSEL+1     ; $2A  '"'
DEFC       tComma =          tEOSEL+2     ; $2B  ','
;
;
DEFC       tii =             $2C         ; i
;
;======================================================================
;           Postfix Functions
;======================================================================
;
DEFC       tPost =           $2D
;
DEFC       tFact =           tPost       ; $2D '!'
;
DEFC       tCubicR =         $2E
DEFC       tQuartR =         $2F

;======================================================================
;           Number Tokens 
;======================================================================
;
DEFC       NUMS =            $30
;
DEFC       t0 =              NUMS        ; $30
DEFC       t1 =              NUMS+1      ; $31
DEFC       t2 =              NUMS+2      ; $32
DEFC       t3 =              NUMS+3      ; $33
DEFC       t4 =              NUMS+4      ; $34
DEFC       t5 =              NUMS+5      ; $35
DEFC       t6 =              NUMS+6      ; $36
DEFC       t7 =              NUMS+7      ; $37
DEFC       t8 =              NUMS+8      ; $38
DEFC       t9 =              NUMS+9      ; $39
DEFC       tDecPt =          NUMS+10     ; $3A
DEFC       tee =             NUMS+11     ; $3B
;
;======================================================================
;            BINARY OP
;======================================================================
;
DEFC       tOr =             $3C         ; 3Ch  '_or_'
DEFC       tXor =            $3D         ; 3Dh
;
DEFC       tColon =          $3E         ; 3Eh ':'
DEFC       tEnter =          $3F         ; 3Fh  Lenter
;
DEFC       tAnd =            $40         ; 40h  '_and_'       
;
;======================================================================
;            LETTER TOKENS   
;======================================================================

;
DEFC       LET =             $41
;
DEFC       tA =              LET         ; $41
DEFC       tB =              LET+1       ; $42
DEFC       tC =              LET+2       ; $43
DEFC       tD =              LET+3       ; $44
DEFC       tE =              LET+4       ; $45
DEFC       tF =              LET+5       ; $46
DEFC       tG =              LET+6       ; $47
DEFC       tH =              LET+7       ; $48
DEFC       tI =              LET+8       ; $49
DEFC       tJ =              LET+9       ; $4A
DEFC       tK =              LET+10      ; $4B
DEFC       tL =              LET+11      ; $4C
DEFC       tM =              LET+12      ; $4D
DEFC       tN =              LET+13      ; $4E
DEFC       tO =              LET+14      ; $4F
DEFC       tP =              LET+15      ; $50
DEFC       tQ =              LET+16      ; $51
DEFC       tR =              LET+17      ; $52
DEFC       tS =              LET+18      ; $53
DEFC       tT =              LET+19      ; $54
DEFC       tU =              LET+20      ; $55
DEFC       tV =              LET+21      ; $56
DEFC       tW =              LET+22      ; $57
DEFC       tX =              LET+23      ; $58
DEFC       tY =              LET+24      ; $59
DEFC       tZ =              LET+25      ; $5A
DEFC       tTheta =          LET+26      ; $5B
;
;======================================================================
;   THESE VAR TOKENS ARE 1ST OF A DOUBLE TOKEN 
;======================================================================

;
DEFC     vToks =   LET+27    ;
;
;       USER MATRIX TOKEN, 2ND TOKEN NEEDED FOR NAME
;
DEFC       tVarMat =         vToks       ; $5C
;
;       USER LIST TOKEN, 2ND TOKEN NEEDED FOR NAME
;
DEFC       tVarLst =         vToks+1     ; $5D
;
;       USER EQUATION TOKEN, 2ND TOKEN NEEDED FOR NAME
;
DEFC       tVarEqu =         vToks+2     ; $5E
DEFC       tProg =           vToks+3     ; $5F
;
;       USER PICT TOKEN, 2ND TOKEN NEEDED FOR NAME
;
DEFC       tVarPict =        vToks+4     ; $60
;
;       USER GDB TOKEN, 2ND TOKEN NEEDED FOR NAME
;
DEFC       tVarGDB =         vToks+5     ; $61
DEFC       tVarOut =         vToks+6     ; $62
DEFC       tVarSys =         vToks+7     ; $63
;
;
;======================================================================
;            Mode Setting Commands
;======================================================================

;
DEFC       MODESA =          vToks+8     ; $64
;
DEFC       tRad =            MODESA      ; $64 'Radian'
DEFC       tDeg =            MODESA+1    ; $65 'Degree'
DEFC       tNormF =          MODESA+2    ; $66 'Normal'
DEFC       tSci =            MODESA+3    ; $67 'Sci'
DEFC       tEng =            MODESA+4    ; $68 'Eng'
DEFC       tFloat =          MODESA+5    ; $69 'Float'
;
DEFC       CMPS =            $6A
;
DEFC       tEQ =             CMPS        ; $6A '=='
DEFC       tLT =             CMPS+1      ; $6B '<'
DEFC       tGT =             CMPS+2      ; $6C '>'
DEFC       tLE =             CMPS+3      ; $6D LLE
DEFC       tGE =             CMPS+4      ; $6E LGE
DEFC       tNE =             CMPS+5      ; $6F LNE
;
;======================================================================
;            BINARY OP
;======================================================================
;
DEFC       tAdd =            $70         ; 70h '+'
DEFC       tSub =            $71         ; 71h '-'
DEFC       tAns =            $72         ; 72h
;
;======================================================================
;            Mode Setting Commands
;======================================================================
;
DEFC       MODES =           $73
;
DEFC       tFix =            MODES       ; $73 'Fix_'
DEFC       tSplitOn =        MODES+1     ; $74
DEFC       tFullScreen =     MODES+2     ; $75
DEFC       tStndrd =         MODES+3     ; $76 'Func'
DEFC       tParam =          MODES+4     ; $77 'Param'
DEFC       tPolar =          MODES+5     ; $78 'Pol'
DEFC       tSeqG =           MODES+6     ; $79
DEFC       tAFillOn =        MODES+7     ; $7A 'AUTO FILL ON
DEFC       tAFillOff =       MODES+8     ; $7B
DEFC       tACalcOn =        MODES+9     ; $7C
DEFC       tACalcOff =       MODES+10    ; $7D 'AutoFill OFF
;
;       GRAPH FORMAT TOKENS ARE 2 BYTE TOKENS
;
DEFC       tGFormat =        MODES+11    ; $7E
;
DEFC       tBoxIcon =        $7F
DEFC       tCrossIcon =      $80
DEFC       tDotIcon =        $81
;
;======================================================================
;            (More) BINARY OP
;======================================================================
;
DEFC       tMul =            $82         ; 82h  '*'
DEFC       tDiv =            $83         ; 83h  '/'
;
;======================================================================
;            SOME GRAPH COMMANDS
;======================================================================
;
DEFC       GRCMDS =          $84
;
DEFC       tTrace =          GRCMDS      ; $84 'Trace'
DEFC       tClDrw =          GRCMDS+1    ; $85 'ClDrw'
DEFC       tZoomStd =        GRCMDS+2    ; $86 'ZStd'
DEFC       tZoomtrg =        GRCMDS+3    ; $87 'Ztrg'
DEFC       tZoomBox =        GRCMDS+4    ; $88 'ZBOX'
DEFC       tZoomIn =         GRCMDS+5    ; $89 'ZIn'
DEFC       tZoomOut =        GRCMDS+6    ; $8A 'ZOut'
DEFC       tZoomSqr =        GRCMDS+7    ; $8B 'ZSqr'
DEFC       tZoomInt =        GRCMDS+8    ; $8C 'ZInt'
DEFC       tZoomPrev =       GRCMDS+9    ; $8D 'ZPrev'
DEFC       tZoomDec =        GRCMDS+10   ; $8E 'ZDecm'
DEFC       tZoomStat =       GRCMDS+11   ; $8F 'ZStat
DEFC       tUsrZm =          GRCMDS+12   ; $90 'ZRcl'
DEFC       tPrtScrn =        GRCMDS+13   ; $91 'PrtScrn'
DEFC       tZoomSto =        GRCMDS+14   ; $92  ZOOM STORE
DEFC       tText =           GRCMDS+15   ; $93
;
;======================================================================
;           BINARY OP  (Combination & Permutation)
;======================================================================
;
DEFC       tnPr =            GRCMDS+16   ; $94 '_nPr_'
DEFC       tnCr =            GRCMDS+17   ; $95 '_nCr_'
;
;======================================================================
;           MORE GRAPH COMMANDS
;======================================================================
;
DEFC       tYOn =            GRCMDS+18   ; $96 'FnOn_'
DEFC       tYOff =           GRCMDS+19   ; $97 'FnOff_'
DEFC       tStPic =          GRCMDS+20   ; $98 'StPic_'
DEFC       tRcPic =          GRCMDS+21   ; $99 'RcPic_'
DEFC       tStoDB =          GRCMDS+22   ; $9A 'StGDB_'
DEFC       tRclDB =          GRCMDS+23   ; $9B 'RcGDB_'
DEFC       tLine =           GRCMDS+24   ; $9C 'Line'
DEFC       tVert =           GRCMDS+25   ; $9D 'Vert_'
DEFC       tPtOn =           GRCMDS+26   ; $9E 'PtOn'
DEFC       tPtOff =          GRCMDS+27   ; $9F 'PtOff'
;
;======================================================================
;           TOKEN A0 CANNOT BE AN EOS FUNCTION
;           SINCE LOW MULT=A0 ALREADY
;======================================================================
;
DEFC       tPtChg =          GRCMDS+28   ; $A0 'PtChg'
DEFC       tPXOn =           GRCMDS+29   ; $A1
DEFC       tPXOff =          GRCMDS+30   ; $A2
DEFC       tPXChg =          GRCMDS+31   ; $A3
DEFC       tShade =          GRCMDS+32   ; $A4 'Shade'
DEFC       tCircl =          GRCMDS+33   ; $A5 'Circl'
DEFC       tHorz =           GRCMDS+34   ; $A6 'HORIZONTAL'
DEFC       tTanLn =          GRCMDS+35   ; $A7 'TanLn'
DEFC       tDrInv =          GRCMDS+36   ; $A8 'DrInv_'
DEFC       tDrawF =          GRCMDS+37   ; $A9 'DrawF_'
;
DEFC       tVarStrng =       $AA
;
;======================================================================
;           Functions with No Arguments                                    
;======================================================================
;
DEFC     NOARG =   $AB
;
DEFC       tRand =           NOARG       ; $AB 'rand'
DEFC       tPi =             NOARG+1     ; $AC  Lpi
DEFC       tGetKey =         NOARG+2     ; $AD 'getKy'
;
;
DEFC       tAPost =          tGetKey+1   ; APOSTROPHY
DEFC       tQuest =          tAPost+1    ; QUESTION MARK
;
;
DEFC     UNARY =   tQuest+1              ; $B0
;
DEFC       tChs =            UNARY       ; $B0
DEFC       tInt =            UNARY+1     ; $B1
DEFC       tAbs =            UNARY+2     ; $B2
DEFC       tDet =            UNARY+3     ; $B3
DEFC       tIdent =          UNARY+4     ; $B4
DEFC       tDim =            UNARY+5     ; $B5
DEFC       tSum =            UNARY+6     ; $B6
DEFC       tProd =           UNARY+7     ; $B7
DEFC       tNot =            UNARY+8     ; $B8
DEFC       tIPart =          UNARY+9     ; $B9
DEFC       tFPart =          UNARY+10    ; $BA
;
;
;======================================================================
;           NEW 2 BYTE TOKENS
;======================================================================
;
DEFC       t2ByteTok =       $BB         ;
;
;
DEFC     UNARYLR = UNARY+12
;
DEFC       tSqrt =           UNARYLR     ; $BC
DEFC       tCubRt =          UNARYLR+1   ; $BD
DEFC       tLn =             UNARYLR+2   ; $BE
DEFC       tExp =            UNARYLR+3   ; $BF
DEFC       tLog =            UNARYLR+4   ; $C0
DEFC       tALog =           UNARYLR+5   ; $C1
DEFC       tSin =            UNARYLR+6   ; $C2
DEFC       tASin =           UNARYLR+7   ; $C3
DEFC       tCos =            UNARYLR+8   ; $C4
DEFC       tACos =           UNARYLR+9   ; $C5
DEFC       tTan =            UNARYLR+10  ; $C6
DEFC       tATan =           UNARYLR+11  ; $C7
DEFC       tSinH =           UNARYLR+12  ; $C8
DEFC       tASinH =          UNARYLR+13  ; $C9
DEFC       tCoshH =          UNARYLR+14  ; $CA
DEFC       tACosH =          UNARYLR+15  ; $CB
DEFC       tTanH =           UNARYLR+16  ; $CC
DEFC       tATanH =          UNARYLR+17  ; $CD
; 
;======================================================================
;           SOME PROGRAMMING COMMANDS                                      
;======================================================================
;
DEFC     PROGTOK = UNARYLR+18
;
DEFC       tIf =             PROGTOK     ; $CE
DEFC       tThen =           PROGTOK+1   ; $CF
DEFC       tElse =           PROGTOK+2   ; $D0
DEFC       tWhile =          PROGTOK+3   ; $D1
DEFC       tRepeat =         PROGTOK+4   ; $D2
DEFC       tFor =            PROGTOK+5   ; $D3
DEFC       tEnd =            PROGTOK+6   ; $D4
DEFC       tReturn =         PROGTOK+7   ; $D5
DEFC       tLbl =            PROGTOK+8   ; $D6   'Lbl_'
DEFC       tGoto =           PROGTOK+9   ; $D7   'Goto_'
DEFC       tPause =          PROGTOK+10  ; $D8   'Pause_'
DEFC       tStop =           PROGTOK+11  ; $D9   'Stop'
DEFC       tISG =            PROGTOK+12  ; $DA   'IS>'
DEFC       tDSL =            PROGTOK+13  ; $DB   'DS<'
DEFC       tInput =          PROGTOK+14  ; $DC   'Input_'
DEFC       tPrompt =         PROGTOK+15  ; $DD   'Prompt_'
DEFC       tDisp =           PROGTOK+16  ; $DE   'Disp_'
DEFC       tDispG =          PROGTOK+17  ; $DF   'DispG'
;
DEFC       tOutput =         PROGTOK+18  ; $E0    'Outpt'
DEFC       tClLCD =          PROGTOK+19  ; $E1    'ClLCD'
DEFC       tConst =          PROGTOK+20  ; $E2    'Fill'
DEFC       tSortA =          PROGTOK+21  ; $E3    'sortA_'
DEFC       tSortD =          PROGTOK+22  ; $E4    'sortD_'
DEFC       tDispTab =        PROGTOK+23  ; $E5    'Disp Table
DEFC       tMenu =           PROGTOK+24  ; $E6    'Menu'
DEFC       tSendMBL =        PROGTOK+25  ; $E7    'SEND'
DEFC       tGetMBL =         PROGTOK+26  ; $E8    'GET'
;
;======================================================================
;           STAT PLOT COMMANDS                                             
;======================================================================
;
DEFC       statPCmd =        PROGTOK+27
;
DEFC       tPlotOn =         statPCmd    ; $E9     ' PLOTSON'
DEFC       tPlotOff =        statPCmd+1   ; $EA     ' PLOTSOFF
;
DEFC       tListName =       $EB        ; LIST DESIGNATOR
;
DEFC       tPlot1 =          $EC
DEFC       tPlot2 =          $ED
DEFC       tPlot3 =          $EE
;
DEFC       tUnused01 =       $EF        ;        available?
;
DEFC       tPower =          $F0        ;        '^'
DEFC       tXRoot =          $F1        ;        LsupX,Lroot

DEFC       STATCMD =         $F2
;
DEFC       tOneVar =         STATCMD     ; $F2    'OneVar_'
DEFC       tTwoVar =         STATCMD+1   ; $F3
DEFC       tLR =             STATCMD+2   ; $F4    'LinR(A+BX
DEFC       tLRExp =          STATCMD+3   ; $F5    'ExpR_'
DEFC       tLRLn =           STATCMD+4   ; $F6    'LnR_'
DEFC       tLRPwr =          STATCMD+5   ; $F7    'PwrR_'
DEFC       tMedMed =         STATCMD+6   ; $F8
DEFC       tQuad =           STATCMD+7   ; $F9
DEFC       tClrLst =         STATCMD+8   ; $FA    'CLEAR LIST
DEFC       tClrTbl =         STATCMD+9   ; $FB    CLEAR TABLE
DEFC       tHist =           STATCMD+10  ; $FC    'Hist_'
DEFC       txyLine =         STATCMD+11  ; $FD    'xyline_'
DEFC       tScatter =        STATCMD+12  ; $FE    'Scatter_'
DEFC       tLR1 =            STATCMD+13  ; $FF    'LINR(AX+B

;       
;======================================================================
;           2ND HALF OF GRAPH FORMAT TOKENS
;======================================================================
;           Format settings commands
;
DEFC       GFMT =            0
;
DEFC       tSeq =            GFMT        ; 'SeqG'
DEFC       tSimulG =         GFMT+1      ; 'SimulG'
DEFC       tPolarG =         GFMT+2      ; 'PolarGC'
DEFC       tRectG =          GFMT+3      ; 'RectGC'
DEFC       tCoordOn =        GFMT+4      ; 'CoordOn'
DEFC       tCoordOff =       GFMT+5      ; 'CoordOff'
DEFC       tDrawLine =       GFMT+6      ; 'DrawLine'
DEFC       tDrawDot =        GFMT+7      ; 'DrawDot'
DEFC       tAxisOn =         GFMT+8      ; 'AxesOn'
DEFC       tAxisOff =        GFMT+9      ; 'AxesOff'
DEFC       tGridOn =         GFMT+10     ; 'GridOn'
DEFC       tGridOff =        GFMT+11     ; 'GridOff'
DEFC       tLblOn =          GFMT+12     ; 'LabelOn'
DEFC       tLblOff =         GFMT+13     ; 'LabelOff'
DEFC       tWebOn =          GFMT+14     ; 'WebOn'
DEFC       tWebOff =         GFMT+15     ; 'WebOFF'
DEFC       tuv =             GFMT+16     ; U vs V
DEFC       tvw =             GFMT+17     ; V vs W
DEFC       tuw =             GFMT+18     ; U vs W
;
;======================================================================
;           2ND HALF OF USER MATRIX TOKENS                                 
;======================================================================
;
DEFC       tMatA =           $00         ; MAT A
DEFC       tMatB =           $01         ; MAT B
DEFC       tMatC =           $02         ; MAT C
DEFC       tMatD =           $03         ; MAT D
DEFC       tMatE =           $04         ; MAT E
DEFC       tMatF =           $05         ; MAT F
DEFC       tMatG =           $06         ; MAT G
DEFC       tMatH =           $07         ; MAT H
DEFC       tMatI =           $08         ; MAT I
DEFC       tMatJ =           $09         ; MAT J
;      
;======================================================================
;           2ND HALF OF USER LIST TOKENS
;======================================================================
;
DEFC       tL1 =             $00         ; LIST 1
DEFC       tL2 =             $01         ; LIST 2
DEFC       tL3 =             $02         ; LIST 3
DEFC       tL4 =             $03         ; LIST 4
DEFC       tL5 =             $04         ; LIST 5
DEFC       tL6 =             $05         ; LIST 6

;
;======================================================================
;           2ND HALF OF USER EQUATION TOKENS
;======================================================================
;
;       "Y" EQUATIONS HAVE BIT 4 SET
;
DEFC       tY1 =             $10         ; Y1
DEFC       tY2 =             $11         ; Y2
DEFC       tY3 =             $12         ; Y3
DEFC       tY4 =             $13         ; Y4
DEFC       tY5 =             $14         ; Y5
DEFC       tY6 =             $15         ; Y6
DEFC       tY7 =             $16         ; Y7
DEFC       tY8 =             $17         ; Y8
DEFC       tY9 =             $18         ; Y9
DEFC       tY0 =             $19         ; Y0
;
;       PARAM EQUATIONS HAVE BIT 5 SET
;
DEFC       tX1T =            $20         ; X1t
DEFC       tY1T =            $21         ; Y1t
DEFC       tX2T =            $22         ; X2t
DEFC       tY2T =            $23         ; Y2t
DEFC       tX3T =            $24         ; X3t
DEFC       tY3T =            $25         ; Y3t
DEFC       tX4T =            $26         ; X4t
DEFC       tY4T =            $27         ; Y4t
DEFC       tX5T =            $28         ; X5t
DEFC       tY5T =            $29         ; Y5t
DEFC       tX6T =            $2A         ; X6t
DEFC       tY6T =            $2B         ; Y6t
;
;       POLAR EQUATIONS HAVE BIT 6 SET
;
DEFC       tR1 =             $40         ; R1
DEFC       tR2 =             $41         ; R2
DEFC       tR3 =             $42         ; R3
DEFC       tR4 =             $43         ; R4
DEFC       tR5 =             $44         ; R5
DEFC       tR6 =             $45         ; R6
;
;       RECURSION EQUATIONS HAVE BIT 7 SET
;
DEFC       tun =             $80         ; Un
DEFC       tvn =             $81         ; Vn
DEFC       twn =             $82         ; Wn
;
;======================================================================
;           2ND HALF OF USER PICTURE TOKENS                                
;======================================================================
;
DEFC       tPic1 =           $00         ; PIC1
DEFC       tPic2 =           $01         ; PIC2
DEFC       tPic3 =           $02         ; PIC3
DEFC       tPic4 =           $03         ; PIC4
DEFC       tPic5 =           $04         ; PIC5
DEFC       tPic6 =           $05         ; PIC6
DEFC       tPic7 =           $06         ; PIC7
DEFC       tPic8 =           $07         ; PIC8
DEFC       tPic9 =           $08         ; PIC9
DEFC       tPic0 =           $09         ; PIC0
; 
;======================================================================
;           2ND HALF OF USER GRAPH DATABASE TOKENS                         
;======================================================================
;
DEFC       tGDB1 =           $00         ; GDB1
DEFC       tGDB2 =           $01         ; GDB2
DEFC       tGDB3 =           $02         ; GDB3
DEFC       tGDB4 =           $03         ; GDB4
DEFC       tGDB5 =           $04         ; GDB5
DEFC       tGDB6 =           $05         ; GDB6
DEFC       tGDB7 =           $06         ; GDB7
DEFC       tGDB8 =           $07         ; GDB8
DEFC       tGDB9 =           $08         ; GDB9
DEFC       tGDB0 =           $09         ; GDB0
;  
;======================================================================
;           2ND HALF OF STRING VARS                                        
;======================================================================
;
DEFC       tStr1 =           $00
DEFC       tStr2 =           $01
DEFC       tStr3 =           $02
DEFC       tStr4 =           $03
DEFC       tStr5 =           $04
DEFC       tStr6 =           $05
DEFC       tStr7 =           $06
DEFC       tStr8 =           $07
DEFC       tStr9 =           $08
DEFC       tStr0 =           $09

; 
;======================================================================
;           2ND HALF OF SYSTEM OUTPUT ONLY VARIABLES                       
;======================================================================
;
;
;   OPEN        EQU       $00
;
DEFC       tRegEq =          $01         ; REGRESSION EQUATION
;
DEFC       tStatN =          $02         ; STATISTICS N
;
DEFC       tXMean =          $03         ; X MEAN
DEFC       tSumX =           $04         ; SUM(X)
DEFC       tSumXSqr =        $05         ; SUM(X^2)
DEFC       tStdX =           $06         ; STANDARD DEV X
DEFC       tStdPX =          $07         ; STANDARD DEV POP X
DEFC       tMinX =           $08         ; Min X VALUE
DEFC       tMaxX =           $09         ; Max X VALUE
;
DEFC       tMinY =           $0A         ; Min Y VALUE
DEFC       tMaxY =           $0B         ; Max Y VALUE
DEFC       tYmean =          $0C         ; Y MEAN
DEFC       tSumY =           $0D         ; SUM(Y)
DEFC       tSumYSqr =        $0E         ; SUM(Y^2)
DEFC       tStdY =           $0F         ; STANDARD DEV Y
DEFC       tStdPY =          $10         ; STANDARD DEV POP Y
;
DEFC       tSumXY =          $11         ; SUM(XY)
DEFC       tCorr =           $12         ; CORRELATION
DEFC       tMedX =           $13         ; MED(X)
DEFC       tQ1 =             $14         ; 1ST QUADRANT OF X
DEFC       tQ3 =             $15         ; 3RD QUADRANT OF X
DEFC       tQuadA =          $16         ; 1ST TERM OF QUAD POLY REG/ Y-INT
DEFC       tQuadB =          $17         ; 2ND TERM OF QUAD POLY REG/ SLOPE
DEFC       tQuadC =          $18         ; 3RD TERM OF QUAD POLY REG
DEFC       tCubeD =          $19         ; 4TH TERM OF CUBIC POLY REG
DEFC       tQuartE =         $1A         ; 5TH TERM OF QUART POLY REG
DEFC       tMedX1 =          $1B         ; x1 FOR MED-MED
DEFC       tMedX2 =          $1C         ; x2 FOR MED-MED
DEFC       tMedX3 =          $1D         ; x3 FOR MED-MED
DEFC       tMedY1 =          $1E         ; y1 FOR MED-MED
DEFC       tMedY2 =          $1F         ; y2 FOR MED-MED
DEFC       tMedY3 =          $20         ; y3 FOR MED-MED
;
DEFC       tRecurn =		$21		; RECURSION N
DEFC       tStatP =          $22
DEFC       tStatZ =          $23
DEFC       tStatT =          $24
DEFC       tStatChi =        $25
DEFC       tStatF =          $26
DEFC       tStatDF =         $27
DEFC       tStatPhat =       $28
DEFC       tStatPhat1 =      $29
DEFC       tStatPhat2 =      $2A
DEFC       tStatMeanX1 =     $2B
DEFC       tStatStdX1 =      $2C
DEFC       tStatN1 =         $2D
DEFC       tStatMeanX2 =     $2E
DEFC       tStatStdX2 =      $2F
DEFC       tStatN2 =         $30
DEFC       tStatStdXP =      $31
DEFC       tStatLower =      $32
DEFC       tStatUpper =      $33
DEFC       tStat_s =         $34
DEFC       tLRSqr =          $35         ; r^2
DEFC       tBRSqr =          $36         ; R^2
;
;======================================================================
;       These next tokens are only used to access the data
;       they are display only and the user cannot access them at all
;======================================================================
;
DEFC     tF_DF =    $37       ; ANOFAV FACTOR DF
DEFC     tF_SS =    $38       ; ANOFAV FACTOR SS
DEFC     tF_MS =    $39       ; ANOFAV FACTOR MS
DEFC     tE_DF =    $3A       ; ANOFAV ERROR DF
DEFC     tE_SS =    $3B       ; ANOFAV ERROR SS
DEFC     tE_MS =    $3C       ; ANOFAV ERROR MS
;
;
;======================================================================
;           2ND HALF OF SYSTEM INPUT/OUTPUT VARIABLES
;======================================================================
;      SYSTEM VARIABLE EQUATES
;
DEFC  tuXscl =       0
DEFC  tuYscl =       1
DEFC  tXscl =        2
DEFC  tYscl =        3
DEFC  tRecuru0 =     4        ; U 1ST INITIAL COND
DEFC  tRecurv0 =     5        ; V 1ST INITIAL COND
DEFC  tun1 =         6        ; U(N-1)    ; NOT USED
DEFC  tvn1 =         7        ; V(N-1)    ; NOT USED
DEFC  tuRecuru0 =    8        ;
DEFC  tuRecurv0 =    9        ;
;
DEFC  tXmin =        $0A
DEFC  tXmax =        $0B
DEFC  tYmin =        $0C
DEFC  tYmax =        $0D
DEFC  tTmin =        $0E
DEFC  tTmax =        $0F
DEFC  tThetaMin =    $10
DEFC  tThetaMax =    $11
DEFC  tuXmin =       $12
DEFC  tuXmax =       $13
DEFC  tuYmin =       $14
DEFC  tuYmax =       $15
DEFC  tuThetMin =    $16
DEFC  tuThetMax =    $17
DEFC  tuTmin =       $18
DEFC  tuTmax =       $19
DEFC  tTblMin =      $1A
DEFC  tPlotStart =   $1B
DEFC  tuPlotStart =  $1C
DEFC  tnMax =        $1D
DEFC  tunMax =       $1E
DEFC  tnMin =        $1F
DEFC  tunMin =       $20
;
DEFC  tTblStep =	$21
DEFC  tTStep =		$22
DEFC  tThetaStep =	$23
DEFC  tuTStep =		$24
DEFC  tuThetStep =	$25
;
DEFC  tDeltaX =		$26
DEFC  tDeltaY =		$27
;
DEFC  tXFact =		$28
DEFC  tYFact =		$29
;
DEFC       tTblInput =       $2A
;
DEFC       tFinN =           $2B
DEFC       tFinI =           $2C
DEFC       tFinPV =          $2D
DEFC       tFinPMT =         $2E
DEFC       tFinFV =          $2F
DEFC       tFinPY =          $30
DEFC       tFinCY =          $31
;
DEFC       tRecurw0 =        $32         ; w0(1)
DEFC       tuRecurw0 =       $33
;
DEFC       tPlotStep =       $34
DEFC       tuPlotStep =      $35
;
DEFC       tXres =           $36
DEFC       tuXres =          $37
;
DEFC       tRecuru02 =       $38         ; u0(2)
DEFC       tuRecuru02 =      $39
DEFC       tRecurv02 =       $3C         ; v0(2)
DEFC       tuRecurv02 =      $3D
DEFC       tRecurw02 =       $3E         ; w0(2)
DEFC       tuRecurw02 =      $3F
;
;======================================================================
;           2nd byte of t2ByteTok tokens
;======================================================================
;
DEFC       tFinNPV =         $00         ;
DEFC       tFinIRR =         $01         ;
DEFC       tFinBAL =         $02         ;
DEFC       tFinPRN =         $03         ;
DEFC       tFinINT =         $04         ;
DEFC       tFinToNom =       $05         ;
DEFC       tFinToEff =       $06         ;
DEFC       tFinDBD =         $07         ;
DEFC       tLCM =            $08         ;
DEFC       tGCD =            $09         ;
DEFC       tRandInt =        $0A         ;
DEFC       tRandBin =        $0B         ;
DEFC       tSubStrng =       $0C         ;
DEFC       tStdDev =         $0D         ;
DEFC       tVariance =       $0E         ;
DEFC       tInStrng =        $0F         ;
DEFC       tDNormal =        $10         ;
DEFC       tInvNorm =        $11         ;
DEFC       tDT =             $12         ;
DEFC       tChI =            $13         ;
DEFC       tDF =             $14         ;
DEFC       tBINPDF =         $15         ;
DEFC       tBINCDF =         $16         ;
DEFC       tPOIPDF =         $17         ;
DEFC       tPOICDF =         $18         ;
DEFC       tGEOPDF =         $19         ;
DEFC       tGEOCDF =         $1A         ;
DEFC       tNormalPDF =      $1B         ;
DEFC       tTPDF =           $1C         ;
DEFC       tChiPDF =         $1D         ;
DEFC       tFPDF =           $1E         ;
DEFC       tRandNorm =       $1F         ;
DEFC       tFinFPMT =        $20         ;
DEFC       tFinFI =          $21         ;
DEFC       tFinFPV =         $22         ;
DEFC       tFinFN =          $23         ;
DEFC       tFinFFV =         $24         ;
DEFC       tConj =           $25         ;
DEFC       tReal =           $26         ;
DEFC       tImag =           $27         ;
DEFC       tAngle =          $28         ;
DEFC       tCumSum =         $29         ;
DEFC       tExpr =           $2A         ;
DEFC       tLength =         $2B         ;
DEFC       tDeltaLst =       $2C         ;
DEFC       tRef =            $2D         ;
DEFC       tRRef =           $2E         ;
DEFC       tToRect =         $2F         ;
DEFC       tToPolar =        $30         ;
DEFC       tConste =         $31         ;
DEFC       tSinReg =         $32         ;
DEFC       tLogistic =       $33         ;
DEFC       tLinRegTTest =    $34         ;
DEFC       tShadeNorm =      $35         ;
DEFC       tShadeT =         $36         ;
DEFC       tShadeChi =       $37         ;
DEFC       tShadeF =         $38         ;
DEFC       tMatToLst =       $39         ;
DEFC       tLstToMat =       $3A         ;
DEFC       tZTest =          $3B         ;
DEFC       tTTest =          $3C         ;
DEFC       t2SampZTest =     $3D         ;
DEFC       t1PropZTest =     $3E         ;
DEFC       t2PropZTest =     $3F         ;
DEFC       tChiTest =        $40         ;
DEFC       tZIntVal =        $41         ;
DEFC       t2SampZInt =      $42         ;
DEFC       t1PropZInt =      $43         ;
DEFC       t2PropZInt =      $44         ;
DEFC       tGraphStyle =     $45         ;
DEFC       t2SampTTest =     $46         ;
DEFC       t2SampFTest =     $47         ;
DEFC       tTIntVal =        $48         ;
DEFC       t2SampTInt =      $49         ;
DEFC       tSetupLst =       $4A         ;
DEFC       tFinPMTend =      $4B         ;
DEFC       tFinPMTbeg =      $4C         ;
DEFC       tRealM =          $4D         ;
DEFC       tPolarM =         $4E         ;
DEFC       tRectM =          $4F         ;
DEFC       tExprOn =         $50         ;
DEFC       tExprOff =        $51         ;
DEFC       tClrAllLst =      $52         ;
DEFC       tGetCalc =        $53         ;
DEFC       tDelVar =         $54         ;
DEFC       tEquToStrng =     $55         ;
DEFC       tStrngToEqu =     $56         ;
DEFC       tDelLast =        $57         ;
DEFC       tSelect =         $58         ;
DEFC       tANOVA =          $59         ;
DEFC       tModBox =         $5A         ;
DEFC       tNormProb =       $5B         ;
;
;
DEFC       tMGT =            $64         ; VERTICAL SPLIT
DEFC       tZFit =           $65         ; ZOOM FIT
DEFC       tDiag_on =        $66         ; DIANOSTIC DISPLAY ON
DEFC       tDiag_off =       $67         ; DIANOSTIC DISPLAY OFF
DEFC       tOkEnd2v0 =       $67         ;end of 2byte tokens for version 0.
DEFC       tArchive =        $68         ;archive
DEFC       tUnarchive =      $69         ;unarchive
DEFC	  tasm =		$6A
DEFC	  tasmComp =	$6B	      ; asm compile
DEFC	  tasmPrgm =	$6C	      ; signifies a program is asm
DEFC	  tasmCmp = 	$6D	      ; asm program is compiled
;
DEFC       tLcapAAcute =     $6E
DEFC       tLcapAGrave =     $6F
DEFC       tLcapACaret =     $70
DEFC       tLcapADier =      $71
DEFC       tLaAcute =        $72
DEFC       tLaGrave =        $73
DEFC       tLaCaret =        $74
DEFC       tLaDier =         $75
DEFC       tLcapEAcute =     $76
DEFC       tLcapEGrave =     $77
DEFC       tLcapECaret =     $78
DEFC       tLcapEDier =      $79
DEFC       tLeAcute =        $7A
DEFC       tLeGrave =        $7B
DEFC       tLeCaret =        $7C
DEFC       tLeDier =         $7D
;
DEFC       tLcapIGrave =     $7F
DEFC       tLcapICaret =     $80
DEFC       tLcapIDier =      $81
DEFC       tLiAcute =        $82
DEFC       tLiGrave =        $83
DEFC       tLiCaret =        $84
DEFC       tLiDier =         $85
DEFC       tLcapOAcute =     $86
DEFC       tLcapOGrave =     $87
DEFC       tLcapOCaret =     $88
DEFC       tLcapODier =      $89
DEFC       tLoAcute =        $8A
DEFC       tLoGrave =        $8B
DEFC       tLoCaret =        $8C
DEFC       tLoDier =         $8D
DEFC       tLcapUAcute =     $8E
DEFC       tLcapUGrave =     $8F
DEFC       tLcapUCaret =     $90
DEFC       tLcapUDier =      $91
DEFC       tLuAcute =        $92
DEFC       tLuGrave =        $93
DEFC       tLuCaret =        $94
DEFC       tLuDier =         $95
DEFC       tLcapCCed =       $96
DEFC       tLcCed =          $97
DEFC       tLcapNTilde =     $98
DEFC       tLnTilde =        $99
DEFC       tLaccent =        $9A
DEFC       tLgrave =         $9B
DEFC       tLdieresis =      $9C
DEFC       tLquesDown =      $9D
DEFC       tLexclamDown =    $9E
DEFC       tLalpha =         $9F
DEFC      tLbeta =          $a0
DEFC      tLgamma =         $a1
DEFC      tLcapDelta =      $a2
DEFC      tLdelta =         $a3
DEFC      tLepsilon =       $a4
DEFC      tLlambda =        $a5
DEFC      tLmu =            $a6
DEFC      tLpi =            $a7
DEFC      tLrho =           $a8
DEFC      tLcapSigma =      $a9
;
;
DEFC      tLphi =           $aB
DEFC      tLcapOmega =      $aC
DEFC      tLphat =          $aD
DEFC      tLchi =           $aE
DEFC      tLstatF =         $aF
;

DEFC     tLa =      $b0
DEFC     tLb =      $b1
DEFC     tLc =      $b2
DEFC     tLd =      $b3
DEFC     tLsmalle = $b4
DEFC     tLf =      $b5
DEFC     tLsmallg = $b6
DEFC     tLh =      $b7
DEFC     tLi =      $b8
DEFC     tLj =      $b9
DEFC     tLk =      $bA
;

DEFC     tLl =      $bC
DEFC     tLm =      $bD
;tLn      EQU     $bE
DEFC     tLo =      $bF
DEFC     tLp =      $c0
DEFC     tLq =      $c1
DEFC     tLsmallr = $c2
DEFC     tLs =      $c3
DEFC     tLsmallt = $c4
DEFC     tLu =      $c5
DEFC     tLv =      $c6
DEFC     tLw =      $c7
DEFC     tLx =      $c8
DEFC     tLy =      $c9
DEFC     tLz =      $cA
DEFC      tLsigma =         $cb
DEFC      tLtau =           $cc
DEFC      tLcapIAcute =     $cd
;
;
DEFC    tGarbagec = $Ce
DEFC      LastToken =       $Ce         ;tLAST TOKEN IN THIS VERSION...
;
;======================================================================
;           Data Type Equates                                                    
;======================================================================
;
DEFC       RealObj =         0
DEFC       ListObj =         1
DEFC       MatObj =          2
DEFC       EquObj =          3
DEFC       StrngObj =        4
DEFC       ProgObj =         5
DEFC       ProtProgObj =     6
DEFC       PictObj =         7
DEFC       GDBObj =          8
DEFC       UnknownObj =      9
DEFC       UnknownEquObj =   $0A
DEFC       NewEquObj =       $0B
DEFC       CplxObj =         $0C
DEFC       CListObj =        $0D
DEFC       UndefObj =        $0E
DEFC       WindowObj =       $0F
DEFC       ZStoObj =         $10
DEFC       TblRngObj =       $11
DEFC       LCDObj =          $12
DEFC       BackupObj =       $13
DEFC	  AppObj =		$14		;application, only used in menus/link
DEFC	  AppVarObj =	$15		;application variable
DEFC       TempProgObj =     $16           ;program, home deletes when finished
DEFC       GroupObj =        $17           ;group.
; 
;======================================================================
;           I/O equates                                                          
;======================================================================
;
DEFC  D0D1_bits =	$03
DEFC  D0LD1L =		$03
DEFC  D0LD1H =		$01
DEFC  D0HD1L =		$02
DEFC  D0HD1H =		$00
DEFC  bport =		0			; 4-BIT LINK PORT (I/O) 
;
;======================================================================
;           DEVICE CODES                                                       
;======================================================================
;
;
DEFC  TI82DEV =		$82
DEFC  PC82DEV =		$02
DEFC  MAC82DEV =	$12
;
DEFC  TI83FDEV =	$73
DEFC  LINK83FDEV =	$23
;
DEFC  TI83DEV =		$83
DEFC  PC83DEV =		$03
DEFC  MAC83DEV =	$13
;
DEFC  TI85DEV =		$95      ; DIFF THEN REAL 85 SO ME TALK
DEFC  PC85DEV =		$05
DEFC  MAC85DEV =	$15
;
DEFC  TI73DEV =		$74      ; Device x3 is always an 83
DEFC  PC73DEV =		$07
DEFC  MAC73DEV =	$17
;
;TI83FDEV	EQU  $73
DEFC  LINK73FDEV =	$23
DEFC  PC83FDEV =	$23

;======================================================================
;           EQUATES TO RAM LOCATIONS FOR STAT VARS 
;======================================================================
;
;
DEFC	FPLEN =	9		;Length of a floating-point number.
DEFC     StatN =   statVars
DEFC     XMean =   StatN      + FPLEN
DEFC     SumX =    XMean      + FPLEN
DEFC     SumXSqr = SumX       + FPLEN
DEFC     StdX =    SumXSqr    + FPLEN
DEFC     StdPX =   StdX       + FPLEN
DEFC     MinX =    StdPX      + FPLEN
DEFC     MaxX =    MinX       + FPLEN
DEFC     MinY =    MaxX       + FPLEN
DEFC     MaxY =    MinY       + FPLEN
DEFC     YMean =   MaxY       + FPLEN
DEFC     SumY =    YMean      + FPLEN
DEFC     SumYSqr = SumY       + FPLEN
DEFC     StdY =    SumYSqr    + FPLEN
DEFC     StdPY =   StdY       + FPLEN
DEFC     SumXY =   StdPY      + FPLEN
DEFC     Corr =    SumXY      + FPLEN
DEFC     MedX =    Corr       + FPLEN
DEFC     Q1 =      MedX       + FPLEN
DEFC     Q3 =      Q1         + FPLEN
DEFC     QuadA =   Q3         + FPLEN
DEFC     QuadB =   QuadA      + FPLEN
DEFC     QuadC =   QuadB      + FPLEN
DEFC     CubeD =   QuadC      + FPLEN
DEFC     QuartE =  CubeD      + FPLEN
DEFC     MedX1 =   QuartE     + FPLEN
DEFC     MedX2 =   MedX1      + FPLEN
DEFC     MedX3 =   MedX2      + FPLEN
DEFC     MedY1 =   MedX3      + FPLEN
DEFC     MedY2 =   MedY1      + FPLEN
DEFC     MedY3 =   MedY2      + FPLEN
DEFC     PStat =   MedY3      + 2*FPLEN
DEFC     ZStat =   PStat      + FPLEN
DEFC     TStat =   ZStat      + FPLEN
DEFC     ChiStat = TStat      + FPLEN
DEFC     FStat =   ChiStat    + FPLEN
DEFC     DF =      FStat      + FPLEN
DEFC     Phat =    DF         + FPLEN
DEFC     Phat1 =   Phat       + FPLEN
DEFC     Phat2 =   Phat1      + FPLEN
DEFC     MeanX1 =  Phat2      + FPLEN
DEFC     StdX1 =   MeanX1     + FPLEN
DEFC     StatN1 =  StdX1      + FPLEN
DEFC     MeanX2 =  StatN1     + FPLEN
DEFC     StdX2 =   MeanX2     + FPLEN
DEFC     StatN2 =  StdX2      + FPLEN
DEFC     StdXP2 =  StatN2     + FPLEN
DEFC     SLower =  StdXP2     + FPLEN
DEFC     SUpper =  SLower     + FPLEN
DEFC     SStat =   SUpper     + FPLEN

DEFC     F_DF =	anovaf_vars
DEFC     F_SS =	F_DF + FPLEN
DEFC     F_MS =	F_SS + FPLEN
DEFC     E_DF =	F_MS + FPLEN
DEFC     E_SS =	E_DF + FPLEN
DEFC     E_MS =	E_SS + FPLEN


;======================================================================
