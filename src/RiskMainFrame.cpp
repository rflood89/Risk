#include "RiskMainFrame.hpp"

void RiskMainFrame::Initialise() {
}

RiskMainFrame::RiskMainFrame(const wxString &argTitle, GameData *argGameData)
  : wxFrame(NULL, wxID_ANY, argTitle, wxDefaultPosition, wxSize(800, 600)) {
  m_gameData = argGameData;
}

RiskMainFrame::~RiskMainFrame() {
}
