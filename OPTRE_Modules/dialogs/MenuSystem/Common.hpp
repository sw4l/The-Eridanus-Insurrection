
// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C
#define ST_GROUP_BOX       96
#define ST_GROUP_BOX2      112
#define ST_ROUNDED_CORNER  ST_GROUP_BOX + ST_CENTER
#define ST_ROUNDED_CORNER2 ST_GROUP_BOX2 + ST_CENTER

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4

////////////////
//Base Classes//
////////////////

// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C
#define ST_GROUP_BOX       96
#define ST_GROUP_BOX2      112
#define ST_ROUNDED_CORNER  ST_GROUP_BOX + ST_CENTER
#define ST_ROUNDED_CORNER2 ST_GROUP_BOX2 + ST_CENTER

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4

/*class OPTRE_UNSCMENU_RscProgress
{
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
	colorFrame[] = {0,0,0,0};
	deletable = 0;
	fade = 0;
	shadow = 2;
	style = 0;
	type = 8;	
	
	h = 0.0261438;	
	w = 0.313726;
	x = 0.344;
	y = 0.619;
};*/

class OPTRE_UNSCMENU_RscControlsGroup
{
	deletable = 0;
	fade = 0;
	h = 1;
	idc = -1;
	shadow = 0;
	style = 16;
	type = 15;
	w = 1;
	x = 0;
	y = 0;
	
     	class VScrollbar 
     	{
			arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
			autoScrollDelay = 5;
			autoScrollEnabled = 1;
			autoScrollRewind = 0;
			autoScrollSpeed = -1;
			border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			color[] = {1,1,1,1};
			colorActive[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.3};
			height = 0;
			scrollSpeed = 0.06;
			shadow = 0;
			thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
			width = 0.021;
     	};
     	class HScrollbar 
     	{
			arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
			autoScrollDelay = 5;
			autoScrollEnabled = 0;
			autoScrollRewind = 0;
			autoScrollSpeed = -1;
			border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			color[] = {1,1,1,1};
			colorActive[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.3};
			height = 0.028;
			scrollSpeed = 0.06;
			shadow = 0;
			thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
			width = 0;
     	};
     	class ScrollBar
     	{
     		color[] = {1,1,1,0.6};
		    colorActive[] = {0.1,0.81,1,0.4};
			colorDisabled[] = {0.1,0.81,1,0.4};
     		//colorActive[] = {1,1,1,1};
     		//colorDisabled[] = {1,1,1,0.3};
		     arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow 
		     arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on 
		     border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically) 
		     thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically) 
     	};
};
class OPTRE_UNSCMENU_RscStructuredText
{
	access = 0;
	colorText[] = {1,1,1,1};
	deletable = 0;
	fade = 0;
	h = 0.035;
	idc = -1;
	shadow = 1;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	style = 0;
	text = "";
	type = 13;
	w = 0.1;
	x = 0;
	y = 0;
	class Attributes
	{
		align = "left";
		color = "#ffffff";
		colorLink = "#D09B43";
		font = "RobotoCondensed";
		shadow = 1;
	};
};
class OPTRE_UNSCMENU_RscPicture 
{
	access = 0;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	deletable = 0;
	fade = 0;
	fixedWidth = 0;
	font = "TahomaB";
	h = 0.15;
	idc = -1;
	lineSpacing = 0;
	shadow = 0;
	sizeEx = 0;
	style = 48;
	text = "";
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	type = 0;
	w = 0.2;
	x = 0;
	y = 0;
};
class OPTRE_UNSCMENU_RscEdit
{
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.95,0.95,0.95,1};
	colorSelection[] = {0.8784,0.8471,0.651,1};
	colorDisabled[] = {1, 1, 1, 0.6};
	autocomplete = "";
	text = "";
	size = 0.029;// 0.2;
	style = "0x00 + 0x40";
	font = "EtelkaNarrowMediumPro";// "TahomaB";//"Zeppelin32";
	shadow = 2;
	sizeEx = 0.03921;
};
class OPTRE_UNSCMENU_RscCombo
{
	access = 0;
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	colorActive[] = {1,0,0,1};
	colorBackground[] = {0,0,0,0.5};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorScrollbar[] = {1,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	colorSelect[] = {0,0,0,1};
	colorSelectBackground[] = {1,1,1,0.7};
	colorSelectRight[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorTextRight[] = {1,1,1,1};
	deletable = 0;
	fade = 0;
	font = "RobotoCondensed";
	h = 0.035;
	maxHistoryDelay = 1;
	shadow = 0;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	style = "0x10 + 0x200";
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	type = 4;
	w = 0.12;
	wholeHeight = 0.45;
	x = 0;
	y = 0;
	class ComboScrollBar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 0;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,1};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
};

class OPTRE_UNSCMENU_RscCheckBox
{
	checked = 0;
	color[] = {1,1,1,0.7};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundFocused[] = {0,0,0,0};
	colorBackgroundHover[] = {0,0,0,0};
	colorBackgroundPressed[] = {0,0,0,0};
	colorDisabled[] = {1,1,1,0.2};
	colorFocused[] = {1,1,1,1};
	colorHover[] = {1,1,1,1};
	colorPressed[] = {1,1,1,1};
	h = "0.04 * safezoneH";
	idc = -1;
	soundClick[] = {"",0.1,1};
	soundEnter[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	style = 0;
	textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	type = 77;
	w = "0.025 * safezoneW";
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
};

class OPTRE_UNSCMENU_RscListBox
{
	access = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	autoScrollSpeed = -1;
	
	colorBackground[] = {0,0,0,0};
	colorDisabled[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureSelected[] = {0,0,0,1};
	colorScrollbar[] = {1,0,0,0};
	colorSelect2[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	colorSelect[] = {0,0,0,1};
			colorSelectBackground2[] = {0,0,0,0};
			colorSelectBackground[] = {0,0,0,0};
	colorSelectRight[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	colorTextRight[] = {1,1,1,1};
	
	deletable = 0;
	fade = 0;
	font = "RobotoCondensed";
	h = 0.3;
	maxHistoryDelay = 1;
	period = 1.2;
	rowHeight = 0;
	shadow = 0;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	style = 16;
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	type = 5;
	w = 0.3;
	x = 0;
	y = 0;
	
	class ListScrollBar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 1;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,1};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
	
};

class OPTRE_UNSCMENU_SructuredText
{
	access = 0;
	colorText[] = {1,1,1,1};
	deletable = 0;
	fade = 0;
	h = 0.035;
	idc = -1;
	shadow = 1;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	style = 0;
	text = "";
	type = 13;
	w = 0.1;
	x = 0;
	y = 0;
	class Attributes
	{
		align = "left";
		color = "#ffffff";
		colorLink = "#D09B43";
		font = "RobotoCondensed";
		shadow = 1;
	};
};

class OPTRE_UNSCMENU_Text
{
	access = 0;
	colorBackground[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	deletable = 0;
	fade = 0;
	fixedWidth = 0;
	font = "RobotoCondensed";
	h = 0.037;
	idc = -1;
	linespacing = 1;
	shadow = 1;
	SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	style = 0;
	text = "";
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	type = 0;
	w = 0.3;
	x = 0;
	y = 0;
};

class OPTRE_UNSCMENU_ButtonInvisible
{
    
    access = 0;
    idc = -1;
    type = CT_BUTTON;
    text = "";
    colorText[] = {0,0,0,0};
    colorDisabled[] = {0,0,0,0};
    colorBackground[] = {0,0,0,0};
    colorBackgroundDisabled[] = {0,0.0,0};
    colorBackgroundActive[] = {0,0,0,0};
	//colorBackgroundActive[] = {0,0,0,0};
    colorFocused[] = {0,0,0,0};
    colorShadow[] = {0,0,0,0};
    colorBorder[] = {0,0,0,0};
    soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
    soundPush[] = {"\ca\ui\data\sound\new1",0,0};
    soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
    soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
    style = 2;
    x = 0;
    y = 0;
    w = 0.055589;
    h = 0.039216;
    shadow = 2;
    font = "PuristaMedium";
    sizeEx = 0.02921;
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0;
};
/*class OPTRE_UNSCMENU_ButtonInvisible
{
    
    access = 0;
    idc = -1;
    type = CT_BUTTON;
    text = "";
    colorText[] = {0,0,0,0};
    colorDisabled[] = {0,0,0,0};
    colorBackground[] = {0,0,0,0};
    colorBackgroundDisabled[] = {0,0.0,0};
    colorBackgroundActive[] = {0,0,0,0};
    colorFocused[] = {0,0,0,0};
    colorShadow[] = {0,0,0,0};
    colorBorder[] = {0,0,0,0};
    soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
    soundPush[] = {"\ca\ui\data\sound\new1",0,0};
    soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
    soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
    style = 2;
    x = 0;
    y = 0;
    w = 0.055589;
    h = 0.039216;
    shadow = 2;
    font = "PuristaMedium";
    sizeEx = 0.02921;
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0;
};*/

class OPTRE_UNSCMENU_RscProgress
{
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
	colorFrame[] = {0,0,0,0};
	deletable = 0;
	fade = 0;
	shadow = 2;
	style = 0;
	type = 8;	
	
	h = 0.0261438;	
	w = 0.313726;
	x = 0.344;
	y = 0.619;
	
	/*access = 0;
	colorBar[] = {1,0,0,1};
	colorFrame[] = {1,1,1,0};
	deletable = 0;
	fade = 0;
	h = 0.0261438;
	shadow = 2;
	style = 0;
	texture = "Data\Pictures\progressbar_ca.paa";
	type = 8;
	w = 0.313726;
	x = 0.344;
	y = 0.619;*/
};

class OPTRE_UNSCMENU_RscListNBox
{
	access = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	autoScrollSpeed = -1;
	color[] = {0.95,0.95,0.95,1};
	colorBackground[] = {0,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,1};
	colorPictureSelected[] = {0,0,0,1};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0,0,0,1};
	colorSelect[] = {0,0,0,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorText[] = {1,1,1,1};
	columns[] = {0.3,0.6,0.7};
	deletable = 0;
	drawSideArrows = 0;
	fade = 0;
	font = "RobotoCondensed";
	h = 0.3;
	idcLeft = -1;
	idcRight = -1;
	maxHistoryDelay = 1;
	period = 1.2;
	rowHeight = 0;
	shadow = 0;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	soundSelect[] = {"",0.1,1};
	style = 16;
	type = 102;
	w = 0.3;
	x = 0;
	y = 0;
	class ListScrollBar {
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 0;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
	class ScrollBar {
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 0;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
};

class OPTRE_UNSCMENU_RscButton
{
	access = 0;
	borderSize = 0;
	colorBackground[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	deletable = 0;
	fade = 0;
	font = "RobotoCondensed";
	h = 0.039216;
	idc = -1;
	offsetPressedX = 0;
	offsetPressedY = 0;
	offsetX = 0;
	offsetY = 0;
	shadow = 2;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	style = 2;
	text = "";
	type = 1;
	w = 0.095589;
	x = 0;
	y = 0;
	//font = "PuristaMedium";
	onMouseEnter = "(_this select 0) ctrlSetTextColor [1, 0, 0, 1];";
	onMouseExit = "(_this select 0) ctrlSetTextColor [1, 1, 1, 1];";
};

class OPTRE_UNSCMENU_RscText
{
	access = 0;
	colorBackground[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	deletable = 0;
	fade = 0;
	fixedWidth = 0;
	font = "RobotoCondensed";
	h = 0.037;
	idc = -1;
	linespacing = 1;
	shadow = 1;
	SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	style = 0;
	text = "";
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	type = 0;
	w = 0.3;
	x = 0;
	y = 0;
};

class OPTRE_UNSCMENU_rscMapControl
{

	access = 0;
	alphaFadeEndScale = 1;
	alphaFadeStartScale = 0;
	colorBackground[] = {0.969,0.957,0.949,1};
	colorCountlines[] = {0.572,0.354,0.188,0.25};
	colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
	colorForest[] = {0.624,0.78,0.388,0.5};
	colorForestBorder[] = {0,0,0,0};
	colorGrid[] = {0.1,0.1,0.1,0.6};
	colorGridMap[] = {0.1,0.1,0.1,0.6};
	colorInactive[] = {1,1,1,0.5};
	colorLevels[] = {0.286,0.177,0.094,0.5};
	colorMainCountlines[] = {0.572,0.354,0.188,0.5};
	colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
	colorMainRoads[] = {0.9,0.5,0.3,1};
	colorMainRoadsFill[] = {1,0.6,0.4,1};
	colorNames[] = {0.1,0.1,0.1,0.9};
	colorOutside[] = {0,0,0,1};
	colorPowerLines[] = {0.1,0.1,0.1,1};
	colorRailWay[] = {0.8,0.2,0,1};
	colorRoads[] = {0.7,0.7,0.7,1};
	colorRoadsFill[] = {1,1,1,1};
	colorRocks[] = {0,0,0,0.3};
	colorRocksBorder[] = {0,0,0,0};
	colorSea[] = {0.467,0.631,0.851,0.5};
	colorText[] = {0,0,0,1};
	colorTracks[] = {0.84,0.76,0.65,0.15};
	colorTracksFill[] = {0.84,0.76,0.65,1};
	font = "TahomaB";
	fontGrid = "TahomaB";
	fontInfo = "PuristaMedium";
	fontLabel = "PuristaMedium";
	fontLevel = "TahomaB";
	fontNames = "PuristaMedium";
	fontUnits = "TahomaB";
	h = "SafeZoneH - 1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	maxSatelliteAlpha = 0.85;
	moveOnEdges = 0;
	ptsPerSquareCLn = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareObj = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 3;
	scaleDefault = 0.16;
	scaleMax = 1;
	scaleMin = 0.001;
	shadow = 0;
	showCountourInterval = 0;
	sizeEx = 0.04;
	sizeExGrid = 0.02;
	sizeExInfo = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeExLevel = 0.02;
	sizeExNames = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
	sizeExUnits = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	stickX[] = {0.2,["Gamma",1,1.5]};
	stickY[] = {0.2,["Gamma",1,1.5]};
	style = 48;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	type = 101;
	w = "SafeZoneWAbs";
	x = "SafeZoneXAbs";
	y = "SafeZoneY + 1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idcMarkerIcon = -1;
	idcMarkerColor = -1;
	class LineMarker
	{
		lineDistanceMin = 3e-005;
		lineLengthMin = 5;
		lineWidthThick = 0.014;
		lineWidthThin = 0.008;
		textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class ActiveMarker
	{
		color[] = {0.3,0.1,0.9,1};
		size = 50;
	};
	class Bunker
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "1.5 * 14 * 0.05";
		size = 14;
	};
	class Bush
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.2 * 14 * 0.05 * 0.05";
		size = "14/2";
	};
	class BusStop
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		importance = 1;
		size = 24;
	};
	class Chapel
	{
		coefMax = 4;
		coefMin = 0.85;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		importance = 1;
		size = 24;
	};
	class Church
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		importance = 1;
		size = 24;
	};
	class Command
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance =1;
		size = 18;
	};
	class Cross
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		importance = 1;
		size = 24;
	};
	class CustomMark
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
		importance = 1;
		size = 24;
	};
	class Fortress
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "2 * 16 * 0.05";
		size = 16;
	};
	class Fountain
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		importance = "1 * 12 * 0.05";
		size = 11;
	};
	class Fuelstation
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		importance = 1;
		size = 24;
	};
	class Hospital
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		importance = 1;
		size = 24;
	};
	class Legend
	{
		color[] = {0,0,0,1};
		colorBackground[] = {1,1,1,0.5};
		font = "PuristaMedium";
		h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "SafeZoneX + 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "SafeZoneY + safezoneH - 4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Lighthouse
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		importance = 1;
		size = 24;
	};
	class power
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		importance = 1;
		size = 24;
	};
	class powersolar
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		importance = 1;
		size = 24;
	};
	class powerwind
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		importance = 1;
		size = 24;
	};
	class powerwave
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		importance = 1;
		size = 24;
	};
	class Quay
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		importance = 1;
		size = 24;
	};
	class Rock
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.1,0.1,0.1,0.8};
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		importance = "0.5 * 12 * 0.05";
		size = 12;
	};
	class Ruin
	{
		coefMax = 4;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		importance = "1.2 * 16 * 0.05";
		size = 16;
	};
	class shipwreck
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\shipwreck_CA.paa";
		importance = 1;
		size = 24;
	};
	class SmallTree
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.6 * 12 * 0.05";
		size = 12;
	};
	class Stack
	{
		coefMax = 4;
		coefMin = 0.9;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		importance = "2 * 16 * 0.05";
		size = 20;
	};
	class Task
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorCanceled[] = {0.7,0.7,0.7,1};
		colorCreated[] = {1,1,1,1};
		colorDone[] = {0.7,1,0.3,1};
		colorFailed[] = {1,0.3,0.2,1};
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		importance = 1;
		size = 27;
	};
	class Tourism
	{
		coefMax = 4;
		coefMin = 0.7;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		importance = "1 * 16 * 0.05";
		size = 16;
	};
	class Transmitter
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		importance = 1;
		size = 24;
	};
	class Tree
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.9 * 16 * 0.05";
		size = 12;
	};
	class ViewTower
	{
		coefMax = 4;
		coefMin = 0.5;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		importance = "2.5 * 16 * 0.05";
		size = 16;
	};
	class Watertower
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		importance = 1;
		size = 24;
	};
	class Waypoint
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 24;
	};
	class WaypointCompleted
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
		importance = 1;
		size = 24;
	};
};