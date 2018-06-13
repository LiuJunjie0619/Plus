#include <iostream>
#include "tv.h"

bool Tv::volup()
{
    if(m_volume < MaxVal)
    {
        m_volume++;
        return true;
    }
    else
        return false;
}
bool Tv::voldown()
{
    if(m_volume > MinVal)
    {
        m_volume--;
        return true;
    }
    else
        return false;
}
void Tv::chanup()
{
    if(m_channel < m_maxchannel)
        m_channel++;
    else
        m_channel=1;
}
void Tv::chandown()
{
    if(m_channel > 1)
        m_channel--;
    else
        m_channel = m_maxchannel;
}
void Tv::settings() const
{
    using std::cout;
    using std::endl;
    cout << "TV is " << (m_state == Off?"Off":"On") << endl;
    if(m_state == On)
    {
        cout << "Volume setting = " << m_volume << endl;
        std::cout << "Channel setting = " << m_channel << std::endl;
        std::cout << "Mode = " << (m_mode == Antenna?"antenna":"cable") << std::endl;
        std::cout << "Input = " << (m_input == TV?"TV":"DVD") << std::endl;
    }
}
