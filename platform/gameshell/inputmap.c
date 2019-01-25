#include <stdlib.h>
#include <SDL_keysym.h>

#include "../libpicofe/input.h"
#include "../libpicofe/in_sdl.h"
#include "../common/input_pico.h"

const struct in_default_bind in_sdl_defbinds[] = {
	{ SDLK_UP,		IN_BINDTYPE_PLAYER12, GBTN_UP },
	{ SDLK_DOWN,	IN_BINDTYPE_PLAYER12, GBTN_DOWN },
	{ SDLK_LEFT,	IN_BINDTYPE_PLAYER12, GBTN_LEFT },
	{ SDLK_RIGHT,	IN_BINDTYPE_PLAYER12, GBTN_RIGHT },
	{ SDLK_j,	IN_BINDTYPE_PLAYER12, GBTN_A },
	{ SDLK_k,	IN_BINDTYPE_PLAYER12, GBTN_B },
	{ SDLK_u,	IN_BINDTYPE_PLAYER12, GBTN_C },
	{ SDLK_RETURN,	IN_BINDTYPE_PLAYER12, GBTN_START },
	{ SDLK_ESCAPE,	IN_BINDTYPE_EMU, PEVB_MENU },
	{ SDLK_KP_MINUS,		IN_BINDTYPE_EMU, PEVB_PICO_PPREV },
	{ SDLK_KP_PLUS,	IN_BINDTYPE_EMU, PEVB_PICO_PNEXT },
	{ SDLK_BACKSPACE,	IN_BINDTYPE_EMU, PEVB_STATE_SAVE },
	{ 0, 0, 0 },
	{ 0, 0, 0 },
	{ 0, 0, 0 }
};

const struct menu_keymap in_sdl_key_map[] =
{
	{ SDLK_UP,	PBTN_UP },
	{ SDLK_DOWN,	PBTN_DOWN },
	{ SDLK_LEFT,	PBTN_LEFT },
	{ SDLK_RIGHT,	PBTN_RIGHT },
	{ SDLK_j,	PBTN_MOK },
	{ SDLK_k,	PBTN_MBACK },
	{ SDLK_u,	PBTN_MA2 },
	{ SDLK_i,	PBTN_MA3 },
	{ SDLK_KP_MINUS,	PBTN_L },
	{ SDLK_KP_PLUS,	PBTN_R },
};

const char * const in_sdl_key_names[SDLK_LAST] = {
	[SDLK_UP] = "UP",
	[SDLK_DOWN] = "DOWN",
	[SDLK_LEFT] = "LEFT",
	[SDLK_RIGHT] = "RIGHT",
	[SDLK_j] = "A",
	[SDLK_k] = "B",
	[SDLK_u] = "X",
	[SDLK_i] = "Y",
	[SDLK_RETURN] = "START",
	[SDLK_SPACE] = "SELECT",
	[SDLK_ESCAPE] = "MENU",
	[SDLK_KP_MINUS] = "-",
	[SDLK_KP_PLUS] = "+",
	[SDLK_BACKSPACE] = "Shift-MENU"
};
