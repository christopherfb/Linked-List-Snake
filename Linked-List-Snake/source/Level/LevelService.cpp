#include "Level/LevelService.h"
#include "Main/GameService.h"

namespace Level {
	Level::LevelService::LevelService()
	{
		createLevelController();
	}
	LevelService::~LevelService()
	{
		delete level_controller;
		level_controller = nullptr;
	}
	void LevelService::initialize()
	{
		if (level_controller) {
			level_controller->initialize();
		}
	}
	void LevelService::update()
	{
		if (level_controller) {
			level_controller->update();
			
		}
	}
	void LevelService::render()
	{
			if (level_controller) {
				level_controller->render();
			}
		
	}
	void LevelService::createLevel(LevelNumber level_to_load)
	{
		current_level = level_to_load;
	}
	void LevelService::createLevelController()
	{
		level_controller = new LevelController();
	}
}