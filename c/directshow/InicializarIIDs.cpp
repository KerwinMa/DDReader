/*
este cara existe somente para inicilizar os IIDs

se nao existir, da erro no link, tipo:


testesDlg.obj : error LNK2001: unresolved external symbol _IID_IBasicAudio
testesDlg.obj : error LNK2001: unresolved external symbol _IID_IMediaSeeking
testesDlg.obj : error LNK2001: unresolved external symbol _IID_IMediaEvent
testesDlg.obj : error LNK2001: unresolved external symbol _IID_IMediaControl
testesDlg.obj : error LNK2001: unresolved external symbol _CLSID_FilterGraph
testesDlg.obj : error LNK2001: unresolved external symbol _IID_IGraphBuilder
Debug/testes.exe : fatal error LNK1120: 6 unresolved externals

este cara NAO PODE usar o precompiled header. Se estiver usando, vai dar erro de compilacao.
*/

#define INITGUID
#include "..\lidad\stdafx_xmlsec.h"

#include <dshow.h>


//do directx
//estes nao estao definidos nos .H, entao definimos na mao
DEFINE_GUID(IID_IMediaSeeking,0x36B73880,0xC2C8,0x11CF,0x8B,0x46,0x00,0x80,0x5F,0x6C,0xEF,0x60);
DEFINE_GUID(IID_IGraphBuilder,0x56A868A9,0x0AD4,0x11CE,0xB0,0x3A,0x00,0x20,0xAF,0x0B,0xA7,0x70);


//para usar o sapi4
/*
DEFINE_GUID(CLSID_MMAudioDest, 0xcb96b400, 0xc743, 0x11cd, 0x80, 0xe5, 0x0, 0xaa, 0x0, 0x3e, 0x4b, 0x50);
DEFINE_GUID(IID_IAudioMultiMediaDevice, 0xb68ad320, 0xc743, 0x11cd, 0x80, 0xe5, 0x0, 0xaa, 0x0, 0x3e, 0x4b, 0x50);
DEFINE_GUID(IID_ITTSNotifySinkW, 0xC0FA8F40L, 0x4A46, 0x101B, 0x93, 0x1A, 0x00, 0xAA, 0x00, 0x47, 0xBA, 0x4F);
DEFINE_GUID(IID_ITTSBufNotifySink, 0xe4963d40, 0xc743, 0x11cd, 0x80, 0xe5, 0x0, 0xaa, 0x0, 0x3e, 0x4b, 0x50);
DEFINE_GUID(IID_ITTSNotifySink2W, 0x599f77e1, 0xe42e, 0x11d1, 0xbe, 0xd8, 0x0, 0x60, 0x8, 0x31, 0x7c, 0xe8);
DEFINE_GUID(IID_ITTSAttributesW, 0x1287A280L, 0x4A47, 0x101B, 0x93, 0x1A, 0x00, 0xAA, 0x00, 0x47, 0xBA, 0x4F);
DEFINE_GUID(CLSID_TTSEnumerator, 0xd67c0280, 0xc743, 0x11cd, 0x80, 0xe5, 0x0, 0xaa, 0x0, 0x3e, 0x4b, 0x50);
DEFINE_GUID(IID_ITTSEnumW, 0x6B837B20L, 0x4A47, 0x101B, 0x93, 0x1A, 0x00, 0xAA, 0x00, 0x47, 0xBA, 0x4F);
DEFINE_GUID(IID_ITTSFindW, 0x7AA42960L, 0x4A47, 0x101B, 0x93, 0x1A, 0x00, 0xAA, 0x00, 0x47, 0xBA, 0x4F);
*/

