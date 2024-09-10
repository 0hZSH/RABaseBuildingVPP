class CfgPatches
{
	class cfgrabbvppcompatible
	{
		units[] = {"BaseBuilding_FrameFloor","BaseBuilding_WoodFloor","BaseBuilding_MetalFloor","BaseBuilding_ConcreteFloor","BaseBuilding_FrameTriangleFloor","BaseBuilding_WoodTriangleFloor","BaseBuilding_MetalTriangleFloor","BaseBuilding_ConcreteTriangleFloor","BaseBuilding_FrameWall","BaseBuilding_WoodWall","BaseBuilding_MetalWall","BaseBuilding_ConcreteWall","BaseBuilding_FrameHalfWall","BaseBuilding_WoodHalfWall","BaseBuilding_MetalHalfWall","BaseBuilding_ConcreteHalfWall","BaseBuilding_FrameDoorFrame","BaseBuilding_WoodDoorFrame","BaseBuilding_MetalDoorFrame","BaseBuilding_ConcreteDoorFrame","BaseBuilding_FrameDoubleDoorFrame","BaseBuilding_WoodDoubleDoorFrame","BaseBuilding_MetalDoubleDoorFrame","BaseBuilding_ConcreteDoubleDoorFrame","BaseBuilding_FrameLadderHatch","BaseBuilding_WoodLadderHatch","BaseBuilding_MetalLadderHatch","BaseBuilding_ConcreteLadderHatch","BaseBuilding_FrameWindowFrame","BaseBuilding_WoodWindowFrame","BaseBuilding_MetalWindowFrame","BaseBuilding_ConcreteWindowFrame","BaseBuilding_FrameRoof","BaseBuilding_WoodRoof","BaseBuilding_MetalRoof"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters"};
	};
};
class CfgMods
{
	class cfgrabbvppcompatible
	{
		dir = "cfgrabbvppcompatible";
		picture = "";
		action = "";
		name = "cfgrabbvppcompatible";
		author = "METAPLOMO";
		hideName = 1;
		hidePicture = 1;
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				files[] = {"cfgrabbvppcompatible/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"cfgrabbvppcompatible/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"cfgrabbvppcompatible/Scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class BaseBuilding;
	class BaseBuilding_FloorBase: BaseBuilding
	{
		placementMode = 3;
		class Snapping
		{
			class North
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_WallBase"};
				acceptedSnapPoints[] = {"North","South","East","West","Top","NorthEast","NorthWest"};
				forward[] = {0,0,-1};
				up[] = {0,1,0};
			};
			class South
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_WallBase"};
				acceptedSnapPoints[] = {"North","South","East","West","Top","NorthEast","NorthWest"};
				forward[] = {0,0,1};
				up[] = {0,1,0};
			};
			class East
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_WallBase"};
				acceptedSnapPoints[] = {"North","South","East","West","Top","NorthEast","NorthWest"};
				forward[] = {-1,0,0};
				up[] = {0,1,0};
			};
			class West
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_WallBase"};
				acceptedSnapPoints[] = {"North","South","East","West","Top","NorthEast","NorthWest"};
				forward[] = {1,0,0};
				up[] = {0,1,0};
			};
			class Center
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase"};
				acceptedSnapPoints[] = {"North","South","East","West","Top","NorthEast","NorthWest"};
				forward[] = {0,0,1};
				up[] = {0,1,0};
			};
		};
	};
	class BaseBuilding_TriangleFloorBase: BaseBuilding
	{
		placementMode = 3;
	};
	class BaseBuilding_WallBase: BaseBuilding
	{
		placementMode = 3;
	};
	class BaseBuilding_HalfWallBase: BaseBuilding
	{
		placementMode = 3;
	};
	class BaseBuilding_DoorFrameBase: BaseBuilding
	{
		placementMode = 3;
	};
	class BaseBuilding_DoubleDoorFrameBase: BaseBuilding
	{
		placementMode = 3;
	};
	class BaseBuilding_WindowFrameBase: BaseBuilding_WallBase
	{
		placementMode = 3;
	};
	class BaseBuilding_RoofBase: BaseBuilding
	{
		placementMode = 3;
	};
	class BaseBuilding_RampBase: BaseBuilding
	{
		placementMode = 3;
		class North
		{
			acceptedTypes[] = {"BaseBuilding_FoundationBase","BaseBuilding_TriangleFoundationBase","BaseBuilding_RampBase"};
			acceptedSnapPoints[] = {"North","South","East","West","Top","NorthEast","NorthWest"};
			forward[] = {0,0,-1};
			up[] = {0,1,0};
		};
		class South
		{
			acceptedTypes[] = {"BaseBuilding_FoundationBase","BaseBuilding_TriangleFoundationBase","BaseBuilding_RampBase"};
			acceptedSnapPoints[] = {"North","South","East","West","Top","NorthEast","NorthWest"};
			forward[] = {0,0,1};
			up[] = {0,1,0};
		};
		class East
		{
			acceptedTypes[] = {"BaseBuilding_FoundationBase","BaseBuilding_TriangleFoundationBase","BaseBuilding_RampBase"};
			acceptedSnapPoints[] = {"North","South","East","West","Top","NorthEast","NorthWest"};
			forward[] = {-1,0,0};
			up[] = {0,1,0};
		};
		class West
		{
			acceptedTypes[] = {"BaseBuilding_FoundationBase","BaseBuilding_TriangleFoundationBase","BaseBuilding_RampBase"};
			acceptedSnapPoints[] = {"North","South","East","West","Top","NorthEast","NorthWest"};
			forward[] = {1,0,0};
			up[] = {0,1,0};
		};
	}
	class BaseBuilding_FrameFloor: BaseBuilding_FloorBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_WoodFloor: BaseBuilding_FloorBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\Foundation_Planks.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\Foundation_Planks_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\Foundation_Planks_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\Foundation_Planks_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\Foundation_Planks_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
			};
		};
	};
	class BaseBuilding_MetalFloor: BaseBuilding_FloorBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\MetalFloor.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteFloor: BaseBuilding_FloorBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare.rvmat"}},{0.7,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.5,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.3,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}},{0.0,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
			};
		};
	};
	class BaseBuilding_FrameTriangleFloor: BaseBuilding_TriangleFloorBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_WoodTriangleFloor: BaseBuilding_TriangleFloorBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\Triangle_Foundation_Planks.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\Triangle_Foundation_Planks_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\Triangle_Foundation_Planks_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\Triangle_Foundation_Planks_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\Triangle_Foundation_Planks_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
			};
		};
	};
	class BaseBuilding_MetalTriangleFloor: BaseBuilding_TriangleFloorBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\MetalFloor.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteTriangleFloor: BaseBuilding_TriangleFloorBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare.rvmat"}},{0.7,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.5,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.3,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}},{0.0,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
				};
			};
		};
	};
	class BaseBuilding_FrameWall: BaseBuilding_WallBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Interior
				{
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.0;
							};
						};
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_WoodWall: BaseBuilding_WallBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_MetalWall: BaseBuilding_WallBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust.rvmat","dz\structures\data\metal\metal_rollup.rvmat","dz\gear\consumables\data\metalsheets.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_ConcreteWall: BaseBuilding_WallBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare.rvmat"}},{0.7,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.5,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.3,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}},{0.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_FrameHalfWall: BaseBuilding_HalfWallBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Interior
				{
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.0;
							};
						};
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_WoodHalfWall: BaseBuilding_HalfWallBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_MetalHalfWall: BaseBuilding_HalfWallBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust.rvmat","dz\structures\data\metal\metal_rollup.rvmat","dz\gear\consumables\data\metalsheets.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_ConcreteHalfWall: BaseBuilding_HalfWallBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare.rvmat"}},{0.7,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.5,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.3,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}},{0.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_FrameDoorFrame: BaseBuilding_DoorFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Interior
				{
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.0;
							};
						};
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_WoodDoorFrame: BaseBuilding_DoorFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_MetalDoorFrame: BaseBuilding_DoorFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust.rvmat","dz\structures\data\metal\metal_rollup.rvmat","dz\gear\consumables\data\metalsheets.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_ConcreteDoorFrame: BaseBuilding_DoorFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare.rvmat"}},{0.7,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.5,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.3,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}},{0.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_FrameDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Interior
				{
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.0;
							};
						};
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_WoodDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_MetalDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust.rvmat","dz\structures\data\metal\metal_rollup.rvmat","dz\gear\consumables\data\metalsheets.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_ConcreteDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare.rvmat"}},{0.7,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.5,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.3,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}},{0.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_LadderHatchBase;
	class BaseBuilding_FrameLadderHatch: BaseBuilding_LadderHatchBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Interior
				{
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_WoodLadderHatch: BaseBuilding_LadderHatchBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_MetalLadderHatch: BaseBuilding_LadderHatchBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\MetalFloor.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat","rearmedserver\basebuilding\materials\metal\data\metalfloor_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_ConcreteLadderHatch: BaseBuilding_LadderHatchBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare.rvmat"}},{0.7,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.5,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.3,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}},{0.0,{"rearmedserver\basebuilding\materials\concrete\vanillaconcrete_panels_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_FrameWindowFrame: BaseBuilding_WindowFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Interior
				{
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 1.0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.0;
							};
						};
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_WoodWindowFrame: BaseBuilding_WindowFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_MetalWindowFrame: BaseBuilding_WindowFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust.rvmat","dz\structures\data\metal\metal_rollup.rvmat","dz\gear\consumables\data\metalsheets.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_ConcreteWindowFrame: BaseBuilding_WindowFrameBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare.rvmat"}},{0.7,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.5,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.3,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}},{0.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_FrameRoof: BaseBuilding_RoofBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Interior
				{
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_WoodRoof: BaseBuilding_RoofBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\woodboard_old_01.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\church_04_roof_01.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\woodboard_old_01_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\church_04_roof_01_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\woodboard_old_01_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\church_04_roof_01_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\woodboard_old_01_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\church_04_roof_01_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\woodboard_old_01_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\church_04_roof_01_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_MetalRoof: BaseBuilding_RoofBase
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust.rvmat","dz\structures\data\metal\metal_rollup.rvmat","dz\gear\consumables\data\metalsheets.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\rollup_combo.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\rollup_combo_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_damage.rvmat","dz\gear\consumables\data\metalsheets_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\rollup_combo_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\rollup_combo_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_servicehangar_rust_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\metal_rollup_destruct.rvmat","dz\gear\consumables\data\metalsheets_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\WavySheet_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\rollup_combo_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 1000000;
						transferToGlobalCoef = 1;
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
};
