#pragma once

// System specific regulations for OpenBSD
//
// Future release - DSI integration
//                - Support for discountinued platforms
//
// Powered by Volkan Güven
// Copyright (c) Volkan Güven
// https://github.com/knoxgon
//

namespace OBSD
{
	enum S_SYS
	{
		i386 = 0x04,
		landisk = 0x08,
		loongson = 0xa,
		riscv64 = 0xa02,
		sparc64 = 0x06,
		hppa = 0xb,
		alpha = 0xba,
		arm64 = 0xb2,
		amd64 = 0xb6,
		luna88k = 0xb4,
		macppc = 0xb6,
		armv7 = 0xc,
		octeon = 0xc2,
		powerpc64 = 0xc4
	};
	enum D_SYS
	{
		aviion,
		vax,
		zaurus,
		mvme68k,
		hppa64,
		cats,
		hp300,
		mac68k,
		solbourne,
		mvme88k,
		palm,
		pegasos,
		pmax,
		sgi,
		arc,
		armish,
		amiga,
		socppc,
		sparc,
		sun3
	};
}
