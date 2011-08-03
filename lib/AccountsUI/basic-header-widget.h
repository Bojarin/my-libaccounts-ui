/*
 * This file is part of accounts-ui
 *
 * Copyright (C) 2009-2010 Nokia Corporation.
 *
 * Contact: Tomi Suviola <tomi.suviola@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef BASICHEADERWIDGET_H
#define BASICHEADERWIDGET_H

#include "basic-item-widget.h"
#include <QObject>

namespace AccountsUI {

class BasicHeaderWidget : public BasicItemWidget
{
    Q_OBJECT

public:
    BasicHeaderWidget(BasicItemWidgetType type, QGraphicsItem *parent = 0);
    ~BasicHeaderWidget();
};

} // namespace


#endif // BASICHEADERWIDGET_H
