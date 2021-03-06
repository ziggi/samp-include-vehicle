/** ======================================================================== **\
	Foreach support

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


#if defined _inc_foreach
	#undef _inc_foreach
#endif

#if defined _TDW_VHLIB__FOREACH
	#endinput
#endif

#define _TDW_VHLIB__FOREACH


#if defined _TDW_VEHICLE_FOREACH_DEFINED
	#endinput
#endif

#if defined TDW_VEHICLE_NOT_USE_FOREACH
	#define _TDW_VEHICLE_FOREACH_DEFINED 0
#else
	#if !defined _FOREACH_NO_TEST
		#define _FOREACH_NO_TEST
	#endif

	#if !defined _FOREACH_LOCAL_VERSION
		#tryinclude <foreach>
	#elseif !defined _FOREACH_LOCAL_VERSION
		#tryinclude "../include/foreach.inc"
	#elseif !defined _FOREACH_LOCAL_VERSION
		#tryinclude <foreach2>
	#elseif !defined _FOREACH_LOCAL_VERSION
		#tryinclude "../include/foreach2.inc"
	#endif

	#if !defined _FOREACH_LOCAL_VERSION
		#define _TDW_VEHICLE_FOREACH_DEFINED 0
	#else
		#define _TDW_VEHICLE_FOREACH_DEFINED 1
	#endif
#endif
