#ifndef TELEVISION_H
#define TELEVISION_H
class Television
{
    private:
        bool status;
        int volume;
        int channel;
    public:
        Television();
        void toggleOnOff();
        void changeVolume();
        void changeChannel();
        void getFullStatus();
};
#endif