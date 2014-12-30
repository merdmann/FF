/*
 * Copyright (C) 2014 Michael Erdmann <michael.erdmann@snafu.de>
 * 
 * IAppContext.cpp is part of forward.
 *
 * forward is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * forward is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with forward. If not, see <http://www.gnu.org/licenses/>.
 *
 *  Created on: Dec 30, 2014
 *      Author: MIchael
 */

#include "IAppContext.h"

namespace app {

IAppContext::IAppContext(ContextFactory* factory) {
	// TODO Auto-generated constructor stub
	this->factory_ = factory;
	this->component_ = 0;

}

IAppContext::~IAppContext() {
	// TODO Auto-generated destructor stub
}

void IAppContext::setComponent(IComponent* component) {
	this->component_ = component;
}

bool IAppContext::run() {
	IAppContext *ctx = this;
	return this->component_->run(ctx);
}

} /* namespace adventure */
