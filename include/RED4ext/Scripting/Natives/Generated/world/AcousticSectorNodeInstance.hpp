#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct AcousticSectorNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldAcousticSectorNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xB0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(AcousticSectorNodeInstance, 0xB0);
} // namespace world
using worldAcousticSectorNodeInstance = world::AcousticSectorNodeInstance;
} // namespace RED4ext

// clang-format on
