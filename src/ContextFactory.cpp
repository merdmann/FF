/*
 * Copyright (C) 2014 Michael Erdmann <michael.erdmann@snafu.de>
 * 
 * ContextFactory.cpp is part of forward.
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
#include <string>
#include <strings.h>
#include <map>

#include "ContextFactory.h"
#include "IComponent.h"

// this is one of the possible return classes
#include "MyContext.h"

namespace app {


static std::map<std::string, IComponent* > component_;

void Register(std::string id, IComponent *component) {
	component_[id] = component;
}

IComponent* GetComponent(std::string type) {
	return component_[type];
}

ContextFactory::ContextFactory() {
	// TODO Auto-generated constructor stub

}

ContextFactory::~ContextFactory() {
	// TODO Auto-generated destructor stub
}


IAppContext* ContextFactory::createContext(std::string type) {
	IComponent *comp = component_[type];

	IAppContext* ctx = comp->create();
	ctx->setComponent(comp);

	return ctx;
}

} /* namespace adventure */
