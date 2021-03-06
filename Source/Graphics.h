/*
** FamiTracker - NES/Famicom sound tracker
** Copyright (C) 2005-2014  Jonathan Liss
**
** 0CC-FamiTracker is (C) 2014-2018 HertzDevil
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Library General Public License for more details.  To obtain a
** copy of the GNU Library General Public License, write to the Free
** Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
**
** Any permitted reproduction of these routines, in whole or in part,
** must bear this legend.
*/


#pragma once

#include "stdafx.h"		// // //

// Various graphics helpers

void GradientRectTriple(CDC &DC, int x, int y, int w, int h, COLORREF c1, COLORREF c2, COLORREF c3);		// // //
void GradientBar(CDC &DC, int x, int y, int w, int h, COLORREF col_fg, COLORREF col_bg);
void GradientRect(CDC &DC, int x, int y, int w, int h, COLORREF top_col, COLORREF bottom_col);

// // // support for rectangles
void GradientRectTriple(CDC &DC, const CRect &r, COLORREF c1, COLORREF c2, COLORREF c3);
void GradientBar(CDC &DC, const CRect &r, COLORREF col_fg, COLORREF col_bg);
void GradientRect(CDC &DC, const CRect &r, COLORREF top_col, COLORREF bottom_col);

void BlurBuffer(COLORREF *pBuffer, int Width, int Height, const int *pColorDecay);
void PutPixel(COLORREF *pBuffer, int Width, int Height, float x, float y, COLORREF col);
