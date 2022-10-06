#ifndef _ENUMS_H_
#define _ENUMS_H_

typedef enum
{
	BUTTON_LAYOUT_STICK,
	BUTTON_LAYOUT_STICKLESS,
	BUTTON_LAYOUT_BUTTONS_ANGLED,
	BUTTON_LAYOUT_BUTTONS_BASIC,
	BUTTON_LAYOUT_KEYBOARD_ANGLED,
	BUTTON_LAYOUT_KEYBOARDA,
	BUTTON_LAYOUT_DANCEPADA,
	BUTTON_LAYOUT_TWINSTICKA,
} ButtonLayout;

typedef enum
{
	BUTTON_LAYOUT_ARCADE,
	BUTTON_LAYOUT_STICKLESSB,
	BUTTON_LAYOUT_BUTTONS_ANGLEDB,
	BUTTON_LAYOUT_VEWLIX,
	BUTTON_LAYOUT_VEWLIX7,
	BUTTON_LAYOUT_CAPCOM,
	BUTTON_LAYOUT_CAPCOM6,
	BUTTON_LAYOUT_SEGA2P,
	BUTTON_LAYOUT_NOIR8,
	BUTTON_LAYOUT_KEYBOARDB,
	BUTTON_LAYOUT_DANCEPADB,
	BUTTON_LAYOUT_TWINSTICKB,	
} ButtonLayoutRight;

typedef enum
{
    STATICSPLASH,
    CLOSEIN,
    CLOSEINCUSTOM,
    NOSPLASH,
} SplashMode;

typedef enum
{
	CONFIG_TYPE_WEB = 0,
	CONFIG_TYPE_SERIAL,
	CONFIG_TYPE_DISPLAY
} ConfigType;

#endif