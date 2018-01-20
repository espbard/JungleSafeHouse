#pragma once

#include "game_input.hpp"
#include "game_world.hpp"

#include <engine.hpp>
#include <camera.hpp>
#include <ui.hpp>

class player_object;

class game_state : public ne::program_state {
public:

	ne::ortho_camera camera;
	game_input input;
	game_world world;

	ne::font_text fps_label;

	game_state();
	~game_state() override;

	void update() override;
	void draw() override;

};
