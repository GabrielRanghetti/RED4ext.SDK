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
struct InstancedOccluderNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldInstancedOccluderNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xF0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(InstancedOccluderNodeInstance, 0xF0);
} // namespace world
using worldInstancedOccluderNodeInstance = world::InstancedOccluderNodeInstance;
} // namespace RED4ext

// clang-format on
