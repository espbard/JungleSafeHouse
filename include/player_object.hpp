#pragma once

#include "game_object.hpp"

class player_object : public game_object {
public:

	bool is_running = false;

	player_object(game_state * game);
	~player_object() override;

	game_object_type type() const override {
		return game_object_type::player;
	}

	virtual void update(game_world* world) override;
	virtual void draw() override;
	virtual void write(ne::memory_buffer* buffer) override;
	virtual void read(ne::memory_buffer* buffer) override;

private:

	int up_hit = -1;

};
