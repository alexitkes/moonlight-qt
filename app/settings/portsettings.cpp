#include "portsettings.h"

PortSettings * PortSettings::getInstance()
{
    if (!PortSettings::instance) {
        PortSettings::instance = new PortSettings();
    }
    return PortSettings::instance;
}

PortSettings::PortSettings()
{
    port_47984 = 51004;
    port_47989 = 51003;
    port_47998 = 51000;
    port_47999 = 51001;
    port_48000 = 51002;
    port_48010 = 51005;

//    port_47984 = 47984;
//    port_47989 = 47989;
//    port_47998 = 47998;
//    port_47999 = 47999;
//    port_48000 = 48000;
//    port_48010 = 48010;
}

int PortSettings::getPort_48010() const
{
    return port_48010;
}

void PortSettings::setPort_48010(int value)
{
    port_48010 = value;
}

int PortSettings::getPort_48000() const
{
    return port_48000;
}

void PortSettings::setPort_48000(int value)
{
    port_48000 = value;
}

int PortSettings::getPort_47999() const
{
    return port_47999;
}

void PortSettings::setPort_47999(int value)
{
    port_47999 = value;
}

int PortSettings::getPort_47998() const
{
    return port_47998;
}

void PortSettings::setPort_47998(int value)
{
    port_47998 = value;
}

int PortSettings::getPort_47989() const
{
    return port_47989;
}

void PortSettings::setPort_47989(int value)
{
    port_47989 = value;
}

int PortSettings::getPort_47984() const
{
    return port_47984;
}

void PortSettings::setPort_47984(int value)
{
    port_47984 = value;
}

PortSettings * PortSettings::instance;
