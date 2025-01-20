#include "fieldmap.h"

// Whether a palette has a night version, located at ((x + 9) % 16).pal
#define SWAP_PAL(x) ((x) < NUM_PALS_IN_PRIMARY ? 1 << (x) : 1 << ((x) - NUM_PALS_IN_PRIMARY))

// NOTE: Instead of using LIGHT_PAL, 
// consider taking a look at the .pla files
// to mark colors as lights, instead.
// The old method *should* still work, however.
// See the README for details.

// Whether a palette has lights
// the color indices to blend are stored in the palette's color 0
#define LIGHT_PAL(x) ((x) < NUM_PALS_IN_PRIMARY ? 1 << (x) : 1 << ((x) - NUM_PALS_IN_PRIMARY))

const struct Tileset gTileset_General =
{
    .isCompressed = TRUE,
    .swapPalettes = SWAP_PAL(4),
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_General,
    .palettes = gTilesetPalettes_General,
    .metatiles = gMetatiles_General,
    .metatileAttributes = gMetatileAttributes_General,
    .callback = InitTilesetAnim_General,
};

const struct Tileset gTileset_Petalburg =
{
    .isCompressed = TRUE,
    .swapPalettes = SWAP_PAL(9),
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Petalburg,
    .palettes = gTilesetPalettes_Petalburg,
    .metatiles = gMetatiles_Petalburg,
    .metatileAttributes = gMetatileAttributes_Petalburg,
    .callback = InitTilesetAnim_Petalburg,
};

const struct Tileset gTileset_Rustboro =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Rustboro,
    .palettes = gTilesetPalettes_Rustboro,
    .metatiles = gMetatiles_Rustboro,
    .metatileAttributes = gMetatileAttributes_Rustboro,
    .callback = InitTilesetAnim_Rustboro,
};

const struct Tileset gTileset_Dewford =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Dewford,
    .palettes = gTilesetPalettes_Dewford,
    .metatiles = gMetatiles_Dewford,
    .metatileAttributes = gMetatileAttributes_Dewford,
    .callback = InitTilesetAnim_Dewford,
};

const struct Tileset gTileset_Slateport =
{
    .isCompressed = TRUE,
    .swapPalettes = SWAP_PAL(6),
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Slateport,
    .palettes = gTilesetPalettes_Slateport,
    .metatiles = gMetatiles_Slateport,
    .metatileAttributes = gMetatileAttributes_Slateport,
    .callback = InitTilesetAnim_Slateport,
};

const struct Tileset gTileset_Mauville =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Mauville,
    .palettes = gTilesetPalettes_Mauville,
    .metatiles = gMetatiles_Mauville,
    .metatileAttributes = gMetatileAttributes_Mauville,
    .callback = InitTilesetAnim_Mauville,
};

const struct Tileset gTileset_Lavaridge =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Lavaridge,
    .palettes = gTilesetPalettes_Lavaridge,
    .metatiles = gMetatiles_Lavaridge,
    .metatileAttributes = gMetatileAttributes_Lavaridge,
    .callback = InitTilesetAnim_Lavaridge,
};

const struct Tileset gTileset_Fallarbor =
{
    .isCompressed = TRUE,
    .swapPalettes = SWAP_PAL(7),
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Fallarbor,
    .palettes = gTilesetPalettes_Fallarbor,
    .metatiles = gMetatiles_Fallarbor,
    .metatileAttributes = gMetatileAttributes_Fallarbor,
    .callback = InitTilesetAnim_Fallarbor,
};

const struct Tileset gTileset_Fortree =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Fortree,
    .palettes = gTilesetPalettes_Fortree,
    .metatiles = gMetatiles_Fortree,
    .metatileAttributes = gMetatileAttributes_Fortree,
    .callback = InitTilesetAnim_Fortree,
};

const struct Tileset gTileset_Lilycove =
{
    .isCompressed = TRUE,
    .swapPalettes = SWAP_PAL(6),
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Lilycove,
    .palettes = gTilesetPalettes_Lilycove,
    .metatiles = gMetatiles_Lilycove,
    .metatileAttributes = gMetatileAttributes_Lilycove,
    .callback = InitTilesetAnim_Lilycove,
};

const struct Tileset gTileset_Mossdeep =
{
    .isCompressed = TRUE,
    .swapPalettes = SWAP_PAL(8),
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Mossdeep,
    .palettes = gTilesetPalettes_Mossdeep,
    .metatiles = gMetatiles_Mossdeep,
    .metatileAttributes = gMetatileAttributes_Mossdeep,
    .callback = InitTilesetAnim_Mossdeep,
};

const struct Tileset gTileset_EverGrande =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_EverGrande,
    .palettes = gTilesetPalettes_EverGrande,
    .metatiles = gMetatiles_EverGrande,
    .metatileAttributes = gMetatileAttributes_EverGrande,
    .callback = InitTilesetAnim_EverGrande,
    .swapPalettes = SWAP_PAL(8),
};

const struct Tileset gTileset_Pacifidlog =
{
    .isCompressed = TRUE,
    .swapPalettes = SWAP_PAL(9),
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Pacifidlog,
    .palettes = gTilesetPalettes_Pacifidlog,
    .metatiles = gMetatiles_Pacifidlog,
    .metatileAttributes = gMetatileAttributes_Pacifidlog,
    .callback = InitTilesetAnim_Pacifidlog,
};

const struct Tileset gTileset_Sootopolis =
{
    .isCompressed = TRUE,
    .swapPalettes = SWAP_PAL(6),
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Sootopolis,
    .palettes = gTilesetPalettes_Sootopolis,
    .metatiles = gMetatiles_Sootopolis,
    .metatileAttributes = gMetatileAttributes_Sootopolis,
    .callback = InitTilesetAnim_Sootopolis,
};

const struct Tileset gTileset_BattleFrontierOutsideWest =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleFrontierOutsideWest,
    .palettes = gTilesetPalettes_BattleFrontierOutsideWest,
    .metatiles = gMetatiles_BattleFrontierOutsideWest,
    .metatileAttributes = gMetatileAttributes_BattleFrontierOutsideWest,
    .callback = InitTilesetAnim_BattleFrontierOutsideWest,
};

const struct Tileset gTileset_BattleFrontierOutsideEast =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleFrontierOutsideEast,
    .palettes = gTilesetPalettes_BattleFrontierOutsideEast,
    .metatiles = gMetatiles_BattleFrontierOutsideEast,
    .metatileAttributes = gMetatileAttributes_BattleFrontierOutsideEast,
    .callback = InitTilesetAnim_BattleFrontierOutsideEast,
};

const struct Tileset gTileset_Building =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_InsideBuilding,
    .palettes = gTilesetPalettes_InsideBuilding,
    .metatiles = gMetatiles_InsideBuilding,
    .metatileAttributes = gMetatileAttributes_InsideBuilding,
    .callback = InitTilesetAnim_Building,
};

const struct Tileset gTileset_Shop =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Shop,
    .palettes = gTilesetPalettes_Shop,
    .metatiles = gMetatiles_Shop,
    .metatileAttributes = gMetatileAttributes_Shop,
    .callback = NULL,
};

const struct Tileset gTileset_PokemonCenter =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PokemonCenter,
    .palettes = gTilesetPalettes_PokemonCenter,
    .metatiles = gMetatiles_PokemonCenter,
    .metatileAttributes = gMetatileAttributes_PokemonCenter,
    .callback = NULL,
};

const struct Tileset gTileset_Cave =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Cave,
    .palettes = gTilesetPalettes_Cave,
    .metatiles = gMetatiles_Cave,
    .metatileAttributes = gMetatileAttributes_Cave,
    .callback = InitTilesetAnim_Cave,
};

const struct Tileset gTileset_PokemonSchool =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PokemonSchool,
    .palettes = gTilesetPalettes_PokemonSchool,
    .metatiles = gMetatiles_PokemonSchool,
    .metatileAttributes = gMetatileAttributes_PokemonSchool,
    .callback = NULL,
};

const struct Tileset gTileset_PokemonFanClub =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PokemonFanClub,
    .palettes = gTilesetPalettes_PokemonFanClub,
    .metatiles = gMetatiles_PokemonFanClub,
    .metatileAttributes = gMetatileAttributes_PokemonFanClub,
    .callback = NULL,
};

const struct Tileset gTileset_Unused1 =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Unused1,
    .palettes = gTilesetPalettes_Unused1,
    .metatiles = gMetatiles_Unused1,
    .metatileAttributes = gMetatileAttributes_Unused1,
    .callback = NULL,
};

const struct Tileset gTileset_MeteorFalls =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MeteorFalls,
    .palettes = gTilesetPalettes_MeteorFalls,
    .metatiles = gMetatiles_MeteorFalls,
    .metatileAttributes = gMetatileAttributes_MeteorFalls,
    .callback = NULL,
};

const struct Tileset gTileset_OceanicMuseum =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_OceanicMuseum,
    .palettes = gTilesetPalettes_OceanicMuseum,
    .metatiles = gMetatiles_OceanicMuseum,
    .metatileAttributes = gMetatileAttributes_OceanicMuseum,
    .callback = NULL,
};

const struct Tileset gTileset_CableClub =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_CableClub,
    .palettes = gTilesetPalettes_CableClub,
    .metatiles = gMetatiles_CableClub,
    .metatileAttributes = gMetatileAttributes_CableClub,
    .callback = NULL,
};

const struct Tileset gTileset_SeashoreHouse =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SeashoreHouse,
    .palettes = gTilesetPalettes_SeashoreHouse,
    .metatiles = gMetatiles_SeashoreHouse,
    .metatileAttributes = gMetatileAttributes_SeashoreHouse,
    .callback = NULL,
};

const struct Tileset gTileset_PrettyPetalFlowerShop =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PrettyPetalFlowerShop,
    .palettes = gTilesetPalettes_PrettyPetalFlowerShop,
    .metatiles = gMetatiles_PrettyPetalFlowerShop,
    .metatileAttributes = gMetatileAttributes_PrettyPetalFlowerShop,
    .callback = NULL,
};

const struct Tileset gTileset_PokemonDayCare =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PokemonDayCare,
    .palettes = gTilesetPalettes_PokemonDayCare,
    .metatiles = gMetatiles_PokemonDayCare,
    .metatileAttributes = gMetatileAttributes_PokemonDayCare,
    .callback = NULL,
};

const struct Tileset gTileset_Facility =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Facility,
    .palettes = gTilesetPalettes_Facility,
    .metatiles = gMetatiles_Facility,
    .metatileAttributes = gMetatileAttributes_Facility,
    .callback = NULL,
};

const struct Tileset gTileset_BikeShop =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BikeShop,
    .palettes = gTilesetPalettes_BikeShop,
    .metatiles = gMetatiles_BikeShop,
    .metatileAttributes = gMetatileAttributes_BikeShop,
    .callback = InitTilesetAnim_BikeShop,
};

const struct Tileset gTileset_RusturfTunnel =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_RusturfTunnel,
    .palettes = gTilesetPalettes_RusturfTunnel,
    .metatiles = gMetatiles_RusturfTunnel,
    .metatileAttributes = gMetatileAttributes_RusturfTunnel,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseBrownCave =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseBrownCave,
    .palettes = gTilesetPalettes_SecretBaseBrownCave,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseTree =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseTree,
    .palettes = gTilesetPalettes_SecretBaseTree,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseShrub =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseShrub,
    .palettes = gTilesetPalettes_SecretBaseShrub,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseBlueCave =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseBlueCave,
    .palettes = gTilesetPalettes_SecretBaseBlueCave,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseYellowCave =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseYellowCave,
    .palettes = gTilesetPalettes_SecretBaseYellowCave,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseRedCave =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseRedCave,
    .palettes = gTilesetPalettes_SecretBaseRedCave,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_InsideOfTruck =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_InsideOfTruck,
    .palettes = gTilesetPalettes_InsideOfTruck,
    .metatiles = gMetatiles_InsideOfTruck,
    .metatileAttributes = gMetatileAttributes_InsideOfTruck,
    .callback = NULL,
};

const struct Tileset gTileset_Unused2 =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Unused2,
    .palettes = gTilesetPalettes_Unused2,
    .metatiles = gMetatiles_Unused2,
    .metatileAttributes = gMetatileAttributes_Unused2,
    .callback = NULL,
};

const struct Tileset gTileset_Contest =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Contest,
    .palettes = gTilesetPalettes_Contest,
    .metatiles = gMetatiles_Contest,
    .metatileAttributes = gMetatileAttributes_Contest,
    .callback = NULL,
};

const struct Tileset gTileset_LilycoveMuseum =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_LilycoveMuseum,
    .palettes = gTilesetPalettes_LilycoveMuseum,
    .metatiles = gMetatiles_LilycoveMuseum,
    .metatileAttributes = gMetatileAttributes_LilycoveMuseum,
    .callback = NULL,
};

const struct Tileset gTileset_BrendansMaysHouse =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BrendansMaysHouse,
    .palettes = gTilesetPalettes_BrendansMaysHouse,
    .metatiles = gMetatiles_BrendansMaysHouse,
    .metatileAttributes = gMetatileAttributes_BrendansMaysHouse,
    .callback = NULL,
};

const struct Tileset gTileset_Lab =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Lab,
    .palettes = gTilesetPalettes_Lab,
    .metatiles = gMetatiles_Lab,
    .metatileAttributes = gMetatileAttributes_Lab,
    .callback = NULL,
};

const struct Tileset gTileset_Underwater =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Underwater,
    .palettes = gTilesetPalettes_Underwater,
    .metatiles = gMetatiles_Underwater,
    .metatileAttributes = gMetatileAttributes_Underwater,
    .callback = InitTilesetAnim_Underwater,
};

const struct Tileset gTileset_PetalburgGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PetalburgGym,
    .palettes = gTilesetPalettes_PetalburgGym,
    .metatiles = gMetatiles_PetalburgGym,
    .metatileAttributes = gMetatileAttributes_PetalburgGym,
    .callback = NULL,
};

const struct Tileset gTileset_SootopolisGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SootopolisGym,
    .palettes = gTilesetPalettes_SootopolisGym,
    .metatiles = gMetatiles_SootopolisGym,
    .metatileAttributes = gMetatileAttributes_SootopolisGym,
    .callback = InitTilesetAnim_SootopolisGym,
};

const struct Tileset gTileset_GenericBuilding =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_GenericBuilding,
    .palettes = gTilesetPalettes_GenericBuilding,
    .metatiles = gMetatiles_GenericBuilding,
    .metatileAttributes = gMetatileAttributes_GenericBuilding,
    .callback = NULL,
};

const struct Tileset gTileset_MauvilleGameCorner =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MauvilleGameCorner,
    .palettes = gTilesetPalettes_MauvilleGameCorner,
    .metatiles = gMetatiles_MauvilleGameCorner,
    .metatileAttributes = gMetatileAttributes_MauvilleGameCorner,
    .callback = NULL,
};

const struct Tileset gTileset_RustboroGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_RustboroGym,
    .palettes = gTilesetPalettes_RustboroGym,
    .metatiles = gMetatiles_RustboroGym,
    .metatileAttributes = gMetatileAttributes_RustboroGym,
    .callback = NULL,
};

const struct Tileset gTileset_DewfordGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_DewfordGym,
    .palettes = gTilesetPalettes_DewfordGym,
    .metatiles = gMetatiles_DewfordGym,
    .metatileAttributes = gMetatileAttributes_DewfordGym,
    .callback = NULL,
};

const struct Tileset gTileset_MauvilleGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MauvilleGym,
    .palettes = gTilesetPalettes_MauvilleGym,
    .metatiles = gMetatiles_MauvilleGym,
    .metatileAttributes = gMetatileAttributes_MauvilleGym,
    .callback = InitTilesetAnim_MauvilleGym,
};

const struct Tileset gTileset_LavaridgeGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_LavaridgeGym,
    .palettes = gTilesetPalettes_LavaridgeGym,
    .metatiles = gMetatiles_LavaridgeGym,
    .metatileAttributes = gMetatileAttributes_LavaridgeGym,
    .callback = NULL,
};

const struct Tileset gTileset_TrickHousePuzzle =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_TrickHousePuzzle,
    .palettes = gTilesetPalettes_TrickHousePuzzle,
    .metatiles = gMetatiles_TrickHousePuzzle,
    .metatileAttributes = gMetatileAttributes_TrickHousePuzzle,
    .callback = NULL,
};

const struct Tileset gTileset_FortreeGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_FortreeGym,
    .palettes = gTilesetPalettes_FortreeGym,
    .metatiles = gMetatiles_FortreeGym,
    .metatileAttributes = gMetatileAttributes_FortreeGym,
    .callback = NULL,
};

const struct Tileset gTileset_MossdeepGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MossdeepGym,
    .palettes = gTilesetPalettes_MossdeepGym,
    .metatiles = gMetatiles_MossdeepGym,
    .metatileAttributes = gMetatileAttributes_MossdeepGym,
    .callback = NULL,
};

const struct Tileset gTileset_InsideShip =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_InsideShip,
    .palettes = gTilesetPalettes_InsideShip,
    .metatiles = gMetatiles_InsideShip,
    .metatileAttributes = gMetatileAttributes_InsideShip,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBase =
{
    .isCompressed = FALSE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_SecretBase,
    .palettes = gTilesetPalettes_SecretBase,
    .metatiles = gMetatiles_SecretBasePrimary,
    .metatileAttributes = gMetatileAttributes_SecretBasePrimary,
    .callback = NULL,
};

const struct Tileset * const gTilesetPointer_SecretBase = &gTileset_SecretBase;
const struct Tileset * const gTilesetPointer_SecretBaseRedCave = &gTileset_SecretBaseRedCave;

const struct Tileset gTileset_EliteFour =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_EliteFour,
    .palettes = gTilesetPalettes_EliteFour,
    .metatiles = gMetatiles_EliteFour,
    .metatileAttributes = gMetatileAttributes_EliteFour,
    .callback = InitTilesetAnim_EliteFour,
};

const struct Tileset gTileset_BattleFrontier =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleFrontier,
    .palettes = gTilesetPalettes_BattleFrontier,
    .metatiles = gMetatiles_BattleFrontier,
    .metatileAttributes = gMetatileAttributes_BattleFrontier,
    .callback = NULL,
};

const struct Tileset gTileset_BattlePalace =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattlePalace,
    .palettes = gTilesetPalettes_BattlePalace,
    .metatiles = gMetatiles_BattlePalace,
    .metatileAttributes = gMetatileAttributes_BattlePalace,
    .callback = NULL,
};

const struct Tileset gTileset_BattleDome =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleDome,
    .palettes = gTilesetPalettes_BattleDome,
    .metatiles = gMetatiles_BattleDome,
    .metatileAttributes = gMetatileAttributes_BattleDome,
    .callback = InitTilesetAnim_BattleDome,
};

const struct Tileset gTileset_BattleFactory =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleFactory,
    .palettes = gTilesetPalettes_BattleFactory,
    .metatiles = gMetatiles_BattleFactory,
    .metatileAttributes = gMetatileAttributes_BattleFactory,
    .callback = NULL,
};

const struct Tileset gTileset_BattlePike =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattlePike,
    .palettes = gTilesetPalettes_BattlePike,
    .metatiles = gMetatiles_BattlePike,
    .metatileAttributes = gMetatileAttributes_BattlePike,
    .callback = NULL,
};

const struct Tileset gTileset_BattleArena =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleArena,
    .palettes = gTilesetPalettes_BattleArena,
    .metatiles = gMetatiles_BattleArena,
    .metatileAttributes = gMetatileAttributes_BattleArena,
    .callback = NULL,
};

const struct Tileset gTileset_BattlePyramid =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattlePyramid,
    .palettes = gTilesetPalettes_BattlePyramid,
    .metatiles = gMetatiles_BattlePyramid,
    .metatileAttributes = gMetatileAttributes_BattlePyramid,
    .callback = InitTilesetAnim_BattlePyramid,
};

const struct Tileset gTileset_MirageTower =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MirageTower,
    .palettes = gTilesetPalettes_MirageTower,
    .metatiles = gMetatiles_MirageTower,
    .metatileAttributes = gMetatileAttributes_MirageTower,
    .callback = NULL,
};

const struct Tileset gTileset_MossdeepGameCorner =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MossdeepGameCorner,
    .palettes = gTilesetPalettes_MossdeepGameCorner,
    .metatiles = gMetatiles_MossdeepGameCorner,
    .metatileAttributes = gMetatileAttributes_MossdeepGameCorner,
    .callback = NULL,
};

const struct Tileset gTileset_IslandHarbor =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_IslandHarbor,
    .palettes = gTilesetPalettes_IslandHarbor,
    .metatiles = gMetatiles_IslandHarbor,
    .metatileAttributes = gMetatileAttributes_IslandHarbor,
    .callback = NULL,
};

const struct Tileset gTileset_TrainerHill =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_TrainerHill,
    .palettes = gTilesetPalettes_TrainerHill,
    .metatiles = gMetatiles_TrainerHill,
    .metatileAttributes = gMetatileAttributes_TrainerHill,
    .callback = NULL,
};

const struct Tileset gTileset_NavelRock =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_NavelRock,
    .palettes = gTilesetPalettes_NavelRock,
    .metatiles = gMetatiles_NavelRock,
    .metatileAttributes = gMetatileAttributes_NavelRock,
    .callback = NULL,
};

const struct Tileset gTileset_BattleFrontierRankingHall =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleFrontierRankingHall,
    .palettes = gTilesetPalettes_BattleFrontierRankingHall,
    .metatiles = gMetatiles_BattleFrontierRankingHall,
    .metatileAttributes = gMetatileAttributes_BattleFrontierRankingHall,
    .callback = NULL,
};

const struct Tileset gTileset_BattleTent =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleTent,
    .palettes = gTilesetPalettes_BattleTent,
    .metatiles = gMetatiles_BattleTent,
    .metatileAttributes = gMetatileAttributes_BattleTent,
    .callback = NULL,
};

const struct Tileset gTileset_MysteryEventsHouse =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MysteryEventsHouse,
    .palettes = gTilesetPalettes_MysteryEventsHouse,
    .metatiles = gMetatiles_MysteryEventsHouse,
    .metatileAttributes = gMetatileAttributes_MysteryEventsHouse,
    .callback = NULL,
};

const struct Tileset gTileset_UnionRoom =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_UnionRoom,
    .palettes = gTilesetPalettes_UnionRoom,
    .metatiles = gMetatiles_UnionRoom,
    .metatileAttributes = gMetatileAttributes_UnionRoom,
    .callback = NULL,
};

const struct Tileset gTileset_test =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_test,
    .palettes = gTilesetPalettes_test,
    .metatiles = gMetatiles_test,
    .metatileAttributes = gMetatileAttributes_test,
    .callback = NULL,
};

const struct Tileset gTileset_PorytilesPrimaryTest =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_PorytilesPrimaryTest,
    .palettes = gTilesetPalettes_PorytilesPrimaryTest,
    .metatiles = gMetatiles_PorytilesPrimaryTest,
    .metatileAttributes = gMetatileAttributes_PorytilesPrimaryTest,
    .callback = NULL,
};

const struct Tileset gTileset_PorytilesSecondaryTest =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PorytilesSecondaryTest,
    .palettes = gTilesetPalettes_PorytilesSecondaryTest,
    .metatiles = gMetatiles_PorytilesSecondaryTest,
    .metatileAttributes = gMetatileAttributes_PorytilesSecondaryTest,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_ss_rain_general =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_islandgame_ss_rain_general,
    .palettes = gTilesetPalettes_islandgame_ss_rain_general,
    .metatiles = gMetatiles_islandgame_ss_rain_general,
    .metatileAttributes = gMetatileAttributes_islandgame_ss_rain_general,
    .callback = InitTilesetAnim_islandgame_ss_rain_general,
};

const struct Tileset gTileset_islandgame_ss_rain_secondary =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_ss_rain_secondary,
    .palettes = gTilesetPalettes_islandgame_ss_rain_secondary,
    .metatiles = gMetatiles_islandgame_ss_rain_secondary,
    .metatileAttributes = gMetatileAttributes_islandgame_ss_rain_secondary,
    .callback = NULL,
};

const struct Tileset gTileset_IslandgameGeneral =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_IslandgameGeneral,
    .palettes = gTilesetPalettes_IslandgameGeneral,
    .metatiles = gMetatiles_IslandgameGeneral,
    .metatileAttributes = gMetatileAttributes_IslandgameGeneral,
    .callback = InitTilesetAnim_islandgame_oranna_general, // island todo, this is wrong
};

const struct Tileset gTileset_islandgame_oranna_persi =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_oranna_persi,
    .palettes = gTilesetPalettes_islandgame_oranna_persi,
    .metatiles = gMetatiles_islandgame_oranna_persi,
    .metatileAttributes = gMetatileAttributes_islandgame_oranna_persi,
    .callback = NULL,
};

const struct Tileset gTileset_Forest =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Forest,
    .palettes = gTilesetPalettes_Forest,
    .metatiles = gMetatiles_Forest,
    .metatileAttributes = gMetatileAttributes_Forest,
    .callback = InitTilesetIsland_Anim_Forest,
};

const struct Tileset gTileset_islandgame_oranna_cheriport =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_oranna_cheriport,
    .palettes = gTilesetPalettes_islandgame_oranna_cheriport,
    .metatiles = gMetatiles_islandgame_oranna_cheriport,
    .metatileAttributes = gMetatileAttributes_islandgame_oranna_cheriport,
    .callback = InitTilesetAnim_islandgame_oranna_cheriport,
};



const struct Tileset gTileset_islandgame_oranna_verdant =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_oranna_verdant,
    .palettes = gTilesetPalettes_islandgame_oranna_verdant,
    .metatiles = gMetatiles_islandgame_oranna_verdant,
    .metatileAttributes = gMetatileAttributes_islandgame_oranna_verdant,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_oranna_mt_aurora =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_oranna_mt_aurora,
    .palettes = gTilesetPalettes_islandgame_oranna_mt_aurora,
    .metatiles = gMetatiles_islandgame_oranna_mt_aurora,
    .metatileAttributes = gMetatileAttributes_islandgame_oranna_mt_aurora,
    .callback = InitTilesetAnim_islandgame_oranna_mt_aurora,
};

const struct Tileset gTileset_islandgame_empty_primary =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_islandgame_empty_primary,
    .palettes = gTilesetPalettes_islandgame_empty_primary,
    .metatiles = gMetatiles_islandgame_empty_primary,
    .metatileAttributes = gMetatileAttributes_islandgame_empty_primary,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_oranna_maplegrove =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_oranna_maplegrove,
    .palettes = gTilesetPalettes_islandgame_oranna_maplegrove,
    .metatiles = gMetatiles_islandgame_oranna_maplegrove,
    .metatileAttributes = gMetatileAttributes_islandgame_oranna_maplegrove,
    .callback = InitTilesetAnim_islandgame_oranna_maplegrove,
};

const struct Tileset gTileset_islandgame_oranna_rosevale =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_oranna_rosevale,
    .palettes = gTilesetPalettes_islandgame_oranna_rosevale,
    .metatiles = gMetatiles_islandgame_oranna_rosevale,
    .metatileAttributes = gMetatileAttributes_islandgame_oranna_rosevale,
    .callback = InitTilesetAnim_islandgame_oranna_rosevale,
};

const struct Tileset gTileset_islandgame_oranna_tidalcove =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_oranna_tidalcove,
    .palettes = gTilesetPalettes_islandgame_oranna_tidalcove,
    .metatiles = gMetatiles_islandgame_oranna_tidalcove,
    .metatileAttributes = gMetatileAttributes_islandgame_oranna_tidalcove,
    .callback = InitTilesetAnim_islandgame_oranna_tidalcove,
};

const struct Tileset gTileset_islandgame_oranna_general =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_islandgame_oranna_general,
    .palettes = gTilesetPalettes_islandgame_oranna_general,
    .metatiles = gMetatiles_islandgame_oranna_general,
    .metatileAttributes = gMetatileAttributes_islandgame_oranna_general,
    .callback = InitTilesetAnim_islandgame_oranna_general,
};



const struct Tileset gTileset_islandgame_oranna_central_path =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_oranna_central_path,
    .palettes = gTilesetPalettes_islandgame_oranna_central_path,
    .metatiles = gMetatiles_islandgame_oranna_central_path,
    .metatileAttributes = gMetatileAttributes_islandgame_oranna_central_path,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_general =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_islandgame_lumine_general,
    .palettes = gTilesetPalettes_islandgame_lumine_general,
    .metatiles = gMetatiles_islandgame_lumine_general,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_general,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_aetheria =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_aetheria,
    .palettes = gTilesetPalettes_islandgame_lumine_aetheria,
    .metatiles = gMetatiles_islandgame_lumine_aetheria,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_aetheria,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_snow =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_snow,
    .palettes = gTilesetPalettes_islandgame_snow,
    .metatiles = gMetatiles_islandgame_snow,
    .metatileAttributes = gMetatileAttributes_islandgame_snow,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_houses =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_houses,
    .palettes = gTilesetPalettes_islandgame_houses,
    .metatiles = gMetatiles_islandgame_houses,
    .metatileAttributes = gMetatileAttributes_islandgame_houses,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_ocean_general =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_islandgame_ocean_general,
    .palettes = gTilesetPalettes_islandgame_ocean_general,
    .metatiles = gMetatiles_islandgame_ocean_general,
    .metatileAttributes = gMetatileAttributes_islandgame_ocean_general,
    .callback = InitTilesetAnim_islandgame_ocean_general,
};

const struct Tileset gTileset_islandgame_lumine_applevine =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_applevine,
    .palettes = gTilesetPalettes_islandgame_lumine_applevine,
    .metatiles = gMetatiles_islandgame_lumine_applevine,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_applevine,
    .callback = InitTilesetAnim_islandgame_lumine_applevine,
};

const struct Tileset gTileset_islandgame_lumine_power_plant_interior =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_power_plant_interior,
    .palettes = gTilesetPalettes_islandgame_lumine_power_plant_interior,
    .metatiles = gMetatiles_islandgame_lumine_power_plant_interior,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_power_plant_interior,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_mt_therion =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_mt_therion,
    .palettes = gTilesetPalettes_islandgame_lumine_mt_therion,
    .metatiles = gMetatiles_islandgame_lumine_mt_therion,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_mt_therion,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_belle_catacombs =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_belle_catacombs,
    .palettes = gTilesetPalettes_islandgame_lumine_belle_catacombs,
    .metatiles = gMetatiles_islandgame_lumine_belle_catacombs,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_belle_catacombs,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_arboria =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_arboria,
    .palettes = gTilesetPalettes_islandgame_lumine_arboria,
    .metatiles = gMetatiles_islandgame_lumine_arboria,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_arboria,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_azure_path =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_azure_path,
    .palettes = gTilesetPalettes_islandgame_lumine_azure_path,
    .metatiles = gMetatiles_islandgame_lumine_azure_path,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_azure_path,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_bellehaven =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_bellehaven,
    .palettes = gTilesetPalettes_islandgame_lumine_bellehaven,
    .metatiles = gMetatiles_islandgame_lumine_bellehaven,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_bellehaven,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_cantalo =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_cantalo,
    .palettes = gTilesetPalettes_islandgame_lumine_cantalo,
    .metatiles = gMetatiles_islandgame_lumine_cantalo,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_cantalo,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_power_plant =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_power_plant,
    .palettes = gTilesetPalettes_islandgame_lumine_power_plant,
    .metatiles = gMetatiles_islandgame_lumine_power_plant,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_power_plant,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_rocky_path =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_rocky_path,
    .palettes = gTilesetPalettes_islandgame_lumine_rocky_path,
    .metatiles = gMetatiles_islandgame_lumine_rocky_path,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_rocky_path,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_sierra_path =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_sierra_path,
    .palettes = gTilesetPalettes_islandgame_lumine_sierra_path,
    .metatiles = gMetatiles_islandgame_lumine_sierra_path,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_sierra_path,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_therion_path =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_therion_path,
    .palettes = gTilesetPalettes_islandgame_lumine_therion_path,
    .metatiles = gMetatiles_islandgame_lumine_therion_path,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_therion_path,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_lumine_pleasant_avenue =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_lumine_pleasant_avenue,
    .palettes = gTilesetPalettes_islandgame_lumine_pleasant_avenue,
    .metatiles = gMetatiles_islandgame_lumine_pleasant_avenue,
    .metatileAttributes = gMetatileAttributes_islandgame_lumine_pleasant_avenue,
    .callback = NULL,
};

const struct Tileset gTileset_coastalcave =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_coastalcave,
    .palettes = gTilesetPalettes_coastalcave,
    .metatiles = gMetatiles_coastalcave,
    .metatileAttributes = gMetatileAttributes_coastalcave,
    .callback = NULL,
};

const struct Tileset gTileset_dojointerior =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_dojointerior,
    .palettes = gTilesetPalettes_dojointerior,
    .metatiles = gMetatiles_dojointerior,
    .metatileAttributes = gMetatileAttributes_dojointerior,
    .callback = NULL,
};

const struct Tileset gTileset_shadyforest =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_shadyforest,
    .palettes = gTilesetPalettes_shadyforest,
    .metatiles = gMetatiles_shadyforest,
    .metatileAttributes = gMetatileAttributes_shadyforest,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_kanto_building =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_islandgame_kanto_building,
    .palettes = gTilesetPalettes_islandgame_kanto_building,
    .metatiles = gMetatiles_islandgame_kanto_building,
    .metatileAttributes = gMetatileAttributes_islandgame_kanto_building,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_kanto_powerplant =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_kanto_powerplant,
    .palettes = gTilesetPalettes_islandgame_kanto_powerplant,
    .metatiles = gMetatiles_islandgame_kanto_powerplant,
    .metatileAttributes = gMetatileAttributes_islandgame_kanto_powerplant,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_cave_1 =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_cave_1,
    .palettes = gTilesetPalettes_islandgame_cave_1,
    .metatiles = gMetatiles_islandgame_cave_1,
    .metatileAttributes = gMetatileAttributes_islandgame_cave_1,
    .callback = NULL,
};

const struct Tileset gTileset_islandgame_cave_2 =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_islandgame_cave_2,
    .palettes = gTilesetPalettes_islandgame_cave_2,
    .metatiles = gMetatiles_islandgame_cave_2,
    .metatileAttributes = gMetatileAttributes_islandgame_cave_2,
    .callback = NULL,
};
