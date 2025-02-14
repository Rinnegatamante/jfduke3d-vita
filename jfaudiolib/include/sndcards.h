/*
Copyright (C) 1994-1995 Apogee Software, Ltd.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
/**********************************************************************
   module: SNDCARDS.H

   author: James R. Dose
   date:   March 31, 1994

   Contains enumerated type definitions for sound cards.

   (c) Copyright 1994 James R. Dose.  All Rights Reserved.
**********************************************************************/

#ifndef __SNDCARDS_H
#define __SNDCARDS_H

#define ASS_VERSION_STRING "JonoF 20090718"

typedef enum
   {
   ASS_NoSound,
#ifdef _3DS
   ASS_CTR,
#endif
   ASS_SDL,
   ASS_CoreAudio,
   ASS_DirectSound,
   ASS_WinMM,
   ASS_FluidSynth,
   ASS_ALSA,
   ASS_NumSoundCards,
	ASS_AutoDetect = -2
   } soundcardnames;

#endif
