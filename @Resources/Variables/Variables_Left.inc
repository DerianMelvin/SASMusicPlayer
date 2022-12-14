[Variables]

; NOTE: Remember to refresh the skin after saving your changes

;---------------------------------
;------------ GENERAL ------------
;---------------------------------

; Default font face to use for all text (default: Quicksand)
; for custom font, place the .ttf / .otf file in @Resources\Fonts folder, then replace the value below with the font name (double click the file and check the name on the top left window)
DefaultFont=Quicksand

; Default font weight to use for all text (default: 400)
DefaultFontWeight=400

; Set the width of the overall skin (default: 500)
; Also adjust the values of some meters automatically
DefaultWidth=500

; Default casing style to use for all text (default: None)
; Choose one of the available values (Lower, Upper, Proper) or leave it as default (None)
DefaultStringCase=None

; Set the order/position where each song info will be displayed
; Default setup values:
; 1. Artist
; 2. Album
; 3. Title

Position1=Artist
Position2=Album
Position3=Title

; NOTE: You can try experimenting using these values:
; - Player
; - Position
; - Duration
; - Progress

;---------------------------------
;---------- VISIBILITY -----------
;---------------------------------

; NOTE: set value to 1 to hide.
; NOTE: you may need to readjust the offset on affected meters (if they're not displaying properly).

; Hides the player icon
HidePlayerIcon=0

; Hides track position 1 (default: Artist)
HidePosition1=0

; Hides the separator
HideSeparator=0

; Hides track position 2 (default: Album)
HidePosition2=0

; Hides track position 3 (default: Title)
HidePosition3=0

; Hides the line
HideLine=0

; Hides the progress bar
HideProgressBar=0

; Hides song position
HideTrackPosition=0

; Hides song duration
HideTrackDuration=0

; Hides the music controls
HideControls=0

; Hides the volume controls
HideVolumeControls=1

;---------------------------------
;---------- PLAYER ICON ----------
;---------------------------------

; Image size for player icon (default: 13)
PlayerIconSize=13

; Position of player icon on the horizontal axis (default: 0)
PlayerIconXOffset=0

; Position of player icon on the vertical axis (default: 0)
PlayerIconYOffset=0

;---------------------------------
;---------- POSITION 1 -----------
;---------------------------------

; Default: Artist

; Set the font face to use for track position 1 (default: #DefaultFont#)
Position1FontFace=#DefaultFont#

; Font size for track position 1 (default: 13)
Position1FontSize=13

; Font weight for track position 1 (default: #DefaultFontWeight#)
Position1FontWeight=#DefaultFontWeight#

; Character spacing for track position 1 (default: 0)
Position1CharSpacing=0

; Set the casing style for track position 1 
; This will replace the casing defined in general settings
Position1Case=None

; The max. display length of track position 1 (default: 380)
; Text exceeding this width will be wrapped/clipped
Position1Width=380

; A multiplier that controls the max. height of the meter to display the text (default: 1)
; Will display up to 1 line on the default font (large fonts or long text may require higher multiplier)
; Text exceeding the height will be clipped
Position1ClipHeightMultiplier=1

; A custom text to display when no music info is received or when the music player is not active (default: ???)
; Remove the text if you want nothing to be displayed
; For custom symbol or unicode character, I suggest reading more about it here: https://docs.rainmeter.net/manual/variables/character-variables/
Position1Substitute=???

; Position of track position 1 on the horizontal axis (default: 14)
; Will move the horizontal position of track position 2 automatically
Position1XOffset=14

; Position of track position 1 on the vertical axis (default: 0)
; Will move the vertical position of other meters automatically
Position1YOffset=0

;---------------------------------
;----------- SEPARATOR -----------
;---------------------------------

; Set the font face to use for the separator (default: #DefaultFont#)
SeparatorFontFace=#DefaultFont#

; Font size for the separator (default: #Position1FontSize#)
SeparatorFontSize=#Position1FontSize#

; Font weight for the separator (default: #DefaultFontWeight#)
SeparatorFontWeight=400

; Character spacing for the separator (default: 0)
SeparatorCharSpacing=0

; Set the casing style for the separator
; This will replace the casing defined in general settings
SeparatorCase=None

; The max. display length of the separator (default: 70)
; Text exceeding this width will be clipped
SeparatorWidth=70

; Set a text/character to use as separator (default: |)
; For custom symbol or unicode character, I suggest reading more about it here: https://docs.rainmeter.net/manual/variables/character-variables/
SeparatorText=|

; Position/gap of the separator between track position 1 & 2 (default: 16)
SeparatorXOffset=16

; Position of the separator on the vertical axis (default: 0)
SeparatorYOffset=0

;---------------------------------
;---------- POSITION 2 -----------
;---------------------------------

; Default: Album

; Set the font face to use for track position 2 (default: #DefaultFont#)
Position2FontFace=#DefaultFont#

; Font size for track position 2 (default: #Position1FontSize#)
Position2FontSize=#Position1FontSize#

; Font weight for track position 2 (default: #DefaultFontWeight#)
Position2FontWeight=#DefaultFontWeight#

; Character spacing for track position 2 (default: 0)
Position2CharSpacing=0

; Set the casing style for track position 2
; This will replace the casing defined in general settings
Position2Case=None

; The max. display length of track position 2 (default: 380)
; Text exceeding this width will be wrapped/clipped
Position2Width=380

; A multiplier that controls the max. height of the meter to display the text (default: 1)
; Will display up to 1 line on the default font (large fonts or long text may require higher multiplier)
; Text exceeding the height will be clipped
Position2ClipHeightMultiplier=1

; A custom text to display when no music info is received or when the music player is not active (default: ???)
; Remove the text if you want nothing to be displayed
; For custom symbol or unicode character, I suggest reading more about it here: https://docs.rainmeter.net/manual/variables/character-variables/
Position2Substitute=???

; Position of track position 2 on the horizontal axis (default: 0)
Position2XOffset=0

; Position of track position 2 on the vertical axis (default: 0)
Position2YOffset=0

;---------------------------------
;---------- POSITION 3 -----------
;---------------------------------

; Default: Title

; Set the font face to use for track position 3 (default: #DefaultFont#)
Position3FontFace=#DefaultFont#

; Font size for track position 3 (default: 23)
Position3FontSize=23

; Font weight for track position 3 (default: #DefaultFontWeight#)
Position3FontWeight=#DefaultFontWeight#

; Character spacing for track position 3 (default: 0)
Position3CharSpacing=0

; Set the casing style for track position 3
; This will replace the casing defined in general settings
Position3Case=None

; The max. display length of track position 3 (default: #DefaultWidth#)
; Text exceeding this width will be wrapped/clipped
Position3Width=#DefaultWidth#

; A multiplier that controls the max. height of the meter to display the text (default: 1.9)
; Will display up to 2 lines on the default font (large fonts or long text may require higher multiplier)
; Text exceeding the height will be clipped
Position3ClipHeightMultiplier=1.9

; A custom text to display when no music info is received or when the music player is not active (default: ???)
; Remove the text if you want nothing to be displayed
; For custom symbol or unicode character, I suggest reading more about it here: https://docs.rainmeter.net/manual/variables/character-variables/
Position3Substitute=???

; Position of track position 3 on the horizontal axis (default: 0)
Position3XOffset=0

; Position of track position 3 on the vertical axis (default: 4)
Position3YOffset=4

;---------------------------------
;------------- LINE --------------
;---------------------------------

; Adjust line width (default: #DefaultWidth#)
LineWidth=#DefaultWidth#

; Adjust line height/thickness (default: 1)
LineHeight=1

; A multiplier that adjusts the roundness of the line (default: 1)
; Set value to 0 to remove it
LineRadius=1

; Position of the line on the horizontal axis (default: 0)
LineXOffset=0

; Position of the line on the vertical axis (default: 5)
LineYOffset=5

;---------------------------------
;--------- PROGRESS BAR ----------
;---------------------------------

; Adjust progress bar width (default: #DefaultWidth#)
BarWidth=#DefaultWidth#

; Adjust progress bar height/thickness (default: 8)
BarHeight=8

; A multiplier that adjusts the roundness of the progress bar (default: 1)
; Set value to 0 to remove it
BarRadius=1

; Position of the progress bar on the horizontal axis (default: 0)
BarXOffset=0

; Position of the progress bar on the vertical axis (default: 9)
BarYOffset=9

;---------------------------------
;----------- POSITION ------------
;---------------------------------

; Set the font face to use for song position (default: #DefaultFont#)
TrackPositionFontFace=#DefaultFont#

; Font size for song position (default: 13)
TrackPositionFontSize=13

; Font weight for song position (default: #DefaultFontWeight#)
TrackPositionFontWeight=#DefaultFontWeight#

; Character spacing for song position (default: 0)
TrackPositionCharSpacing=0

; Position of the song position on the horizontal axis (default: 0)
TrackPositionXOffset=0

; Position of the song position on the vertical axis (default: 0)
; Will move the vertical position of controls & duration automatically
TrackPositionYOffset=9

;---------------------------------
;----------- DURATION ------------
;---------------------------------

; Set the font face to use for song duration (default: #TrackPositionFontFace#)
TrackDurationFontFace=#TrackPositionFontFace#

; Font size for song duration (default: #TrackPositionFontSize#)
TrackDurationFontSize=#TrackPositionFontSize#

; Font weight for song duration (default: #TrackPositionFontWeight#)
TrackDurationFontWeight=#TrackPositionFontWeight#

; Character spacing for song duration (default: #TrackPositionCharSpacing#)
TrackDurationCharSpacing=#TrackPositionCharSpacing#

; Position of the song duration on the horizontal axis (default: 0)
TrackDurationXOffset=0

; Position of the song duration on the vertical axis (default: 0)
TrackDurationYOffset=0

;---------------------------------
;----------- CONTROLS ------------
;---------------------------------

; The image/button size for music controls (default: 26)
NavButtonSize=26

; The gap between each image/button (default: 2.6)
NavButtonGap=2.6

; Position of the controls on the horizontal axis (default: 0)
ControlsXOffset=0

; Position of the controls on the vertical axis (default: 0)
ControlsYOffset=0
