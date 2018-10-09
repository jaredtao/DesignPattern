#include "SafeFrame.h"
#include "DayState.h"
#include "NightState.h"
#include <iostream>
SafeFrame::SafeFrame() : m_state(&DayState::GetInstance()) {}
void SafeFrame::setClock(int hour)
{
    std::cout << "now timw is " << hour << std::endl;
    m_state->doColock(this, hour);
}
void SafeFrame::doAction(ActionType actionType)
{
    switch (actionType)
    {
        case ActionType::Alarm:
            m_state->doAlarm(this);
            break;
        case ActionType::Phone:
            m_state->doPhone(this);
            break;
        case ActionType::Use:
        default:
            m_state->doUse(this);
            break;
    }
}
void SafeFrame::stateChange(IState *state)
{
    std::cout << __FUNCTION__ << std::endl;
    m_state = state;
}
void SafeFrame::callSecurityCenter(const std::string &msg)
{
    std::cout << __FUNCTION__ << " " << msg << std::endl;
}
void SafeFrame::recoderLog(const std::string &msg)
{
    std::cout << __FUNCTION__ << " " << msg << std::endl;
}
