#ifndef TV_H
#define TV_H


class Tv
{
public:
    friend class Remote;
    enum{Off,On};
    enum{MinVal,MaxVal=20};
    enum{Antenna,Cable};
    enum{TV,DVD};

    Tv(int s=Off,int mc=125):m_state(s),m_volume(5),m_maxchannel(mc),m_channel(2),m_mode(Cable),m_input(TV){}
    void onoff(){m_state = (m_state == On) ? Off : On;}
    bool ison() const {return m_state == On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode(){m_mode = (m_mode == Antenna)?Cable:Antenna;}
    void set_input(){m_input = (m_input == TV)?DVD:TV;}
    void settings() const;      //display all settings
private:
    int m_state;        //on or off
    int m_volume;       //assumed to be digitized   假定是数字化的
    int m_maxchannel;   //maximum number of channels
    int m_channel;      //current channel setting
    int m_mode;         //broadcast or cable 天线或有线
    int m_input;        //TV or DVD
};
class Remote
{
private:
    int m_mode;     //controls TV or DVD
public:
    Remote(int m=Tv::TV):m_mode(m){}
    bool volup(Tv & t){return t.volup();}
    bool voldown(Tv & t){return t.voldown();}
    void onoff(Tv & t){t.onoff();}
    void chanup(Tv & t){t.chanup();}
    void chandown(Tv & t){t.chandown();}
    void set_chan(Tv & t,int c){t.m_channel=c;}
    void set_mode(Tv & t){t.set_mode();}
    void set_input(Tv & t){t.set_input();}
};
#endif // TV_H
