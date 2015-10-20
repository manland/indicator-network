/*
 * Copyright (C) 2015 Canonical, Ltd.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *     Pete Woods <pete.woods@canonical.com>
 */

#pragma once

#include <connectivity-service/dbus-vpn-connection.h>

class OpenVpnAdaptor;

namespace connectivity_service
{

class DBusOpenvpnConnection : public DBusVpnConnection
{
    friend OpenVpnAdaptor;

    Q_OBJECT

public:
    DBusOpenvpnConnection(nmofono::vpn::VpnConnection::SPtr vpnConnection, const QDBusConnection& connection);

    ~DBusOpenvpnConnection();

    nmofono::vpn::VpnConnection::Type type() const override;
};

}
