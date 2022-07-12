#include <TwoReel.h>

class SandBox : public TwoReel::Application
{
public:
	SandBox()
	{
	}

	~SandBox()
	{
	}
};

TwoReel::Application* TwoReel::CreateApplication()
{
	return new SandBox();
}
