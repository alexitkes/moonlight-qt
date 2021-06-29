#ifndef PORTSETTINGS_H
#define PORTSETTINGS_H


class PortSettings
{
public:
    static PortSettings * getInstance();

    int getPort_47984() const;
    void setPort_47984(int value);

    int getPort_47989() const;
    void setPort_47989(int value);

    int getPort_47998() const;
    void setPort_47998(int value);

    int getPort_47999() const;
    void setPort_47999(int value);

    int getPort_48000() const;
    void setPort_48000(int value);

    int getPort_48010() const;
    void setPort_48010(int value);

    void update();

private:
    PortSettings();

    int port_47984;
    int port_47989;
    int port_47998;
    int port_47999;
    int port_48000;
    int port_48010;

    static PortSettings * instance;
};

#endif // PORTSETTINGS_H
