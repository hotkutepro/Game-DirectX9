#ifndef __DEFAULT_CONSTANT_H__
#define __DEFAULT_CONSTANT_H__

#include <Windows.h>
#include <tchar.h>
#include <typeinfo>

#define MEMORY_LEAK_DEBUG	0

// Sound default information
#define AUDIO_FORMAT_TAG	 WAVE_FORMAT_ADPCM
#define AUDIO_NUM_OF_CHANNEL	 2
#define AUDIO_SAMPLE_SPEED	 22050
#define AUDIO_BITS_PER_SAMPLE	 16
// 1 tap hop Dword cua flags, ghi ro kha nang cua bo dem.
#define AUDIO_FLAGS	 0
#define AUDIO_BUFFER_SIZE	640000
#define AUDIO_GUID	GUID_NULL

// Can chinh ve cac bytes
#define AUDIO_BLOCK_ALIGN(bitPerSample, nChannels)	(WORD)(bitPerSample / 8 * nChannels)
#define AUDIO_AVERAGE_BPS(samplesPerSec, blockAlign)	(DWORD)(samplesPerSec * blockAlign)

// hang so mac dinh ve Text

// 72/96 tỉ lệ chuyển đổi
// /2 or *2 tăng hay giảm kích thước.
#define PIXEL_TO_POINT96(A) ((A/2*72/96))
#define POINT_TO_PIXEL96(A) ((A/2*96/72))

// Day la mau xám trắng
#define DEFAULT_FONT_COLOR 0xFFBCBCBC
#define DEFAULT_FONTSIZE 8
// Fontface = tên font chữ
#define DEFAULT_FONTFACE _T("Mario ")
// Duong dan font
#define  DEFAULT_FONTPATH _T("Resource//font.ttf")




#endif