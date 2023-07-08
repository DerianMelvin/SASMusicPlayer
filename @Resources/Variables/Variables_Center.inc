[Variables]

; NOTE: Remember to refresh the skin after saving your changes
; NOTE: It is recommended to disable 'Keep on screen' setting in rainmeter to avoid snapping issues

;---------------------------------
;------------ GENERAL ------------
;---------------------------------

; Default font face to use for all text (default: Jost)
; for custom font, place the .ttf / .otf file in @Resources\Fonts folder, then replace the value below with the font name (double click the file and check the name on the top left window)
DefaultFont=Jost

; Default font weight to use for all text (default: 300)
DefaultFontWeight=300

; Set the width of the overall skin (default: 500)
; Also adjust the position of some meters automatically
DefaultWidth=500

; Default casing style to use for all text (default: None)
; Choose one of the available values (Lower, Upper, Proper) or leave it as default (None)
DefaultStringCase=None

; Set the order/position where each track info will be displayed
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

; A multiplier to adjust text clipping when the "DefaultWidth" value is less than the max. width set in certain meters (track info, line, etc.)
; NOTE: Try decreasing the multiplier if you notice display or clipping issues (default: 2.5)
SongInfoSpacingMultiplier=2.5

;---------------------------------
;---------- VISIBILITY -----------
;---------------------------------

; NOTE: set value to 1 to hide.
; NOTE: you may need to readjust the offset on affected meters (if they're not displaying properly).

; Hides track info 1 (default: Artist)
HidePosition1=0

; Hides the player icon
HidePlayerIcon=0

; Hides track info 2 (default: Album)
HidePosition2=0

; Hides track info 3 (default: Title)
HidePosition3=0

; Hides the line
HideLine=0

; Hides the progress bar
HideProgressBar=0

; Hides track position
HideTrackPosition=0

; Hides track duration
HideTrackDuration=0

; Hides the music controls
HideControls=0

; Hides the volume controls
HideVolumeControls=1

;---------------------------------
;--------- TRACK INFO 1 ----------
;---------------------------------

; Default: Artist

; Set the font face to use for track info 1 (default: #DefaultFont#)
Position1FontFace=#DefaultFont#

; Font size for track info 1 (default: 14)
Position1FontSize=14

; Font weight for track info 1 (default: #DefaultFontWeight#)
Position1FontWeight=#DefaultFontWeight#

; Character spacing for track info 1 (default: 0)
Position1CharSpacing=0

; Set the casing style for track info 1
; This will replace the casing defined in general settings
Position1Case=None

; The max. display length of track info 1 (default: #DefaultWidth#)
; Text exceeding this width will be wrapped/clipped
Position1Width=#DefaultWidth#

; A multiplier that controls the max. height of the meter to display the text (default: 2.1)
; Will display up to 2 lines on the default font (large fonts or long text may require higher multiplier)
; Text exceeding the height will be clipped
Position1ClipHeightMultiplier=2.1

; A custom text to display when no music info is received or when the music player is not active (default: ???)
; Remove the text if you want nothing to be displayed
; For custom symbol or unicode character, I suggest reading more about it here: https://docs.rainmeter.net/manual/variables/character-variables/
Position1Substitute=???

; Position of track info 1 on the horizontal axis (default: 0)
Position1XOffset=0

; Position of track info 1 on the vertical axis (default: 0)
; Will move the vertical position of other meters automatically
Position1YOffset=0

; Set the shadow blur amount for track info 1 (default: 3)
Position1ShadowBlur=3

; Position of track info 1 shadow on the horizontal axis (default: 0)
Position1ShadowXOffset=0

; Position of track info 1 shadow on the vertical axis (default: 0)
Position1ShadowYOffset=0

;---------------------------------
;---------- PLAYER ICON ----------
;---------------------------------

; Image size for player icon (default: #Position1FontSize#)
PlayerIconSize=#Position1FontSize#

; A multiplier that adjust position of player icon on the horizontal axis relative to track info 1 (default: 2.3)
; The following applies if track info 1 is hidden:
; - player icon horizontal position is placed to the center
; - the value below is changed to normal horizontal offset (set to 0 to center it)
PlayerIconXOffset=2.3

; Position of player icon on the vertical axis (default: 2)
PlayerIconYOffset=2

;---------------------------------
;--------- TRACK INFO 2 ----------
;---------------------------------

; Default: Album

; Set the font face to use for track info 2 (default: #DefaultFont#)
Position2FontFace=#DefaultFont#

; Font size for track info 2 (default: 13)
Position2FontSize=13

; Font weight for track info 2 (default: #DefaultFontWeight#)
Position2FontWeight=#DefaultFontWeight#

; Character spacing for track info 2 (default: 0)
Position2CharSpacing=0

; Default casing style to display for track info 2
; This will replace the casing set in general settings
Position2Case=None

; The max. display length of track info 2 (default: #DefaultWidth#)
; Text exceeding this width will be wrapped/clipped
Position2Width=#DefaultWidth#

; A multiplier that controls the max. height of the meter to display the text (default: 2.1)
; Will display up to 2 lines on the default font (large fonts or long text may require higher multiplier)
; Text exceeding the height will be clipped
Position2ClipHeightMultiplier=2.1

; A custom text to display when no music info is received or when the music player is not active (default: ???)
; Remove the text if you want nothing to be displayed
; For custom symbol or unicode character, I suggest reading more about it here: https://docs.rainmeter.net/manual/variables/character-variables/
Position2Substitute=???

; Position of track info 2 on the horizontal axis (default: 0)
Position2XOffset=0

; Position of track info 2 on the vertical axis (default: 10)
Position2YOffset=10

; Set the shadow blur amount for track info 2 (default: 3)
Position2ShadowBlur=3

; Position of track info 2 shadow on the horizontal axis (default: 0)
Position2ShadowXOffset=0

; Position of track info 2 shadow on the vertical axis (default: 0)
Position2ShadowYOffset=0

;---------------------------------
;--------- TRACK INFO 3 ----------
;---------------------------------

; Default: Title

; Set the font face to use for track info 3 (default: #DefaultFont#)
Position3FontFace=#DefaultFont#

; Font size for track info 3 (default: 24)
Position3FontSize=24

; Font weight for track info 3 (default: #DefaultFontWeight#)
Position3FontWeight=#DefaultFontWeight#

; Character spacing for track info 3 (default: 0)
Position3CharSpacing=0

; Default casing style to display for track info 3
; This will replace the casing set in general settings
Position3Case=None

; The max. display length of track info 3 (default: #DefaultWidth#)
; Text exceeding this width will be wrapped/clipped
Position3Width=#DefaultWidth#

; A multiplier that controls the max. height of the meter to display the text (default: 2.1)
; Will display up to 2 lines on the default font (large fonts or long text may require higher multiplier)
; Text exceeding the height will be clipped
Position3ClipHeightMultiplier=2.1

; A custom text to display when no music info is received or when the music player is not active (default: ???)
; Remove the text if you want nothing to be displayed
; For custom symbol or unicode character, I suggest reading more about it here: https://docs.rainmeter.net/manual/variables/character-variables/
Position3Substitute=???

; Position of track info 3 on the horizontal axis (default: 0)
Position3XOffset=0

; Position of track info 3 on the vertical axis (default: 5)
Position3YOffset=5

; Set the shadow blur amount for track info 3 (default: 3)
Position3ShadowBlur=3

; Position of track info 3 shadow on the horizontal axis (default: 0)
Position3ShadowXOffset=0

; Position of track info 3 shadow on the vertical axis (default: 0)
Position3ShadowYOffset=0

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

; Position of the line on the vertical axis (default: 2)
LineYOffset=2

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

; Position of the progress bar on the vertical axis (default: 7)
BarYOffset=7

;---------------------------------
;-------- TRACK POSITION ---------
;---------------------------------

; Set the font face to use for track position (default: #DefaultFont#)
TrackPositionFontFace=#DefaultFont#

; Font size for track position (default: 14)
TrackPositionFontSize=14

; Font weight for track position (default: #DefaultFontWeight#)
TrackPositionFontWeight=#DefaultFontWeight#

; Character spacing for track position (default: 0)
TrackPositionCharSpacing=0

; Position of the track position on the horizontal axis (default: 0)
TrackPositionXOffset=0

; Position of the track position on the vertical axis (default: 5)
; Will move the vertical position of controls & duration automatically
TrackPositionYOffset=5

; Set the shadow blur amount for track position (default: 3)
TrackPositionShadowBlur=3

; Position of the track position shadow on the horizontal axis (default: 0)
TrackPositionShadowXOffset=0

; Position of the track position shadow on the vertical axis (default: 0)
TrackPositionShadowYOffset=0

;---------------------------------
;-------- TRACK DURATION ---------
;---------------------------------

; Set the font face to use for track duration (default: #TrackPositionFontFace#)
TrackDurationFontFace=#TrackPositionFontFace#

; Font size for track duration (default: #TrackPositionFontSize#)
TrackDurationFontSize=#TrackPositionFontSize#

; Font weight for track duration (default: #TrackPositionFontWeight#)
TrackDurationFontWeight=#TrackPositionFontWeight#

; Character spacing for track duration (default: #TrackPositionCharSpacing#)
TrackDurationCharSpacing=#TrackPositionCharSpacing#

; Position of the track duration on the horizontal axis (default: 0)
TrackDurationXOffset=0

; Position of the track duration on the vertical axis (default: 0)
TrackDurationYOffset=0

; Set the shadow blur amount for track duration (default: 3)
TrackDurationShadowBlur=3

; Position of the track duration shadow on the horizontal axis (default: 0)
TrackDurationShadowXOffset=0

; Position of the track duration shadow on the vertical axis (default: 0)
TrackDurationShadowYOffset=0

;---------------------------------
;----------- CONTROLS ------------
;---------------------------------

; The image/button size for music controls (default: 24)
NavButtonSize=24

; The gap between each image/button (default: 2.9)
NavButtonGap=2.9

; Position of the controls on the horizontal axis (default: 0)
ControlsXOffset=0

; Position of the controls on the vertical axis (default: 4)
ControlsYOffset=4
