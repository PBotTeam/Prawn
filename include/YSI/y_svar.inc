/*----------------------------------------------------------------------------*\
					=================================
					 y_svar - Automatic data saving.
					=================================
Description:
	Declares data to be automatically saved and loaded for the whole server.
Legal:
	Version: MPL 1.1
	
	The contents of this file are subject to the Mozilla Public License Version 
	1.1 (the "License"); you may not use this file except in compliance with 
	the License. You may obtain a copy of the License at 
	http://www.mozilla.org/MPL/
	
	Software distributed under the License is distributed on an "AS IS" basis,
	WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
	for the specific language governing rights and limitations under the
	License.
	
	The Original Code is the YSI utils include.
	
	The Initial Developer of the Original Code is Alex "Y_Less" Cole.
	Portions created by the Initial Developer are Copyright (C) 2011
	the Initial Developer. All Rights Reserved.
	
	Contributors:
		ZeeX, koolk, JoeBullet/Google63, g_aSlice/Slice
	
	Thanks:
		JoeBullet/Google63 - Handy arbitrary ASM jump code using SCTRL.
		ZeeX - Very productive conversations.
		koolk - IsPlayerinAreaEx code.
		TheAlpha - Danish translation.
		breadfish - German translation.
		Fireburn - Dutch translation.
		yom - French translation.
		50p - Polish translation.
		Zamaroht - Spanish translation.
		Dracoblue, sintax, mabako, Xtreme, other coders - Producing other modes
			for me to strive to better.
		Pixels^ - Running XScripters where the idea was born.
		Matite - Pestering me to release it and using it.
	
	Very special thanks to:
		Thiadmer - PAWN, whose limits continue to amaze me!
		Kye/Kalcor - SA:MP.
		SA:MP Team past, present and future - SA:MP.
	
Version:
	0.1
Changelog:
	25/02/12:
		First version.
Functions:
	Stock:
		-
	Inline:
		-
Variables:
	Global:
		-
\*----------------------------------------------------------------------------*/

// y_uvars

#if !defined MODE_NAME
	#error Please define "MODE_NAME" before including y_svar.
#endif

#if defined SVAR_USE_MYSQL
	#if _YSI_PLUGINS_MYSQL == 7
		#include "y_svar/blueg7"
	#elseif _YSI_PLUGINS_MYSQL == 6
		#include "y_svar/blueg6"
	#elseif _YSI_PLUGINS_MYSQL == 7
		#include "y_svar/stricken"
	#else
		#error No MySQL plugin found.
	#endif
#elseif defined SVAR_USE_SQLITE
	#include "y_svar/sqlite"
#else
	#include "y_svar/ini"
#endif
#if defined YSI_TESTS
	#include "y_testing"
	#include "y_svar/tests"
#endif
