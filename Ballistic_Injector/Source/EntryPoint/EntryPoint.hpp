#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>
#include <random>
#include <string>
#include <thread>
#include <array>
#include <cstddef>
#include <cstdint>


#include "xorstr/xorstr.hpp"

#include "../ActionLogger/ActionLogger.hpp"

#define WIN32_LEAN_AND_MEAN

namespace cfg
{
    static constexpr auto cfg_cache = 0xbbdb40;

    static constexpr auto map = 0xb9f8d0;
    static constexpr auto set_insert = 0x1563130;

    // Method 1:
    //  Here we "cache" a region of memory, by adding it to the cache. Once CFG encouters an address in the provided region, it will think
    //  that it has already processed it and skip it.

    


}