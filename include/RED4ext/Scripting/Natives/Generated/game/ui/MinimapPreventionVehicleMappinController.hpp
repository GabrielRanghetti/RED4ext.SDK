#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapPreventionVehicleMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapPreventionVehicleMappinController";
    static constexpr const char* ALIAS = "MinimapPreventionVehicleMappinController";

};
RED4EXT_ASSERT_SIZE(MinimapPreventionVehicleMappinController, 0x220);
} // namespace game::ui
using gameuiMinimapPreventionVehicleMappinController = game::ui::MinimapPreventionVehicleMappinController;
using MinimapPreventionVehicleMappinController = game::ui::MinimapPreventionVehicleMappinController;
} // namespace RED4ext

// clang-format on
