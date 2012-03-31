#ifndef _RISK_MAIN_FRAME_HPP_
#define _RISK_MAIN_FRAME_HPP_

#include <wx/frame.h>
#include "GameData.hpp"

class RiskMainFrame : public wxFrame {
public:
  void Initialise();

  RiskMainFrame(const wxString&, GameData*);
  virtual ~RiskMainFrame();

private:
  GameData *m_gameData;

};

#endif
