modded class BaseBuildingHologram
{
#ifndef SERVER
    override bool CanPlaceCurrently()
	{
        #ifdef AVPPAdminTools
		MissionBaseWorld mission = MissionBaseWorld.Cast(g_Game.GetMission());
		if (mission && mission.VPPAT_AdminToolsToggled())
        {
			return true;
        }
		#endif
		return m_CurrentPlacingMode != PlacementMode.NONE;
	}
#endif
}