#ifndef RunAction_h
#define RunAction_h 1

#include "Analysis.hh"
#include "G4UserRunAction.hh"
#include "globals.hh"

class EventAction;
class G4Run;

class RunAction : public G4UserRunAction{
  public:
    RunAction();
    RunAction(EventAction*);
   ~RunAction();

  public:
    virtual void BeginOfRunAction(const G4Run*);
    virtual void EndOfRunAction(const G4Run*);

  private:
    EventAction* fEventAction;
};

#endif
