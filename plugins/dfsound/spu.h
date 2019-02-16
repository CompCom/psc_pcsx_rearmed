/***************************************************************************
                            spu.h  -  description
                             -------------------
    begin                : Wed May 15 2002
    copyright            : (C) 2002 by Pete Bernert
    email                : BlackDove@addcom.de
 ***************************************************************************/
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version. See also the license.txt file for *
 *   additional informations.                                              *
 *                                                                         *
 ***************************************************************************/

void ClearWorkingState(void);
void CALLBACK SPUplayADPCMchannel(xa_decode_t *xap);
int  CALLBACK SPUplayCDDAchannel(short *pcm, int bytes);
int  SPUResetStream(void);
void CALLBACK SPUfadein(void);
void CALLBACK SPUenableRvbConfig(int val);
int  SPUisRvbConfigEnabled(void);
