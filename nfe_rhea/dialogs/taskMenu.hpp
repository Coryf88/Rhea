class nfe_rhea_main_taskMenu: ctrlMenu {
	colorBackground[]={0.1,0.1,0.1,1};
	class Items {
		items[]= {
			"Succeeded",
			"Failed",
			"Canceled"
		};
		class Succeeded {
			text="Succeeded";
			action="[_this select 0, 'Succeeded'] call RHEA_fnc_taskMenu;";
		};
		class Failed {
			text="Failed";
			action="[_this select 0, 'Failed'] call RHEA_fnc_taskMenu;";
		};
		class Canceled {
			text="Canceled";
			action="[_this select 0, 'Canceled'] call RHEA_fnc_taskMenu;";
		};
		class Default {
			text="$STR_3DEN_Display3DEN_MenuBar_Default_text";
			enable=0;
		};
	};
};
