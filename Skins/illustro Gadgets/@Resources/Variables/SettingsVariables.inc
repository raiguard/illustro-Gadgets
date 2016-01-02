[Variables]
bgWidth=600
bgHeight=450
pageName=hwinfosettings
gadgetsSubpage=drivesmeter
hwinfoSubpage=cpu0

; -- Visual Properties --
generalXMarginRight=(#bgWidth# - 12)

panelWidth=(#bgWidth# - (#bgWidth# - #generalXMarginRight# + 10) - #panelContentMarginLeftX#)
panelCenterX=((#panelWidth# / 2) + #panelContentMarginLeftX#)

checkboxColor=255,255,255,#generalOpacity#
navBarButtonColor=255,255,255,#generalOpacity#

navMenuSeparatorX=150
panelContentMarginLeftX=(#navMenuSeparatorX# + 10)

colorAlphaBarBgWidth=109

; Text Input
colorInputTextBackground=0,0,0,255
colorInputTextFont=#colorSecondary#
