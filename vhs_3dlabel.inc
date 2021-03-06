/** ======================================================================== **\
	3D Label

| Description:
This system adds new functions for working with 3D labels for vehicle. Moreover,
it works with streamer.

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


#if defined _inc_vhs_3dlabel
	#undef _inc_vhs_3dlabel
#endif

#if defined _TDW_VHCOL__3DLABEL
	#endinput
#endif

#define _TDW_VHCOL__3DLABEL

#include "tdw_vehicle/detect/streamer"
#include "tdw_vehicle/basic_functions"
#include "tdw_vehicle/system/3dtext_label"
