[Variables]

; Refresh the skin after updating these settings!


; DISPLAY
; =======

Bands=64
; Number of bars

BarWidth=14
BarHeight=(#WORKAREAHEIGHT#/2)
; "#WORKAREAHEIGHT#" is generally your monitor's height
; http://docs.rainmeter.net/manual-beta/variables/built-in-variables#WORKAREAXYWH

BarGapX=3.5

SkinSizeRatio=0.5

PrimaryFont=Segoe UI
SecondaryFont=Segoe UI Semilight
FontColor=255,255,255


; MECHANICS
; =========

PlayerName=CAD
; The interface name for the media player
; http://docs.rainmeter.net/manual-beta/plugins/nowplaying#playerlist


; AUDIO
; =====

Sensitivity=42
; Increase this if the spectrum is not visible enough

FFTAttack=350
FFTDecay=350
; Decrease for faster response, increase for slower response
; http://docs.rainmeter.net/manual-beta/plugins/audiolevel#FFTAttack

FFTSize=2048
; Increase this if the bars "stick" together too much

FFTOverlap=(#FFTSize#/2)
FreqMin=40
FreqMax=16000
Port=Output
; Additional audio settings
; http://docs.rainmeter.net/manual-beta/plugins/audiolevel#FFTOptions
