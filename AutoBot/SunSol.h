#pragma once

// System specific regulations for Solaris
//
// Powered by Volkan Güven
// Copyright (c) Volkan Güven
// https://github.com/knoxgon
//

namespace Sun
{
	enum S_SYS
	{
		AIX = 0x001,
		BSD = 0x002,
		FreeBSD = 0x003,
		IRIX = 0x004,
		LinuxRedHat32 = 0x005,
		SunCobalt = 0x006,
		__WIN32 = 0xa,
		__WIN322000 = 0xb,
		__WIN_NT4 = 0xc,
		__MAC_OS = 0xf,
		SPARC = 0x006c
	};
}
