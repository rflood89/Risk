#include <wx/wx.h>
#include "GameData.hpp"
#include "RiskMainFrame.hpp"

class RiskApp : public wxApp {
  virtual bool OnInit() {
    GameData *gameData = new GameData();
    gameData->Reset();

    RiskMainFrame *frame = new RiskMainFrame(wxT("Risk"), gameData);
    frame->Show(true);
    SetTopWindow(frame);
    return true;
  }
};

IMPLEMENT_APP(RiskApp)
