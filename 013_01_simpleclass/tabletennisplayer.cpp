#include "tabletennisplayer.h"

TableTennisPlayer::TableTennisPlayer(const std::string & fn,
                                     const std::string & ln,
                                     bool ht)
    :m_firstName(fn),m_lastName(ln),m_hasTable(ht)
{

}

void TableTennisPlayer::Name() const
{
    std::cout << m_lastName << "," << m_firstName;
}
