#include "Level_2.h"



Level_2::Level_2()
{
}

void Level_2::generateMap()
{

	LevelWidth = 41;
	LevelHeight = 20;
	Map += "#########  #################  ###########";
	Map += "#     #    #        # #       #         #";
	Map += "# ##### ##### # # # # # # ### ### ##  # #";
	Map += "#     #     # # # # # # #   #     #   # #";
	Map += "# ### ### # ### # ### # ### ####### # ###";
	Map += "# #   # # #     #   # #   # #   #   #   #";
	Map += "# # ### # ######### # ### # # ### ##### #";
	Map += "# #     # #    #    #   # # #     #     #";
	Map += "##### ### #  # # #### # # # ####### #####";
	Map += "#     #   #  # #    # # # #       #     #";
	Map += "# ##### # #  ###### # ### # ########### #";
	Map += "# #   ### ##  #   # #   # #   #       # #";
	Map += "#   # #       # #   # #   # #    ###### #";
	Map += "##### # ####### ### # ##### ######    # #";
	Map += "#     #   #     #   # #     #   #  #    #";
	Map += "# ####### # #####   ### ##### # # #######";
	Map += "# #       # #     ###       # # #       #";
	Map += "# # # ##### # ##### # ####### ######### #";
	Map += "#   #     # #       #         #         #";
	Map += "###########W###################W#########";
}


Level_2::~Level_2()
{
	Map.clear();
}
