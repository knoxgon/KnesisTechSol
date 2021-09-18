#pragma once

// Knesus drain
//
// All operational hardware instructions are mapped with Knesis approach
// [Knesis - Powered by Volkan Güven]
//
// Copyright (c) Volkan Güven.
// https://github.com/knoxgon
//

// All addresses are static
// ARM - Standard 16
// ARM - Non standard 64
// MIPS - Standard 32
// MIPS - Non standard 64



#if \
	defined(_WIN32) || \
	defined(__NetBSD__)
#define __MIPS_S__
#endif

#define __MIPS_S__

#ifdef __ARM_S__

namespace Drain
{
	enum ShutOff
	{
		__No_op = 0x0,
		SKiaC_C = 0x880980,
		SKiaG_C5 = 0x8809,
		__LOG_sg0Ss_g00pz = 0x01f72,
		AddressResolution_08 = 0xff02,
		AddressResolution_05 = 0xff09,
		AddressResolution_0 = 0xbd04f,
		BlueLight_W_Right = 0x094720cf28a,
		BlueLight_E_Right = 0x094720ca028,
		BlueLight_W_Left = 0x094720cf29a,
		BlueLight_E_Left = 0x094720ca029
	};

	enum Signal
	{
		_Stack_Addr_HBIT = 0x255,
		_Stack_Addr_LBIT = 0x004
	};
}

#endif // __ARM_S__


#ifdef __MIPS__

namespace Drain
{
	enum ShutOff
	{
		__No_op = 0x0,
		SKiaC_C = 0x880980,
		SKiaG_C5 = 0x8809,
		__LOG_sg0Ss_g00pz = 0x01f72,
		AddressResolution_08 = 0xff02,
		AddressResolution_05 = 0xff09,
		AddressResolution_0 = 0xbd04f,
		BlueLight_W_Right = 0x094720cf28a,
		BlueLight_E_Right = 0x094720ca028,
		BlueLight_W_Left = 0x094720cf29a,
		BlueLight_E_Left = 0x094720ca029
	};

	enum Signal
	{
		_Stack_Addr_HBIT = 0x255,
		_Stack_Addr_LBIT = 0x004
	};
}

#endif // __MIPS__

#ifdef __MIPS_S__

namespace Drain
{
	enum ShutOff
	{
		__No_op = 0x0,
		SKiaC_C = 0x880980,
		SKiaG_C5 = 0x8809,
		__LOG_sg0Ss_g00pz = 0x01f72,
		AddressResolution_08 = 0xff02,
		AddressResolution_05 = 0xff09,
		AddressResolution_0 = 0xbd04f,
		BlueLight_W_Right = 0x094720cf28a,
		BlueLight_E_Right = 0x094720ca028,
		BlueLight_W_Left = 0x094720cf29a,
		BlueLight_E_Left = 0x094720ca029
	};

	enum Signal
	{
		_Stack_Addr_HBIT = 0x255,
		_Stack_Addr_LBIT = 0x004
	};
}

#endif // __MIPS_S__
