/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -p ofonomodemnetworkregistration.h -c OfonoModemNetworkRegistration ofonomodem.xml org.ofono.NetworkRegistration
 *
 * qdbusxml2cpp is Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "ofonomodemnetworkregistration.h"

/*
 * Implementation of interface class OfonoModemNetworkRegistration
 */

OfonoModemNetworkRegistration::OfonoModemNetworkRegistration(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OfonoModemNetworkRegistration::~OfonoModemNetworkRegistration()
{
}
