#pragma once

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

struct SDL_Window;
struct SDL_Renderer;
class Vector;

class Gui {
public:
	// Initialise SDL and create window.
	Gui();
	virtual ~Gui();

	void setPixel(int x, int y, Vector const& color);
	void render();
	
private:
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
};