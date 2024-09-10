#ifdef AVPPAdminTools
modded class MissionGameplay
{
    override void ToggleAdminTools()
    {
        PlayerBase playerAdmin = PlayerBase.Cast(GetGame().GetPlayer());
        if (!m_AllowPasswordInput)
            return;

        if (!m_Toggles)
        {
            if (!GetVPPUIManager().GetKeybindsStatus() && !GetVPPUIManager().IsTyping())
            {
                bool cached = GetGame().GetProfileString("vppatadmincredentials", m_VAdminPassword);
                if (cached && m_VAdminPassword != string.Empty)
                {
                    GetRPCManager().VSendRPC("RPC_PermitManager", "AdminLogin", NULL, true);
                    playerAdmin.SetAdminMode(true);
                    GetRPCManager().SendRPC("RPC_PermitManager", "PermitRABaseBuilding", new Param1<bool>(true), true);
                    return;
                }
                else
                {
                    GetVPPUIManager().SetKeybindsStatus(true);
                    GetGame().GetInput().ChangeGameFocus(1);
                    GetGame().GetUIManager().ShowUICursor(true);
                    PlayerControlDisable(INPUT_EXCLUDE_ALL);
                    GetGame().GetPlayer().GetInputController().SetDisabled(true);

                    VPPDialogBox dialogBox = GetVPPUIManager().CreateDialogBox(NULL, true);
                    dialogBox.InitDiagBox(DIAGTYPE.DIAG_OK_CANCEL_INPUT, "Admin Login", "Please enter password to continue using the tool.\n*Input is hidden*", this, "OnDiagResultToggleTools");
                    dialogBox.AllowCharInput();
                    dialogBox.HideInputCharacters(true);
                    return;
                }
            }
        }

        m_ToolsToggled = !m_ToolsToggled;

        if (m_ToolsToggled){
            GetVPPUIManager().DisplayNotification("#VSTR_NOTIFY_TOOLS_TOGGLE_ON", "V++ Admin Tools:", 3.0);
            GetRPCManager().SendRPC("RPC_PermitManager", "PermitRABaseBuilding", new Param1<bool>(true), true);
            playerAdmin.SetAdminMode(true);
        }else{
            GetVPPUIManager().DisplayNotification("#VSTR_NOTIFY_TOOLS_TOGGLE_OFF", "V++ Admin Tools:", 3.0);
            GetRPCManager().SendRPC("RPC_PermitManager", "PermitRABaseBuilding", new Param1<bool>(false), true);
            playerAdmin.SetAdminMode(false);
        }
    }
}
#endif