//
// Created by drouar_b on 5/24/16.
//

#include <OIS/OIS.h>
#include "graph/OgreUI.hh"

const std::map<OIS::KeyCode, gauntlet::core::IUIObserver::Key> OgreUI::keymap = {
	{OIS::KC_UP,        gauntlet::core::IUIObserver::KEY_UP},
	{OIS::KC_DOWN,      gauntlet::core::IUIObserver::KEY_DOWN},
	{OIS::KC_RIGHT,     gauntlet::core::IUIObserver::KEY_RIGHT},
	{OIS::KC_LEFT,      gauntlet::core::IUIObserver::KEY_LEFT},
	{OIS::KC_ESCAPE,    gauntlet::core::IUIObserver::KEY_ESC},
	{OIS::KC_TAB,       gauntlet::core::IUIObserver::KEY_TAB},
	{OIS::KC_SPACE,     gauntlet::core::IUIObserver::KEY_SPACE},
	{OIS::KC_BACK,      gauntlet::core::IUIObserver::KEY_BACK},
	{OIS::KC_A,         gauntlet::core::IUIObserver::KEY_A},
	{OIS::KC_B,         gauntlet::core::IUIObserver::KEY_B},
	{OIS::KC_C,         gauntlet::core::IUIObserver::KEY_C},
	{OIS::KC_D,         gauntlet::core::IUIObserver::KEY_D},
	{OIS::KC_E,         gauntlet::core::IUIObserver::KEY_E},
	{OIS::KC_F,         gauntlet::core::IUIObserver::KEY_F},
	{OIS::KC_RETURN,    gauntlet::core::IUIObserver::KEY_ENTER},
	{OIS::KC_G,         gauntlet::core::IUIObserver::KEY_G},
	{OIS::KC_H,         gauntlet::core::IUIObserver::KEY_H},
	{OIS::KC_I,         gauntlet::core::IUIObserver::KEY_I},
	{OIS::KC_J,         gauntlet::core::IUIObserver::KEY_J},
	{OIS::KC_K,         gauntlet::core::IUIObserver::KEY_K},
	{OIS::KC_L,         gauntlet::core::IUIObserver::KEY_L},
	{OIS::KC_M,         gauntlet::core::IUIObserver::KEY_M},
	{OIS::KC_N,         gauntlet::core::IUIObserver::KEY_N},
	{OIS::KC_O,         gauntlet::core::IUIObserver::KEY_O},
	{OIS::KC_P,         gauntlet::core::IUIObserver::KEY_P},
	{OIS::KC_Q,         gauntlet::core::IUIObserver::KEY_Q},
	{OIS::KC_R,         gauntlet::core::IUIObserver::KEY_R},
	{OIS::KC_S,         gauntlet::core::IUIObserver::KEY_S},
	{OIS::KC_T,         gauntlet::core::IUIObserver::KEY_T},
	{OIS::KC_U,         gauntlet::core::IUIObserver::KEY_U},
	{OIS::KC_V,         gauntlet::core::IUIObserver::KEY_V},
	{OIS::KC_W,         gauntlet::core::IUIObserver::KEY_W},
	{OIS::KC_X,         gauntlet::core::IUIObserver::KEY_X},
	{OIS::KC_Y,         gauntlet::core::IUIObserver::KEY_Y},
	{OIS::KC_Z,         gauntlet::core::IUIObserver::KEY_Z},


	{OIS::KC_0,         gauntlet::core::IUIObserver::KEY_0},
	{OIS::KC_1,         gauntlet::core::IUIObserver::KEY_1},
	{OIS::KC_2,         gauntlet::core::IUIObserver::KEY_2},
	{OIS::KC_3,         gauntlet::core::IUIObserver::KEY_3},
	{OIS::KC_4,         gauntlet::core::IUIObserver::KEY_4},
	{OIS::KC_5,         gauntlet::core::IUIObserver::KEY_5},
	{OIS::KC_6,         gauntlet::core::IUIObserver::KEY_6},
	{OIS::KC_7,         gauntlet::core::IUIObserver::KEY_7},
	{OIS::KC_8,         gauntlet::core::IUIObserver::KEY_8},
	{OIS::KC_9,         gauntlet::core::IUIObserver::KEY_9},

	{OIS::KC_NUMPAD0,   gauntlet::core::IUIObserver::KEY_0},
	{OIS::KC_NUMPAD1,   gauntlet::core::IUIObserver::KEY_1},
	{OIS::KC_NUMPAD2,   gauntlet::core::IUIObserver::KEY_2},
	{OIS::KC_NUMPAD3,   gauntlet::core::IUIObserver::KEY_3},
	{OIS::KC_NUMPAD4,   gauntlet::core::IUIObserver::KEY_4},
	{OIS::KC_NUMPAD5,   gauntlet::core::IUIObserver::KEY_5},
	{OIS::KC_NUMPAD6,   gauntlet::core::IUIObserver::KEY_6},
	{OIS::KC_NUMPAD7,   gauntlet::core::IUIObserver::KEY_7},
	{OIS::KC_NUMPAD8,   gauntlet::core::IUIObserver::KEY_8},
	{OIS::KC_NUMPAD9,   gauntlet::core::IUIObserver::KEY_9},
	{OIS::KC_PERIOD,    gauntlet::core::IUIObserver::KEY_PERIOD},
	{OIS::KC_SEMICOLON, gauntlet::core::IUIObserver::KEY_PERIOD}
};

const std::map<OIS::MouseButtonID, gauntlet::core::IUIObserver::Key> OgreUI::mousemap = {
	{OIS::MB_Left,  gauntlet::core::IUIObserver::KEY_MOUSE1},
	{OIS::MB_Right, gauntlet::core::IUIObserver::KEY_MOUSE2}
};

const std::map<gauntlet::BackgroundName, std::string> OgreUI::backgroundmap = {
	{gauntlet::BackgroundName::BACKGROUND_DOOR,    "Ogre/BackgroundDoor"},
	{gauntlet::BackgroundName::BACKGROUND_PLAYERS, "Ogre/BackgroundPlayers"},
	{gauntlet::BackgroundName::BACKGROUND_ROOM,    "Ogre/BackgroundRoom"},
	{gauntlet::BackgroundName::BACKGROUND_CAVE,    "Ogre/BackgroundCave"},
	{gauntlet::BackgroundName::BACKGROUND_HELL,    "Ogre/BackgroundHell"},
	{gauntlet::BackgroundName::BACKGROUND_BASIC,   "Ogre/Background"}
};
const std::map<gauntlet::core::Position, OgreBites::TrayLocation> OgreUI::posmap = {
	{gauntlet::core::PCENTER,      OgreBites::TL_CENTER},
	{gauntlet::core::PTOPRIGHT,    OgreBites::TL_TOPRIGHT},
	{gauntlet::core::PTOPLEFT,     OgreBites::TL_TOPLEFT},
	{gauntlet::core::PTOP,         OgreBites::TL_TOP},
	{gauntlet::core::PBOTTOM,      OgreBites::TL_BOTTOM},
	{gauntlet::core::PBOTTOMLEFT,  OgreBites::TL_BOTTOMLEFT},
	{gauntlet::core::PBOTTOMRIGHT, OgreBites::TL_BOTTOMRIGHT},
	{gauntlet::core::PRIGHT,       OgreBites::TL_RIGHT},
	{gauntlet::core::PLEFT,        OgreBites::TL_LEFT}
};

const std::map<gauntlet::EntityName, std::string> OgreUI::meshmap = {
	{gauntlet::EntityName::OGREHEAD,          "unityexportmap_obj.mesh"},
	{gauntlet::EntityName::NINJA,             "ninja.mesh"},
	{gauntlet::EntityName::PLAN,              "plan.mesh"},
	{gauntlet::EntityName::TUDORHOUSE,        "tudorhouse.mesh"},
	{gauntlet::EntityName::DOOR,              "wood_door.mesh"},
	{gauntlet::EntityName::CUBE,              "cube.mesh"},
	{gauntlet::EntityName::ROCK,              "Rock.mesh"},
	{gauntlet::EntityName::CHEST,             "Chest2B.mesh"},
	{gauntlet::EntityName::BERSERK,           "berserker.mesh"},
	{gauntlet::EntityName::VALKYRIE,          "girl_warrior.mesh"},
	{gauntlet::EntityName::CHESTCARTOON,      "chestCartoon.mesh"},
	{gauntlet::EntityName::WAGEN,             "wagen.mesh"},
	{gauntlet::EntityName::MAP_TEST,          "map_of_doom.mesh"},
	{gauntlet::EntityName::TROLL,             "troll.mesh"},
	{gauntlet::EntityName::SKELETON_ARCHER,   "skeleton_archer.mesh"},
	{gauntlet::EntityName::SKELETON_FOOTMAN,  "skeleton_footman.mesh"},
	{gauntlet::EntityName::SKELETON_SORCERER, "skeleton_sorcerer.mesh"},
	{gauntlet::EntityName::SKELETON_WARLORD,  "skeleton_warlord.mesh"},
	{gauntlet::EntityName::ARCHER,            "archer.mesh"},
	{gauntlet::EntityName::WIZARD,            "warlock.mesh"}


};

const std::map<gauntlet::TextureName, std::string> OgreUI::texturemap = {
	{gauntlet::TextureName::NINjA_M,      "Plan/sol"},
	{gauntlet::TextureName::TUDORHOUSE_M, "TudorHouse/house"}
};


const std::map<gauntlet::CharacterMenuName, std::string> OgreUI::charactermap = {
	{gauntlet::CharacterMenuName::BERSERKER_MENU_SELECTION, "Character/Berserker_menu_selection"},
	{gauntlet::CharacterMenuName::MAGUS_MENU_SELECTION,     "Character/Magus_menu_selection"},
	{gauntlet::CharacterMenuName::RANGER_MENU_SELECTION,    "Character/Ranger_menu_selection"},
	{gauntlet::CharacterMenuName::VALKYRIE_MENU_SELECTION,  "Character/Valkyrie_menu_selection"}
};

const std::vector<std::string>OgreUI::splash_vec = {
	{"Screen/0328.jpg"},
	{"Screen/0330.jpg"},
	{"Screen/0332.jpg"},
	{"Screen/0334.jpg"},
	{"Screen/0336.jpg"},
	{"Screen/0338.jpg"},
	{"Screen/0340.jpg"},
	{"Screen/0342.jpg"},
	{"Screen/0344.jpg"},
	{"Screen/0346.jpg"},
	{"Screen/0348.jpg"},
	{"Screen/0350.jpg"},
	{"Screen/0352.jpg"},
	{"Screen/0354.jpg"},
	{"Screen/0356.jpg"},
	{"Screen/0358.jpg"},
	{"Screen/0360.jpg"},
	{"Screen/0362.jpg"},
	{"Screen/0364.jpg"},
	{"Screen/0366.jpg"},
	{"Screen/0368.jpg"},
	{"Screen/0370.jpg"},
	{"Screen/0372.jpg"},
	{"Screen/0374.jpg"},
	{"Screen/0376.jpg"},
	{"Screen/0378.jpg"},
	{"Screen/0380.jpg"},
	{"Screen/0382.jpg"},
	{"Screen/0384.jpg"},
	{"Screen/0386.jpg"},
	{"Screen/0388.jpg"},
	{"Screen/0390.jpg"},
	{"Screen/0392.jpg"},
	{"Screen/0394.jpg"},
	{"Screen/0396.jpg"},
	{"Screen/0398.jpg"},
	{"Screen/0400.jpg"},
	{"Screen/0402.jpg"},
	{"Screen/0404.jpg"},
	{"Screen/0406.jpg"},
	{"Screen/0408.jpg"},
	{"Screen/0410.jpg"},
	{"Screen/0412.jpg"},
	{"Screen/0414.jpg"},
	{"Screen/0416.jpg"},
	{"Screen/0418.jpg"},
	{"Screen/0420.jpg"},
	{"Screen/0422.jpg"},
	{"Screen/0424.jpg"},
	{"Screen/0426.jpg"},
	{"Screen/0428.jpg"},
	{"Screen/0430.jpg"},
	{"Screen/0432.jpg"},
	{"Screen/0434.jpg"},
	{"Screen/0436.jpg"},
	{"Screen/0438.jpg"},
	{"Screen/0440.jpg"},
	{"Screen/0442.jpg"},
	{"Screen/0444.jpg"},
	{"Screen/0446.jpg"},
	{"Screen/0448.jpg"},
	{"Screen/0450.jpg"},
	{"Screen/0452.jpg"},
	{"Screen/0454.jpg"},
	{"Screen/0456.jpg"},
	{"Screen/0458.jpg"},
	{"Screen/0460.jpg"},
	{"Screen/0462.jpg"},
	{"Screen/0464.jpg"},
	{"Screen/0466.jpg"},
	{"Screen/0468.jpg"},
	{"Screen/0470.jpg"},
	{"Screen/0472.jpg"},
	{"Screen/0474.jpg"},
	{"Screen/0476.jpg"},
	{"Screen/0478.jpg"},
	{"Screen/0480.jpg"},
	{"Screen/0482.jpg"},
	{"Screen/0484.jpg"},
	{"Screen/0486.jpg"},
	{"Screen/0488.jpg"},
	{"Screen/0490.jpg"},
	{"Screen/0492.jpg"},
	{"Screen/0494.jpg"},
	{"Screen/0496.jpg"},
	{"Screen/0498.jpg"},
	{"Screen/0500.jpg"},
	{"Screen/0502.jpg"},
	{"Screen/0504.jpg"},
	{"Screen/0506.jpg"},
	{"Screen/0508.jpg"},
	{"Screen/0510.jpg"},
	{"Screen/0512.jpg"},
	{"Screen/0514.jpg"},
	{"Screen/0516.jpg"},
	{"Screen/0518.jpg"},
	{"Screen/0520.jpg"},
	{"Screen/0522.jpg"},
	{"Screen/0524.jpg"},
	{"Screen/0526.jpg"},
	{"Screen/0528.jpg"},
	{"Screen/0530.jpg"},
	{"Screen/0532.jpg"},
	{"Screen/0534.jpg"},
	{"Screen/0536.jpg"},
	{"Screen/0538.jpg"},
	{"Screen/0540.jpg"},
	{"Screen/0542.jpg"},
	{"Screen/0544.jpg"},
	{"Screen/0546.jpg"},
	{"Screen/0548.jpg"},
	{"Screen/0550.jpg"},
	{"Screen/0552.jpg"},
	{"Screen/0554.jpg"},
	{"Screen/0556.jpg"},
	{"Screen/0558.jpg"},
	{"Screen/0560.jpg"},
	{"Screen/0562.jpg"},
	{"Screen/0564.jpg"},
	{"Screen/0566.jpg"},
	{"Screen/0568.jpg"},
	{"Screen/0570.jpg"},
	{"Screen/0572.jpg"},
	{"Screen/0574.jpg"},
	{"Screen/0576.jpg"},
	{"Screen/0578.jpg"},
	{"Screen/0580.jpg"},
	{"Screen/0582.jpg"},
	{"Screen/0584.jpg"},
	{"Screen/0586.jpg"},
	{"Screen/0588.jpg"},
	{"Screen/0590.jpg"},
	{"Screen/0592.jpg"},
	{"Screen/0594.jpg"},
	{"Screen/0596.jpg"},
	{"Screen/0598.jpg"},
	{"Screen/0600.jpg"},
	{"Screen/0602.jpg"},
	{"Screen/0604.jpg"},
	{"Screen/0606.jpg"},
	{"Screen/0608.jpg"},
	{"Screen/0610.jpg"},
	{"Screen/0612.jpg"},
	{"Screen/0614.jpg"},
	{"Screen/0616.jpg"},
	{"Screen/0618.jpg"},
	{"Screen/0620.jpg"},
	{"Screen/0622.jpg"},
	{"Screen/0624.jpg"},
	{"Screen/0626.jpg"},
	{"Screen/0628.jpg"},
	{"Screen/0630.jpg"},
	{"Screen/0632.jpg"},
	{"Screen/0634.jpg"},
	{"Screen/0636.jpg"},
	{"Screen/0638.jpg"},
	{"Screen/0640.jpg"},
	{"Screen/0642.jpg"},
	{"Screen/0644.jpg"},
	{"Screen/0646.jpg"},
	{"Screen/0648.jpg"},
	{"Screen/0650.jpg"},
	{"Screen/0652.jpg"},
	{"Screen/0654.jpg"},
	{"Screen/0656.jpg"},
	{"Screen/0658.jpg"},
	{"Screen/0660.jpg"},
	{"Screen/0662.jpg"},
	{"Screen/0664.jpg"},
	{"Screen/0666.jpg"},
	{"Screen/0668.jpg"},
	{"Screen/0670.jpg"},
	{"Screen/0672.jpg"},
	{"Screen/0674.jpg"},
	{"Screen/0676.jpg"},
	{"Screen/0678.jpg"},
	{"Screen/0680.jpg"},
	{"Screen/0682.jpg"},
	{"Screen/0684.jpg"},
	{"Screen/0686.jpg"},
	{"Screen/0688.jpg"},
	{"Screen/0690.jpg"},
	{"Screen/0692.jpg"},
	{"Screen/0694.jpg"},
	{"Screen/0696.jpg"},
	{"Screen/0698.jpg"},
	{"Screen/0700.jpg"},
	{"Screen/0702.jpg"},
	{"Screen/0704.jpg"},
	{"Screen/0706.jpg"},
	{"Screen/0708.jpg"},
	{"Screen/0710.jpg"},
	{"Screen/0712.jpg"},
	{"Screen/0714.jpg"},
	{"Screen/0716.jpg"},
	{"Screen/0718.jpg"},
	{"Screen/0720.jpg"},
	{"Screen/0722.jpg"},
	{"Screen/0724.jpg"},
	{"Screen/0726.jpg"},
	{"Screen/0728.jpg"},
	{"Screen/0730.jpg"},
	{"Screen/0732.jpg"},
	{"Screen/0734.jpg"},
	{"Screen/0736.jpg"},
	{"Screen/0738.jpg"},
	{"Screen/0740.jpg"},
	{"Screen/0742.jpg"},
	{"Screen/0744.jpg"},
	{"Screen/0746.jpg"},
	{"Screen/0748.jpg"},
	{"Screen/0750.jpg"},
	{"Screen/0752.jpg"},
	{"Screen/0754.jpg"},
	{"Screen/0756.jpg"},
	{"Screen/0758.jpg"},
	{"Screen/0760.jpg"},
	{"Screen/0762.jpg"},
	{"Screen/0764.jpg"},
	{"Screen/0766.jpg"},
	{"Screen/0768.jpg"},
	{"Screen/0770.jpg"},
	{"Screen/0772.jpg"},
	{"Screen/0774.jpg"},
	{"Screen/0776.jpg"},
	{"Screen/0778.jpg"},
	{"Screen/0780.jpg"},
	{"Screen/0782.jpg"},
	{"Screen/0784.jpg"},
	{"Screen/0786.jpg"},
	{"Screen/0788.jpg"},
	{"Screen/0790.jpg"},
	{"Screen/0792.jpg"},
	{"Screen/0794.jpg"},
	{"Screen/0796.jpg"},
	{"Screen/0798.jpg"},
	{"Screen/0800.jpg"},
	{"Screen/0802.jpg"},
	{"Screen/0804.jpg"},
	{"Screen/0806.jpg"},
	{"Screen/0808.jpg"},
	{"Screen/0810.jpg"},
	{"Screen/0812.jpg"},
	{"Screen/0814.jpg"},
	{"Screen/0816.jpg"},
	{"Screen/0818.jpg"},
	{"Screen/0820.jpg"},
	{"Screen/0822.jpg"},
	{"Screen/0824.jpg"}
};

const std::map<gauntlet::SoundName, std::string>OgreUI::soundmap = {
	{gauntlet::SoundName::MENU_SOUND,               "menu_theme.ogg"},
	{gauntlet::SoundName::AMBIENT_DARKCORRIDORS,    "Ambient - dark corridors.ogg"},
	{gauntlet::SoundName::AMBIENT_UNDERLAND,        "Ambient - underland.ogg"},
	{gauntlet::SoundName::AMBIENT_SEWERS,           "Ambient - sewers.ogg"},
	{gauntlet::SoundName::AMBIENT_LAVA,             "Ambient - lava.ogg"},
	{gauntlet::SoundName::AXE_HIT_SPROSH,           "Axe 1.ogg"},
	{gauntlet::SoundName::AXE_HIT_SOFT,             "Axe 2.ogg"},
	{gauntlet::SoundName::AXE_HIT_HARD,             "Axe 3.ogg"},
	{gauntlet::SoundName::BATS_1,                   "Bats 1.ogg"},
	{gauntlet::SoundName::BATS_2,                   "Bats 2.ogg"},
	{gauntlet::SoundName::BATS_LOOP,                "Bats (loop).ogg"},
	{gauntlet::SoundName::BOW,                      "Bow 1.ogg"},
	{gauntlet::SoundName::BUTTON,                   "Button 3.ogg"},
	{gauntlet::SoundName::COIN_BAG,                 "Coins (bag).ogg"},
	{gauntlet::SoundName::COINS,                    "Coins.ogg"},
	{gauntlet::SoundName::DOOR_METAL_CLOSE,         "Door 1 (metal close).ogg"},
	{gauntlet::SoundName::DOOR_METAL_OPEN,          "Door 1 (metal open).ogg"},
	{gauntlet::SoundName::DOOR_WOOD_CLOSE,          "Door 2 (wood close).ogg"},
	{gauntlet::SoundName::DOOR_WOOD_OPEN,           "Door 2 (wood open).ogg"},
	{gauntlet::SoundName::DOOR_STONE,               "Door 3 (stone).ogg"},
	{gauntlet::SoundName::DOOR_GATE,                "Door 4 (big gate).ogg"},
	{gauntlet::SoundName::EVENT_VICTORY,            "Event 1.ogg"},
	{gauntlet::SoundName::EVENT_DRAMATIC,           "Event 2.ogg"},
	{gauntlet::SoundName::EVENT_DISCOVERY,          "Event 3.ogg"},
	{gauntlet::SoundName::EVENT_DRUMS,              "Event 4.ogg"},
	{gauntlet::SoundName::EVENT_MYSTERY,            "Event 9.ogg"},
	{gauntlet::SoundName::HAMMER_HIT_HARD,          "Hammer 1.ogg"},
	{gauntlet::SoundName::HAMMER_HIT_SOFT,          "Hammer 2.ogg"},
	{gauntlet::SoundName::MAP_CLOSE,                "Map (close).ogg"},
	{gauntlet::SoundName::MAP_OPEN,                 "Map (open).ogg"},
	{gauntlet::SoundName::MUSIC_COMBAT_DRAMATIC,    "Music - dramatic combat.ogg"},
	{gauntlet::SoundName::MUSIC_MASSACRE,           "Music - massacre.ogg"},
	{gauntlet::SoundName::MUSIC_MYSTERIOUS_CAVERNS, "Music - mysterious caverns.ogg"},
	{gauntlet::SoundName::MUSIC_TERROR,             "Music - terror.ogg"},
	{gauntlet::SoundName::MUSIC_MINES,              "Music - through the mines.ogg"},
	{gauntlet::SoundName::MUSIC_UNDERGROUND,        "Music - underground route.ogg"},
	{gauntlet::SoundName::SPIKE_TRAP_1,             "Spiked Trap 1.ogg"},
	{gauntlet::SoundName::SPIKE_TRAP_2,             "Spiked Trap 2.ogg"},
	{gauntlet::SoundName::STEP_STONE_1,             "Step 10 (stone).ogg"},
	{gauntlet::SoundName::STEP_STONE_2,             "Step 11 (stone).ogg"},
	{gauntlet::SoundName::STEP_STONE_3,             "Step 12 (stone).ogg"},
	{gauntlet::SoundName::STEP_STONE_4,             "Step 9 (stone).ogg"},
	{gauntlet::SoundName::SWORD_HIT,                "Sword 1.ogg"},
	{gauntlet::SoundName::SWORD_DRAW,               "Sword 3.ogg"},
	{gauntlet::SoundName::FIRE_SMALL,               "Torch 1 (loop).ogg"},
	{gauntlet::SoundName::FIRE_BIG,                 "Torch 2 (loop).ogg"},
	{gauntlet::SoundName::CORPSE,                   "Treasure Chest (bones).ogg"},
	{gauntlet::SoundName::TREASURE_OPEN,            "Treasure Chest (close)(1).ogg"},
	{gauntlet::SoundName::TREASURE_CLOSE,           "Treasure Chest (open).ogg"},
	{gauntlet::SoundName::RUBBISH,                  "Treasure Chest (rubbish).ogg"},
	{gauntlet::SoundName::WATER_DROP,               "Water Drop 1.ogg"},
	{gauntlet::SoundName::MONSTER_1,                "Beast 1.ogg"},
	{gauntlet::SoundName::MONSTER_2,                "Beast 2.ogg"},
	{gauntlet::SoundName::MONSTER_3,                "Beast 3.ogg"},
	{gauntlet::SoundName::MONSTER_4,                "Beast 4.ogg"},
	{gauntlet::SoundName::MONSTER_5,                "Beast 5.ogg"},
	{gauntlet::SoundName::BEAST_1,                  "Beast Roar 1.ogg"},
	{gauntlet::SoundName::BEAST_2,                  "Beast Roar 2.ogg"},
	{gauntlet::SoundName::BEAST_3,                  "Beast Roar 3.ogg"},
	{gauntlet::SoundName::BEAST_BIG_1,              "Big Beast Roar 1.ogg"},
	{gauntlet::SoundName::BEAST_BIG_2,              "Big Beast Roar 2.ogg"},
	{gauntlet::SoundName::CREATURE_1,               "Creature 1 (insect).ogg"},
	{gauntlet::SoundName::CREATURE_2,               "Creature 2 (insect).ogg"},
	{gauntlet::SoundName::CREATURE_3,               "Creature 3 (insect).ogg"},
	{gauntlet::SoundName::CREATURE_4,               "Creature 4 (insect).ogg"},
	{gauntlet::SoundName::CREATURE_5,               "Creature 5 (insect).ogg"},
	{gauntlet::SoundName::FEMALE_HEAVY_ATTACK,      "Female Voice 10 (heavy attack).ogg"},
	{gauntlet::SoundName::FEMALE_DEATH,             "Female Voice 5 (death).ogg"},
	{gauntlet::SoundName::FEMALE_ATTACK,            "Female Voice 6 (attack).ogg"},
	{gauntlet::SoundName::FEMALE_DOUBLE_ATTACK,     "Female Voice 7 (double attack).ogg"},
	{gauntlet::SoundName::FEMALE_HEAVY_ATTACK_2,    "Female Voice 4 (heavy attack).ogg"},
	{gauntlet::SoundName::FEMALE_HEAVY_ATTACK_3,    "Female Voice 8 (heavy attack).ogg"},
	{gauntlet::SoundName::FEMALE_HEAVY_ATTACK_4,    "Female Voice 9 (heavy attack).ogg"},
	{gauntlet::SoundName::LITTLE_CREATURE_1,        "Little Creature 1.ogg"},
	{gauntlet::SoundName::LITTLE_CREATURE_2,        "Little Creature 2.ogg"},
	{gauntlet::SoundName::LITTLE_CREATURE_3,        "Little Creature 3.ogg"},
	{gauntlet::SoundName::LITTLE_CREATURE_4,        "Little Creature 4.ogg"},
	{gauntlet::SoundName::MALE_ATTACK_1,            "Male Voice A 1 (attack).ogg"},
	{gauntlet::SoundName::MALE_ATTACK_2,            "Male Voice A 2 (attack).ogg"},
	{gauntlet::SoundName::MALE_DEATH,               "Male Voice A 3 (death).ogg"},
	{gauntlet::SoundName::MALE_WOUNDED,             "Male Voice A 4 (wounded).ogg"},
	{gauntlet::SoundName::MALE_HEAVY_ATTACK,        "Male Voice A 5 (heavy attack).ogg"},
	{gauntlet::SoundName::MALE_HEAVY_ATTACK_2,      "Male Voice A 6 (heavy attack).ogg"},
	{gauntlet::SoundName::MALE_2_HEAVY_ATTACK,      "Male Voice B 1 (heavy attack).ogg"},
	{gauntlet::SoundName::MALE_2_WOUNDED,           "Male Voice B 3 (wounded).ogg"},
	{gauntlet::SoundName::MALE_2_HEAVY_ATTACK,      "Male Voice B 4 (heavy attack).ogg"},
	{gauntlet::SoundName::MALE_2_DOUBLE_ATTACK,     "Male Voice B 5 (double attack).ogg"},
	{gauntlet::SoundName::MALE_2_DEATH,             "Male Voice B 6 (death).ogg"},
	{gauntlet::SoundName::ZOMBIE_1,                 "Phantom 1.ogg"},
	{gauntlet::SoundName::ZOMBIE_2,                 "Phantom 2.ogg"},
	{gauntlet::SoundName::ZOMBIE_3,                 "Phantom 3.ogg"},
	{gauntlet::SoundName::GHOST_1,                  "Spirit 1.ogg"},
	{gauntlet::SoundName::GHOST_2,                  "Spirit 2.ogg"},
	{gauntlet::SoundName::GHOST_3,                  "Spirit 3.ogg"},
	{gauntlet::SoundName::GHOST_4,                  "Spirit 4.ogg"},
	{gauntlet::SoundName::GHOST_5,                  "Spirit 5.ogg"},
	{gauntlet::SoundName::GHOST_6,                  "Spirit 6.ogg"},
	{gauntlet::SoundName::MAGIC_REGENERATION,       "mag_alteration_detectlife_cast_2d_lpm.ogg"},
	{gauntlet::SoundName::MAGIC_ARMOR,              "mag_alteration_ironflesh_fire.ogg"},
	{gauntlet::SoundName::MAGIC_CLOAK_IN,           "mag_alteration_release.ogg"},
	{gauntlet::SoundName::MAGIC_CLOAK_OUT,          "mag_cloak_in.ogg"},
	{gauntlet::SoundName::MAGIC_BREAK,              "mag_cloak_out.ogg"},
	{gauntlet::SoundName::MAGIC_EXPLOSION_1,        "mag_destruction_fireball_explosion_01.ogg"},
	{gauntlet::SoundName::MAGIC_EXPLOSION_2,        "mag_destruction_fireball_explosion_02.ogg"},
	{gauntlet::SoundName::MAGIC_EFFECT,             "mag_firebolt_fire_2d.ogg"},
	{gauntlet::SoundName::MAGIC_ICICLE,             "mag_icicle_fire.ogg"},
	{gauntlet::SoundName::MAGIC_EFFECT_2,           "mag_illusion_charm_on_01.ogg"},
	{gauntlet::SoundName::MAGIC_INVISIBILITY,       "mag_illusion_invisibility_in.ogg"},
	{gauntlet::SoundName::MAGIC_RELEASE,            "mag_illusion_release_01.ogg"},
	{gauntlet::SoundName::MAGIC_EFFECT_3,           "mag_nightingale_strife_fire_2d.ogg"},
	{gauntlet::SoundName::MAGIC_SHADOW,             "mag_perk_shadowwarrior_fire_2d.ogg"},
	{gauntlet::SoundName::MAGIC_CLASH,              "mag_perk_shieldcharge_impact_01.ogg"},
	{gauntlet::SoundName::MAGIC_BATTLECRY,          "mag_powerracial_battlecry_fire_2d.ogg"},
	{gauntlet::SoundName::MAGIC_BERSERKER,          "mag_powerracial_berserker_fire_2d.ogg"},
	{gauntlet::SoundName::MAGIC_HEAL,               "mag_restoration_ff_fire_01.ogg"},
	{gauntlet::SoundName::MAGIC_SHOCK,              "mag_shout_ff_fire_01.ogg"},
	{gauntlet::SoundName::MAGIC_SPRINT,             "mag_shout_sprint_fire.ogg"},
	{gauntlet::SoundName::MAGIC_ABSORB,             "mag_wardtest_absorb.ogg"},
	{gauntlet::SoundName::MAGIC_GLASS_BREAK,        "mag_wardtest_break.ogg"},
	{gauntlet::SoundName::MAGIC_EFFECT_4,           "mag_wardtest_cast.ogg"},
	{gauntlet::SoundName::PRISON_FIGHT, 			"10 - Prison Fight.mp3"},
	{gauntlet::SoundName::SNAKE_CULT, 				"13 - Snake Cult Estate.mp3"},
	{gauntlet::SoundName::WARRENS_OF_THE_DAMNED, 	"15 - Warrens of the Damned.mp3"},
	{gauntlet::SoundName::STREET_ENCOUNTER, 		"16 - Street Encounter.mp3"},
	{gauntlet::SoundName::NEVER_TOMB, 				"21 - Never's Tomb.mp3"},
	{gauntlet::SoundName::DRUID_CIRCLE, 			"37 - Druid Challenge Circle.mp3"},
	{gauntlet::SoundName::NORTH_ROAD, 				"40 - North Road.mp3"},
	{gauntlet::SoundName::SOLOMON_AMBUSH, 			"41 - Solomon's Ambush.mp3"},
	{gauntlet::SoundName::HIGH_CAPTAIN, 			"43 - High Captain's War.mp3"},
	{gauntlet::SoundName::FORT_ILLKARD, 			"54 - Siege of Fort Ilkard.mp3"},
	{gauntlet::SoundName::ELK_TRIBE, 				"55 - Elk Tribe Keep.mp3"},
	{gauntlet::SoundName::KLAUTH_DEMISE, 			"56 - Klauth's Demise.mp3"},
	{gauntlet::SoundName::WAR_ZONE, 				"58 - War Zone.mp3"},
	{gauntlet::SoundName::ARIBETH_BATTLE, 			"60 - Battle Aribeth.mp3"},
	{gauntlet::SoundName::LIZARDFOLK_SANCTUARY, 	"62 - Lizardfolk Sanctuary.mp3"},
	{gauntlet::SoundName::SOURCE_STONE, 			"63 - Source Stone Battle.mp3"},
	{gauntlet::SoundName::TRACKING_KOBOLD, 			"65 - Tracking the Kobold Raiders.mp3"},
	{gauntlet::SoundName::QUEEN_SHATTERED, 			"69 - Queen of the Shattered Mirror.mp3"}
};
