;---------------------------------------------------------------------------------------------------------------
;	VARIABLES
;---------------------------------------------------------------------------------------------------------------

[Variables]

; ----- GENERAL -----
BackgroundWidth=810
BackgroundHeight=940
SidePanelWidth=270
GroupYGap=9

; ----- COLORS -----
ColorInputBackgroundWidth=70
InnerShapeAdjustments=10
HiddenGroupColorAdj=164

ColorMain=12,12,12,255
ColorSecondary=36,36,36,255
ColorSecondaryInactive=22,22,22,255
ColorSelected=185,88,0
FontColorMain=255,255,255
FontColorWarning=255,190,100
FontColorInactive=90,90,90

; ----- FONTS -----
FontSizeHeader=29
FontSizeText=16
FontSizeDesc=14

; ----- CONTENTS -----
ContentXOffset=22
ContentTopYGap=12
ContentBottomYGap=5
ContentClipStringW=700
ContentHeaderDividerY=2

; ----- MEASURES -----
InputWidth=300

;---------------------------------------------------------------------------------------------------------------
;	MEASURES
;---------------------------------------------------------------------------------------------------------------

; ----- MOUSE WHEEL ADJUSTMENTS -----
[mIncreaseHundred]
Measure=Calc
Formula=#TempSettingsVal#+100
UpdateDivider=-1

[mDecreaseHundred]
Measure=Calc
Formula=#TempSettingsVal#-100
UpdateDivider=-1

[mIncreaseTen]
Measure=Calc
Formula=#TempSettingsVal#+10
UpdateDivider=-1

[mDecreaseTen]
Measure=Calc
Formula=#TempSettingsVal#-10
UpdateDivider=-1

[mIncreaseOne]
Measure=Calc
Formula=#TempSettingsVal#+1
UpdateDivider=-1

[mDecreaseOne]
Measure=Calc
Formula=#TempSettingsVal#-1
UpdateDivider=-1

[mIncreaseOneFraction]
Measure=Calc
Formula=#TempSettingsVal#+0.1
UpdateDivider=-1

[mDecreaseOneFraction]
Measure=Calc
Formula=#TempSettingsVal#-0.1
UpdateDivider=-1

;---------------------------------------------------------------------------------------------------------------
;	STYLE
;---------------------------------------------------------------------------------------------------------------

[sBackground]
UpdateDivider=-1
W=#BackgroundWidth#
H=#BackgroundHeight#

[sGroupTitle]
FontFace=Jost
FontSize=17
FontWeight=300
FontColor=#FontColorMain#
AntiAlias=1
UpdateDivider=-1

; ----- CONTENT -----
[sContent]
FontFace=Jost
FontColor=#FontColorMain#
FontWeight=400
AntiAlias=1
UpdateDivider=-1

[sContentHeader]
FontSize=#FontSizeHeader#
FontWeight=600

[sContentTitle]
FontSize=#FontSizeText#

[sContentDesc]
FontSize=#FontSizeDesc#
FontWeight=200
ClipString=2
ClipStringW=#InputWidth#

[sContentInput]
FontSize=#FontSizeText#
FontWeight=300
SolidColor=#ColorSecondary#
Padding=6,3,6,3
ClipString=2
ClipStringW=#InputWidth#

;---------------------------------------------------------------------------------------------------------------
;	METER
;---------------------------------------------------------------------------------------------------------------

[MainBackground]
Meter=Image
MeterStyle=sBackground
SolidColor=12,12,12,0

[SidePanelMenu]
Meter=Image
MeterStyle=sBackground
SolidColor=#ColorSecondary#
X=r
Y=r
W=#SidePanelWidth#