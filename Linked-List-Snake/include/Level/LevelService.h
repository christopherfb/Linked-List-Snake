#pragma once

#include "LevelController.h"
#include "LevelNumber.h";

namespace Level {

	class LevelService {
	public:
		LevelService();
		~LevelService();

		void initialize();
		void update();
		void render();
		
		void createLevel(LevelNumber level_to_load);
		void createLevelController();

	private:
		LevelController* level_controller = nullptr;
		LevelNumber current_level;
	};
}