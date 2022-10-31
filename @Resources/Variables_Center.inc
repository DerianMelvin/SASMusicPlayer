[Variables]

; NOTE: Remember to refresh the skin after saving your changes
; NOTE: It is recommended to disable 'Keep on screen' setting in rainmeter to avoid snapping issues

;---------------------------------
;------------ GENERAL ------------
;---------------------------------

; Default font face to use for all text (default: Quicksand)
; for custom font, place the .ttf / .otf file in @Resources\Fonts folder, then replace the value below with the font name (double click the file and check the name on the top left window)
DefaultFont=Quicksand

; Default font weight to use for all text (default: 400)
DefaultFontWeight=400

; Set skin color (R,G,B) (default: 255,255,255)
ColorRGB=255,255,255

; Set the skin's transparency/alpha value (default: 255)
ColorAlpha=255

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
; NOTE: Due to the way that all configs are being made with the default setup in mind, I suggest only change these values AFTER you have made all the necessary adjustments.

Position1=Artist
Position2=Album
Position3=Title

; NOTE: You can try experimenting using these values:
; - Player
; - Position
; - Duration
; - Progress

; A multiplier to adjust text clipping when the "DefaultWidth" value is less than the max. width in certain meters (artist, album/tag, title)
; Unless a custom width is set on the mentioned meters above, this setting can be safely ignored
; NOTE: Try decreasing the multiplier if you notice display or clipping issues (default: 2.5)
SongInfoSpacingMultiplier=2.5

;---------------------------------
;---------- VISIBILITY -----------
;---------------------------------

; NOTE: set value to 1 to hide.
; NOTE: you may need to readjust the offset on affected meters (if they're not displaying properly).

; Hides song artist
HideArtist=0

; Hides the player icon
HidePlayerIcon=0

; Hides song album/tag
HideAlbum=0

; Hides song title
HideSongTitle=0

; Hides the line
HideLine=0

; Hides the progress bar
HideProgressBar=0

; Hides song position
HidePosition=0

; Hides song duration
HideDuration=0

; Hides the music controls
HideControls=0

; Hides the volume controls
HideVolumeControls=1

;---------------------------------
;------------ ARTIST -------------
;---------------------------------

; Set the font face to use for song artist (default: #DefaultFont#)
FontFaceArtist=#DefaultFont#

; Font size for song artist (default: 15)
FontSizeArtist=15

; Font weight for song artist (default: #DefaultFontWeight#)
FontWeightArtist=#DefaultFontWeight#

; Character spacing for song artist (default: 0)
SongArtistCharSpacing=0

; Set the casing style for song artist
; This will replace the casing defined in general settings
SongArtistCase=

; The max. display length of song artist (default: #DefaultWidth#)
; Text exceeding this width will be wrapped/clipped
SongArtistWidth=#DefaultWidth#

; A multiplier that controls the max. height of the meter to display the text (default: 1.9)
; Will display up to 2 lines on the default font (large fonts or long text may require higher multiplier)
; Text exceeding the height will be clipped
SongArtistClipHeightMultiplier=1.9

; A custom text to display when no music info is received or when the music player is not active (default: ???)
; Remove the text if you want nothing to be displayed
; For custom symbol or unicode character, I suggest reading more about it here: https://docs.rainmeter.net/manual/variables/character-variables/
SongArtistSubstitute=???

; Position of song artist on the horizontal axis (default: 0)
SongArtistXOffset=0

; Position of song artist on the vertical axis (default: 0)
; Will move the vertical position of other meters automatically
SongArtistYOffset=0

;---------------------------------
;---------- PLAYER ICON ----------
;---------------------------------

; Image size for player icon (default: #FontSizeArtist#)
PlayerIconSize=#FontSizeArtist#

; A multiplier that adjust position of player icon on the horizontal axis relative to song artist (default: 2.3)
; The following applies if song artist is hidden:
; - player icon horizontal position is placed to the center
; - the value below is changed to normal horizontal offset (set to 0 to center it)
PlayerIconXOffset=2.3

; Position of player icon on the vertical axis (default: 0)
PlayerIconYOffset=0

;---------------------------------
;----------- ALBUM/TAG -----------
;---------------------------------

; Set the font face to use for song album/tag (default: #DefaultFont#)
FontFaceAlbum=#DefaultFont#

; Font size for song album/tag (default: 12)
FontSizeAlbum=12

; Font weight for song album/tag (default: #DefaultFontWeight#)
FontWeightAlbum=#DefaultFontWeight#

; Character spacing for song album/tag (default: 0)
SongAlbumCharSpacing=0

; Default casing style to display for song album
; This will replace the casing set in general settings
SongAlbumCase=

; The max. display length of song album/tag (default: #DefaultWidth#)
; Text exceeding this width will be wrapped/clipped
SongAlbumWidth=#DefaultWidth#

; A multiplier that controls the max. height of the meter to display the text (default: 1.9)
; Will display up to 2 lines on the default font (large fonts or long text may require higher multiplier)
; Text exceeding the height will be clipped
SongAlbumClipHeightMultiplier=1.9

; A custom text to display when no music info is received or when the music player is not active (default: ???)
; Remove the text if you want nothing to be displayed
; For custom symbol or unicode character, I suggest reading more about it here: https://docs.rainmeter.net/manual/variables/character-variables/
SongAlbumSubstitute=???

; Position of song album/tag on the horizontal axis (default: 0)
SongAlbumXOffset=0

; Position of song album/tag on the vertical axis (default: 10)
SongAlbumYOffset=10

;---------------------------------
;------------ TITLE --------------
;---------------------------------

; Set the font face to use for song title (default: #DefaultFont#)
FontFaceTitle=#DefaultFont#

; Font size for song title (default: 23)
FontSizeTitle=23

; Font weight for song title (default: #DefaultFontWeight#)
FontWeightTitle=#DefaultFontWeight#

; Character spacing for song title (default: 0)
SongTitleCharSpacing=0

; Default casing style to display for song title
; This will replace the casing set in general settings
SongTitleCase=

; The max. display length of song title (default: #DefaultWidth#)
; Text exceeding this width will be wrapped/clipped
SongTitleWidth=#DefaultWidth#

; A multiplier that controls the max. height of the meter to display the text (default: 1.9)
; Will display up to 2 lines on the default font (large fonts or long text may require higher multiplier)
; Text exceeding the height will be clipped
SongTitleClipHeightMultiplier=1.9

; A custom text to display when no music info is received or when the music player is not active (default: ???)
; Remove the text if you want nothing to be displayed
; For custom symbol or unicode character, I suggest reading more about it here: https://docs.rainmeter.net/manual/variables/character-variables/
SongTitleSubstitute=???

; Position of song title on the horizontal axis (default: 0)
SongTitleXOffset=0

; Position of song title on the vertical axis (default: 1)
SongTitleYOffset=5

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

; Position of the line on the vertical axis (default: 6)
LineYOffset=6

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

; Set the alpha value/transparency for the background bar (default: 30)
BackgroundBarTransparency=30

; Position of the progress bar on the horizontal axis (default: 0)
BarXOffset=0

; Position of the progress bar on the vertical axis (default: 9)
BarYOffset=9

;-------------------------------------------
;------ POSITION, DURATION & CONTROLS ------
;-------------------------------------------

; Position of song position, duration & controls on the vertical axis (default: 9)
ControlsAndDurationYOffset=9

;---------------------------------
;----------- POSITION ------------
;---------------------------------

; Set the font face to use for song position (default: #DefaultFont#)
FontFacePosition=#DefaultFont#

; Font size for song position (default: 13)
FontSizePosition=13

; Font weight for song position (default: #DefaultFontWeight#)
FontWeightPosition=#DefaultFontWeight#

; Character spacing for song position (default: 0)
SongPositionCharSpacing=0

; Position of the song position on the horizontal axis (default: 0)
PositionXOffset=0

;---------------------------------
;----------- DURATION ------------
;---------------------------------

; Set the font face to use for song duration (default: #FontFacePosition#)
FontFaceDuration=#FontFacePosition#

; Font size for song duration (default: #FontSizePosition#)
FontSizeDuration=#FontSizePosition#

; Font weight for song duration (default: #FontWeightPosition#)
FontWeightDuration=#FontWeightPosition#

; Character spacing for song duration (default: #SongPositionCharSpacing#)
SongDurationCharSpacing=#SongPositionCharSpacing#

; Position of the song duration on the horizontal axis (default: 0)
DurationXOffset=0

;---------------------------------
;----------- CONTROLS ------------
;---------------------------------

; The image/button size for music controls (default: 30)
NavButtonSize=30

; The gap between each image/button (default: 2)
NavButtonGap=2

; Position of the controls on the horizontal axis (default: 0)
ControlsXOffset=0

; Position of the controls on the vertical axis (default: 0)
ControlsYOffset=0
