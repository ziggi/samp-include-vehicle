/** ======================================================================== **\
	Streamer support

| License:
Copyright (c) 2016 Double V

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1.	The origin of this software must not be misrepresented; you must not
	claim that you wrote the original software. If you use this software
	in a product, an acknowledgement in the product documentation would be
	appreciated but is not required.
2.	Altered source versions must be plainly marked as such, and must not be
	misrepresented as being the original software.
3.	This notice may not be removed or altered from any source distribution.
\** ======================================================================== **/


#if defined _inc_streamer
	#undef _inc_streamer
#endif

#if defined _TDW_VHLIB_STREAMER
	#endinput
#endif

#define _TDW_VHLIB_STREAMER


#if defined _TDW_VEHICLE_STREAMER_DEFINED
	#endinput
#endif

#if defined TDW_VEHICLE_NOT_USE_STREAMER
	#define _TDW_VEHICLE_STREAMER_DEFINED 0
#else
	#if !defined Streamer_IncludeFileVersion
		#tryinclude <streamer>
	#elseif !defined Streamer_IncludeFileVersion
		#tryinclude "../include/streamer.inc"
	#endif

	#if !defined Streamer_IncludeFileVersion
		#define _TDW_VEHICLE_STREAMER_DEFINED 0
	#else
		#define _TDW_VEHICLE_STREAMER_DEFINED 1
	#endif
#endif
