#ifndef Constants_H
#define Constants_H

//Defines to make life easier

#define Vector3 D3DXVECTOR3
#define Vector2 D3DXVECTOR2
#define Matrix D3DXMATRIX
#define Identity D3DXMatrixIdentity
#define Translate D3DXMatrixTranslation
#define Scale D3DXMatrixScaling
#define RotateX D3DXMatrixRotationX
#define RotateY D3DXMatrixRotationY
#define RotateZ D3DXMatrixRotationZ
#define ToRadian D3DXToRadian
#define ToDegree D3DXToDegree
#define Normalize D3DXVec3Normalize;
#define keyPressed(x) GetAsyncKeyState(x)
#define Color(x, y, z) DXColor(x, y, z, 1.0f)

//-----------------------------------------------
// Useful macros
//-----------------------------------------------
// Safely delete pointer referenced item
#define SAFE_DELETE(ptr)       { if (ptr) { delete (ptr); (ptr)=NULL; } }
// Safely release pointer referenced item
#define SAFE_RELEASE(ptr)      { if(ptr) { (ptr)->Release(); (ptr)=NULL; } }
// Safely delete pointer referenced array
#define SAFE_DELETE_ARRAY(ptr) { if(ptr) { delete [](ptr); (ptr)=NULL; } }
// Safely call onLostDevice
#define SAFE_ON_LOST_DEVICE(ptr)    { if(ptr) { ptr->onLostDevice(); } }
// Safely call onResetDevice
#define SAFE_ON_RESET_DEVICE(ptr)   { if(ptr) { ptr->onResetDevice(); } }

// key mappings
// In this game simple constants are used for key mappings. If variables were used
// it would be possible to save and restore key mappings from a data file.
const UCHAR CONSOLE_KEY  = VK_OEM_3;    // `~ key for U.S.
const UCHAR ESC_KEY      = VK_ESCAPE;   // escape key
const UCHAR ALT_KEY      = VK_MENU;     // Alt key
const UCHAR ENTER_KEY    = VK_RETURN;   // Enter key
const UCHAR PlayerLeftKey = 0x41;		// A
const UCHAR PlayerRightKey = 0x44;		// D
const UCHAR PlayerRUpKey = 0x55;		// U
const UCHAR PlayerGUpKey = 0x49;		// I
const UCHAR PlayerBUpKey = 0x4F;		// O
const UCHAR PlayerRDownKey = 0x4A;		// J
const UCHAR PlayerGDownKey = 0x4B;		// K
const UCHAR PlayerBDownKey = 0x4C;		// L
const UCHAR PlayerColorUpKey = 0x4A;//0x57;	// W
const UCHAR PlayerColorDownKey = 0x4C;//0x53;  // S

//-----------------------------------------------
//                  Constants
//-----------------------------------------------
// window
const char CLASS_NAME[] = "ColoredCubeApp";
const char GAME_TITLE[] = "Falling";
const bool FULLSCREEN = false;          // windowed or fullscreen
const UINT GAME_WIDTH = 640;			// width of game in pixels
const UINT GAME_HEIGHT = 480;			// height of game in pixels

// game
const float FRAME_RATE = 200.0f;                // the target frame rate (frames/sec)
const float MIN_FRAME_RATE = 10.0f;             // the minimum frame rate
const float MIN_FRAME_TIME = 1.0f/FRAME_RATE;   // minimum desired time for 1 frame
const float MAX_FRAME_TIME = 1.0f/MIN_FRAME_RATE; // maximum time used in calculations


// audio
const char WAVE_BANK[] = "audio\\Win\\Wave Bank.xwb";
const char SOUND_BANK[] = "audio\\Win\\Sound Bank.xsb";
const char MAIN_TRACK[] = "main";
const char GAME_OVER[] = "gameOver";
const char WOOSH[] = "woosh";

#endif