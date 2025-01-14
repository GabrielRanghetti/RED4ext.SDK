#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineplayeractionsLocomotionBase.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineplayeractionsLocomotionForceIdle : game::state::MachineplayeractionsLocomotionBase
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsLocomotionForceIdle";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x130 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(MachineplayeractionsLocomotionForceIdle, 0x130);
} // namespace game::state
using gamestateMachineplayeractionsLocomotionForceIdle = game::state::MachineplayeractionsLocomotionForceIdle;
} // namespace RED4ext

// clang-format on
