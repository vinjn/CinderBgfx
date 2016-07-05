#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderBgfxApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void CinderBgfxApp::setup()
{
}

void CinderBgfxApp::mouseDown( MouseEvent event )
{
}

void CinderBgfxApp::update()
{
}

void CinderBgfxApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( CinderBgfxApp, RendererGl )
