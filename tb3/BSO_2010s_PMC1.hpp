

// class TB3_Gear {
    class BSO_2010s_PMC1 {

        // Base equipment 
        class Soldier_Base {
            uniformRandom = 1;
            vestRandom = 1;
            headgearRandom = 1;
            backpackRandom = 1;
            ace_medic = 0;
            ace_engineer = 0;

            weapons[] = {};
            priKit[] = {};
            secKit[] = {};
            pisKit[] = {"RH_15Rnd_45cal_fnp"};

            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

            headgear[] = {
                "tacs_Cap_BlackLogo",
                "tacs_Cap_TanLogo",
                "tacs_Cap_Earpiece_BlackLogo",
                "tacs_Cap_Earpiece_TanLogo",
                "tacs_Cap_Headphones_BlackLogo",
                "H_Cap_blk",
                "H_Cap_blk_CMMG",
                "H_Cap_grn",
                "H_Cap_oli",
                "H_Cap_oli_hs",
                "H_Cap_tan",
                "H_Cap_khaki_specops_UK",
                "H_Cap_usblack",
                "H_Cap_headphones",
                "rhsusf_bowman_cap",
                "rhsgref_bcap_specter",
                "PO_H_cap_tub",
                "H_Cap_grn_BI"
            };

            goggles[] = {};

            uniform[] = {
                "tacs_Uniform_Garment_LS_BS_BP_BB",
                "tacs_Uniform_Garment_LS_BS_GP_BB",
                "tacs_Uniform_Garment_LS_OS_EP_TB",
                "tacs_Uniform_Garment_LS_OS_TP_TB",
                "tacs_Uniform_Garment_LS_GS_BP_BB",
                "tacs_Uniform_Garment_LS_GS_GP_BB",
                "tacs_Uniform_Garment_LS_GS_EP_TB",
                "tacs_Uniform_Garment_LS_GS_TP_TB",
                "tacs_Uniform_Garment_LS_ES_BP_BB",
                "tacs_Uniform_Garment_LS_ES_GP_BB",
                "tacs_Uniform_Garment_LS_ES_EP_TB",
                "tacs_Uniform_Garment_LS_TS_BP_BB",
                "tacs_Uniform_Garment_LS_TS_GP_BB",
                "tacs_Uniform_Garment_LS_TS_TP_TB",
                "tacs_Uniform_Garment_RS_BS_BP_BB",
                "tacs_Uniform_Garment_RS_BS_GP_BB",
                "tacs_Uniform_Garment_RS_OS_EP_TB",
                "tacs_Uniform_Garment_RS_OS_TP_TB",
                "tacs_Uniform_Garment_RS_GS_BP_BB",
                "tacs_Uniform_Garment_RS_GS_GP_BB",
                "tacs_Uniform_Garment_RS_GS_EP_TB",
                "tacs_Uniform_Garment_RS_GS_TP_TB",
                "tacs_Uniform_Garment_RS_ES_BP_BB",
                "tacs_Uniform_Garment_RS_ES_GP_BB",
                "tacs_Uniform_Garment_RS_ES_EP_TB",
                "tacs_Uniform_Garment_RS_TS_BP_BB",
                "tacs_Uniform_Garment_RS_TS_GP_BB",
                "tacs_Uniform_Garment_RS_TS_TP_TB",
                "tacs_Uniform_Combat_LS_BS_BP_BB",
                "tacs_Uniform_Combat_LS_BS_GP_TB",
                "tacs_Uniform_Combat_LS_BS_TP_BB",
                "tacs_Uniform_Combat_LS_BS_TP_TB",
                "tacs_Uniform_Combat_LS_GS_BP_BB",
                "tacs_Uniform_Combat_LS_GS_GP_BB",
                "tacs_Uniform_Combat_LS_GS_TP_BB",
                "tacs_Uniform_Combat_LS_TS_BP_BB",
                "tacs_Uniform_Combat_LS_TS_GP_BB",
                "tacs_Uniform_Combat_LS_TS_GP_TB",
                "tacs_Uniform_Combat_LS_TS_TP_TB",
                "tacs_Uniform_Combat_RS_BS_BP_BB",
                "tacs_Uniform_Combat_RS_BS_GP_BB",
                "tacs_Uniform_Combat_RS_BS_GP_TB",
                "tacs_Uniform_Combat_RS_BS_TP_BB",
                "tacs_Uniform_Combat_RS_BS_TP_TB",
                "tacs_Uniform_Combat_RS_GS_BP_BB",
                "tacs_Uniform_Combat_RS_GS_GP_BB",
                "tacs_Uniform_Combat_RS_GS_TP_BB",
                "tacs_Uniform_Combat_RS_TS_BP_BB",
                "tacs_Uniform_Combat_RS_TS_GP_BB",
                "tacs_Uniform_Combat_RS_TS_GP_TB",
                "tacs_Uniform_Combat_RS_TS_TP_TB"
            };
            uniformContents[] = {
                {"ACE_packingBandage",4},
                {"ACE_fieldDressing",4},
                {"ACE_tourniquet",2},
                {"ACE_morphine",2},
                {"ACE_quikclot",2},
                {"ACE_elasticBandage",2},
                {"ACE_salineIV_500",1},
                {"ACE_MapTools",1},
                {"ACE_Flashlight_MX991",1},
                {"ACRE_PRC343",1}
            };

            vest[] = {
                "tacs_Vest_PlateCarrier_Black",
                "tacs_Vest_PlateCarrier_Coyote",
                "tacs_Vest_PlateCarrier_Green",
                "tacs_Vest_PlateCarrier_Khaki",
                "tacs_Vest_PlateCarrier_MARPAT",
                "tacs_Vest_PlateCarrierFull_Black",
                "tacs_Vest_PlateCarrierFull_Green",
            };
            vestContents[] = {};
            
            backpack[] = {
                "B_AssaultPack_blk",
                "B_AssaultPack_cbr",
                "B_AssaultPack_rgr",
                "B_AssaultPack_khk",
                "B_AssaultPack_sgg",
                "rhsusf_falconii_coy",
                "rhsusf_falconii",
                "rhsusf_assault_eagleaiii_coy",
                "tacs_Backpack_AssaultExpanded_Black",
                "tacs_Backpack_AssaultExpanded_Green",
                "tacs_Backpack_AssaultExpanded_Tan"
            };
            backpackContents[] = {};
        };
        

        class CompanyMan: Soldier_Base {
            weapons[] = {"hlc_pistol_P229R_357Stainless"};
            pisKit[] = {"hlc_10Rnd_357SIG_B_P229","hlc_optic228_stavenhagen"};

            goggles[] = {"G_Aviator"};

            uniform[] = {
                "tacs_Uniform_Polo_CP_BS_TP_BB",
                "tacs_Uniform_Polo_TP_BS_TP_TB",
                "tacs_Uniform_Polo_TP_LS_GP_BB",
                "tacs_Uniform_Polo_TP_LS_TP_TB",
                "tacs_Uniform_Polo_TP_OS_LP_BB",
                "tacs_Uniform_Polo_TP_OS_TP_BB",
                "tacs_Uniform_Polo_TP_GS_TP_TB",
                "tacs_Uniform_Polo_TP_TS_GP_BB",
                "tacs_Uniform_Polo_TP_WS_LP_BB",
                "tacs_Uniform_Polo_TP_WS_GP_BB",
                "tacs_Uniform_Polo_TP_WS_TP_TB"
            };
            uniformContents[] = {
                {"ACRE_PRC343",1},
                {"hlc_10Rnd_357SIG_B_P229",2},
                {"ACE_packingBandage",4},
                {"ACE_MapTools",1},
                {"ACE_fieldDressing",4},
                {"ACE_tourniquet",1},
                {"ACE_morphine",1}
            };

            vest[] = {
                "V_thor2",
                "V_thor_rgr2",
                "V_thor_wdl2"
            };
            vestContents[] = {};

            backpack[] = {};
            backpackContents[] = {};
        };


        class Marksman: Soldier_Base {
            weapons[] = {"rhs_weap_SCARH_FDE_STD","RH_fnp45t"};
            priKit[] = {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr","ptv_shortdot_dcc","rhsusf_acc_anpeq15side_bk","rhsusf_acc_grip1"};
            
            vestContents[] = {
                {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",4},
                {"rhs_mag_20Rnd_SCAR_762x51_m62_tracer",1},
                {"RH_15Rnd_45cal_fnp",2},
                {"SmokeShell",2},
                {"rhs_mag_m67",1}
            };
            backpackContents[] = {
                {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",6},
                {"rhs_mag_20Rnd_SCAR_762x51_m62_tracer",2},
                {"rhs_mag_m67",2},
                {"SmokeShellGreen",2}
            };
        };

        class RiflemanCLS: Soldier_Base {
            ace_medic = 1;
            weapons[] = {"hlc_rifle_mk18mod0","RH_fnp45t"};
            priKit[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhsusf_acc_eotech_552","rhsusf_acc_anpeq15side_bk","hlc_muzzle_gunfighter_comp"};

            vestContents[] = {
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG",6},
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
            backpackContents[] = {
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
                {"SmokeShell",1},
                {"SmokeShellGreen",2},
                {"SmokeShellPurple",2},
                {"ACE_packingBandage",15},
                {"ACE_fieldDressing",15},
                {"ACE_tourniquet",5},
                {"ACE_quikclot",10},
                {"ACE_morphine",10},
                {"ACE_salineIV_500",5},
                {"ACE_epinephrine",5},
                {"ACE_adenosine",5}
            };
        };

        class Rifleman1: Soldier_Base {
            weapons[] = {"ptv_AGM","RH_fnp45t"};
            priKit[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhsusf_acc_rx01","rhsusf_acc_anpeq15side_bk","hlc_muzzle_gunfighter_comp"};

            vestContents[] = {
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG",6},
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
            backpackContents[] = {
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG",6},
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
        };

        class Rifleman: Rifleman1 {};

        class Rifleman2: Rifleman1 {
            weapons[] = {"hlc_rifle_RU5562","RH_fnp45t"};
            priKit[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhsusf_acc_rx01_tan","rhsusf_acc_anpeq15_bk_top","hlc_muzzle_gunfighter_comp"};
        };

        class Rifleman3: Rifleman1 {
            weapons[] = {"hlc_rifle_RU556","RH_fnp45t"};
            priKit[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhsusf_acc_rx01_tan","rhsusf_acc_anpeq15_bk_top","hlc_muzzle_gunfighter_comp"};
        };

        class Rifleman4: Rifleman1 {
            weapons[] = {"hlc_rifle_bcmjack","RH_fnp45t"};
            priKit[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhsusf_acc_rx01","rhsusf_acc_anpeq15_bk_top","hlc_muzzle_gunfighter_comp"};
        };

        class Rifleman5: Rifleman1 {
            weapons[] = {"hlc_rifle_samr2","RH_fnp45t"};
            priKit[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhsusf_acc_rx01","rhsusf_acc_anpeq15_bk_top","hlc_muzzle_gunfighter_comp"};
        };

        class RiflemanR1: Soldier_Base {
            weapons[] = {"rhs_weap_savz58v_ris","RH_fnp45t"};
            priKit[] = {"rhs_30Rnd_762x39mm_Savz58","rhsusf_acc_rx01_nofilter","rhsusf_acc_anpeq15side_bk","rhsgref_acc_zendl","rhsusf_acc_grip2"};

            vestContents[] = {
                {"rhs_30Rnd_762x39mm_Savz58",5},
                {"rhs_30Rnd_762x39mm_Savz58_tracer",1},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
            backpackContents[] = {
                {"rhs_30Rnd_762x39mm_Savz58",5},
                {"rhs_30Rnd_762x39mm_Savz58_tracer",1},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
        };

        class RiflemanR2: Soldier_Base {
            weapons[] = {"hlc_rifle_sg553RLB_TAC","RH_fnp45t"};
            priKit[] = {"rhs_30Rnd_762x39mm_polymer","rhsusf_acc_rx01","rhsusf_acc_anpeq15side_bk"};

            vestContents[] = {
                {"rhs_30Rnd_762x39mm_polymer",5},
                {"rhs_30Rnd_762x39mm_polymer_tracer",1},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
            backpackContents[] = {
                {"rhs_30Rnd_762x39mm_polymer",5},
                {"rhs_30Rnd_762x39mm_polymer_tracer",1},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
        };

        class AR: Soldier_Base {
            weapons[] = {"hlc_rifle_M27IAR","RH_fnp45t"};
            priKit[] = {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed","rhsusf_acc_rx01_nofilter","hlc_muzzle_kx3_comp","rh_td_acb_b"};

            vestContents[] = {
                {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",2},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
            backpackContents[] = {
                {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",4},
                {"rhs_mag_m67",1},
                {"SmokeShell",1}
            };
        };

        class Shotgunner: Soldier_Base {
            weapons[] = {"rhs_weap_M590_8RD","RH_fnp45t"};
            priKit[] = {"rhsusf_8Rnd_00Buck"};

            vestContents[] = {
                {"rhsusf_8Rnd_00Buck",7},
                {"RH_15Rnd_45cal_fnp",3},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
            backpackContents[] = {
                {"rhsusf_8Rnd_00Buck",12},
                {"rhsusf_8Rnd_FRAG",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
        };


        class Newdude: Soldier_Base {
            weapons[] = {"RH_fnp45t"};
            priKit[] = {};
            secKit[] = {};

            vestContents[] = {

            };
            backpackContents[] = {

            };
        };
    };
// };